//
//  PersonExtern.h
//  SwiftCppKit
//
//  Created by 李修冶 on 2017/6/4.
//  Copyright © 2017年 李修冶. All rights reserved.
//

#ifndef PersonExtern_h
#define PersonExtern_h

#include <stdbool.h>

typedef void* CPP_Person;

#ifdef __cplusplus
extern "C"{
#endif
    //在这里写上c的代码
    
    //初始化一个Person的实例
    CPP_Person person_init();
    
    //person调用自我介绍的方法
    void person_introduceMySelf(CPP_Person person);
    void person_hello(CPP_Person person , CPP_Person other);
    
    
    //带参构造器
    CPP_Person person_init_name_age_sex(const char * name , const int age , const bool sex);
    
    //析构函数
    void person_deinit(CPP_Person person);
    

#ifdef __cplusplus
}
#endif

#endif /* PersonExtern_h */
