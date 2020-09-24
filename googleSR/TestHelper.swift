//
//  TestHelper.swift
//  Newsdk
//
//  Created by Ganesh on 23/09/20.
//  Copyright © 2020 Dotsquares. All rights reserved.
//

import Foundation
import UIKit
open class Helper:NSObject{
    
    open class func openSDKDashboard()->UIViewController?{
        print( "Hello am here and ready oprn use sdk ------------")
        
       return DashboardVC.getObject()
    }
    
   
    
    
}
