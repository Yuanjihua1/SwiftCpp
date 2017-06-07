//
//  ViewController.swift
//  SwiftCppDemo
//
//  Created by 李修冶 on 2017/6/4.
//  Copyright © 2017年 李修冶. All rights reserved.
//

import UIKit
import SwiftCppKit

class ViewController: UIViewController {
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        let person = Person(name: "XiaoHong", age: 23, sex: false)
//        person.introduceMySelf()
        person.hello(other: Person())
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }


}

