//
//  Person.hpp
//  SwiftCppKit
//
//  Created by 李修冶 on 2017/6/4.
//  Copyright © 2017年 李修冶. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Person {
    
public:
    string name;
    int age;
    bool sex;
    
public:
    Person();
    Person(const char* name , const int age , const bool sex);
    ~Person();
    
    void introduceMySelf();
    void hello(Person* other);
};


#endif /* Person_hpp */
