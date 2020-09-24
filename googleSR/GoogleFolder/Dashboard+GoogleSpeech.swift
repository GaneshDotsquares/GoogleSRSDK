//
//  Dashboard+GoogleSpeech.swift
//  RRApp
//
//  Created by Ganesh on 27/03/20.
//  Copyright © 2020 Dotsquares. All rights reserved.
//

import Foundation
import googleapis
import AVFoundation
import UIKit

let SAMPLE_RATE = 16000

extension DashboardVC:AudioControllerDelegate{
    
    func processSampleData(_ data: Data) {
        audioData.append(data)
        // We recommend sending samples in 100ms chunks
        let chunkSize : Int /* bytes/chunk */ = Int(0.1 /* seconds/chunk */
            * Double(SAMPLE_RATE) /* samples/second */
            * 2 /* bytes/sample */);
       //  print("chunkSize == ",chunkSize)
        if (audioData.length > chunkSize) {
            SpeechRecognitionService.sharedInstance.streamAudioData(audioData,   completion:
                { [weak self] (response, error) in
                 
                    guard let strongSelf = self else {
                        return
                    }
                    // invalid timer
                      strongSelf.invalidTimer()
                    
                 
                    if let error = error {
                        //                  strongSelf.textView.text = error.localizedDescription
                       // print("Google error",error.localizedDescription)
                     //   strongSelf.btnMice.isSelected = false
                        strongSelf.stopGoogleAudio()
                    } else if let response = response {
                       print("**APPSPECTOR** Google's Answer")
                        print(response)
                       print("**APPSPECTOR** Google's Listening timer increase")
                       // strongSelf.currentTime =  0
                             for result in response.resultsArray! {
                                if let result = result as? StreamingRecognitionResult {
                                    if result.isFinal {
                                        let alternatuve = result.alternativesArray.firstObject as? SpeechRecognitionAlternative
                                        print(alternatuve?.transcript as Any)
                                        strongSelf.curentRecordedText =  alternatuve?.transcript ?? ""
                                        strongSelf.finished = true
                                    }
                                }
                            }
 
                        if strongSelf.finished {
                            DispatchQueue.main.async{
print( "**APPSPECTOR** Google's Answer taken ==  \(strongSelf.curentRecordedText ?? "")")
                                strongSelf.finished = false
//                                strongSelf.btnMice?.isEnabled = true
                                strongSelf.stopGoogleAudio()
//                                strongSelf.isQuiz = false
                                if strongSelf.currentTime <= 6.0{
                                    strongSelf.googleCloser?( (strongSelf.curentRecordedText ?? ""), true)
                                }
                                strongSelf.currentTime =  6.1
                                
                            }
                            
                        }
                    }
            })
            self.audioData = NSMutableData()
        }
    }
    
    
    
    func stopGoogleAudio(){
        if SpeechRecognitionService.sharedInstance.isStreaming() == true || AudioController.sharedInstance.remoteIOUnit != nil{
            _ = AudioController.sharedInstance.stop()
                   SpeechRecognitionService.sharedInstance.stopStreaming()
        }

     }
    
    func startGoogleRecording(){
        do {
            try AVAudioSession.sharedInstance().setCategory(.playAndRecord, mode: .default)
            do {
                try AVAudioSession.sharedInstance().setActive(true, options: .notifyOthersOnDeactivation)
                
               DispatchQueue.main.async {
                // self.isPlaySound(false)
                self.curentRecordedText =  ""
                self.audioData = NSMutableData()
                _ = AudioController.sharedInstance.prepare(specifiedSampleRate: SAMPLE_RATE)
                SpeechRecognitionService.sharedInstance.sampleRate = SAMPLE_RATE
                _ = AudioController.sharedInstance.start()
                self.currentTime = 0
                self.countForStopTalking = 6.0
                self.invalidTimer()
                self.timerForSeekProgress = Timer.scheduledTimer(timeInterval: 0.009, target: self, selector: #selector(self.timerWaitForGoogle(_:)), userInfo: nil, repeats: true)
                // print("*********************** start google listing ***********************")
                self.googleCloser = nil
                self.googleCloser = { (message, isSuccess) in
                   print("Google recorded message --------------\n",message)
                }
            }
            }
            catch {
               // self.updateUIForErrorSpeechOrRecording()
                return
            }
            
        }
          catch {
           // self.updateUIForErrorSpeechOrRecording()
            return
       }
    }
    
    
     
    @objc internal func timerWaitForGoogle(_ timer:Timer) {
        if currentTime > self.countForStopTalking{
            self.invalidTimer()
            self.stopGoogleAudio()
            DispatchQueue.main.asyncAfter(deadline: .now()+1.0) {
                 if  let str =   self.curentRecordedText, !str.isEmpty{
                   self.googleCloser?(str,true)
                   self.googleCloser = nil
                }
                else{
                    self.googleCloser?("",false)
                }
                
            }
            
        }
        currentTime += timer.timeInterval
        // print(currentTime)
    }
     
    
   

  
    
   
     
}
