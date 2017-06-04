//
//  Person.swift
//  SwiftCppKit
//
//  Created by 李修冶 on 2017/6/4.
//  Copyright © 2017年 李修冶. All rights reserved.
//

import Foundation
import SwiftCppExtern


open class Person {

    private let cpp_person : CPP_Person
    
    public init() {
        cpp_person = person_init()
    }
    
    public init(name : String , age : Int , sex : Bool){
        cpp_person = person_init_name_age_sex(name, Int32(age), sex)
    }
    
    open func introduceMySelf(){
        person_introduceMySelf(cpp_person)
    }
    
    open func hello(other : Person){
        person_hello(cpp_person, other.cpp_person)
    }
    
    deinit {
        person_deinit(cpp_person)
    }
    
}
