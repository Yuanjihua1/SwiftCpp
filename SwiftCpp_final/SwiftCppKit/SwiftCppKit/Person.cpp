//
//  Person.cpp
//  SwiftCppKit
//
//  Created by 李修冶 on 2017/6/4.
//  Copyright © 2017年 李修冶. All rights reserved.
//

#include "Person.hpp"
#include "PersonExtern.h"

Person::Person(){
    age = 0;
    sex = true;
    name = "cpp";
}

Person::Person(const char* name , const int age , const bool sex){
    this->age = age;
    this->sex = sex;
    
    long len = strlen(name);
    char * cpname = new char[len + 1];
    strcpy(cpname, name);
    this->name = cpname;
}

Person::~Person(){
    cout << "person destruct (调用析构函数)\n";
}

void Person::introduceMySelf(){
    cout << "hello , i am " << name << ", my age is " << age << " year, ";
    if (sex) {
        cout << "i am boy\n";
    }else{
        cout << "i am girl\n";
    }
}

void Person::hello(Person *other){
    cout << "hello " << other->name << ", I am " << this->name << "\n";
}

//MARK:- 实现PersonExtern.h中的方法
CPP_Person person_init(){
    return new Person();
}

void person_introduceMySelf(CPP_Person person){
    Person * p = (Person*)person;
    p->introduceMySelf();
}

void person_hello(CPP_Person person , CPP_Person other){
    Person * per = (Person*)person;
    Person * otherPer = (Person*)other;
    
    per->hello(otherPer);
}

CPP_Person person_init_name_age_sex( const char * name , const int age , const bool sex){
    
    long len = strlen(name);
    char * cpname = new char[len + 1];
    strcpy(cpname, name);
    
    return new Person(cpname, age, sex);
}

void person_deinit(CPP_Person person){
    delete (Person*)person;
}
