//
//  ViewController.swift
//  Newsdk
//
//  Created by Ganesh on 23/09/20.
//  Copyright © 2020 Dotsquares. All rights reserved.
//

import UIKit

open class DashboardVC: UIViewController {
    var audioData: NSMutableData!
    var curentRecordedText:String? = ""
    var finished = false
    var timerForSeekProgress:Timer? = Timer()
    var currentTime = 0.0
    var countForStopTalking = 1.5
    var googleCloser :((String,Bool)->())?
    open override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        AudioController.sharedInstance.delegate = self
    }
    
    @IBAction func btnMicAction(_ sender:UIButton){
        updateUIForStartGoogleListing()
    }
    
    open  class  func getObject()->DashboardVC{
        return  UIStoryboard(name: "SDK", bundle: Bundle(for: self)).instantiateViewController(withIdentifier: "DashboardVC") as! DashboardVC
        
    }
    
    func updateUIForStartGoogleListing(){
        //            UnionPubQuiz.sharedInstance.isMicListening?(true)
        //              Utility.debugPrint(any: "**APPSPECTOR** user button tab remaining second \(self.lblCountDown?.text ?? "")")
        //            screenState = .Runing
        //           self.imgMic?.image = UIImage(named: "started", in: Bundle(for: type(of: self)), compatibleWith: nil)
        //           self.lblsuggestion?.text =  nil
        //          // self.imgMic?.zoomIn(duration: 0.3)
        //            Utility.debugPrint(any: "**APPSPECTOR** Google start listening for question")
        //          self.isPlaySound(true)
        self.startGoogleRecording()
        
        
    }
    
    func invalidTimer(){
        timerForSeekProgress?.invalidate()
        timerForSeekProgress =  nil
    }
    
}

