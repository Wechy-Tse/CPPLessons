//
//  iterator.cpp
//  L05VECTOR
//
//  Created by 谢伟智 on 16/2/25.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <stdio.h>
#include "iterator.h"
#include <iostream>

void testIterator(std::string s){
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
    }
    std::cout << s << std::endl;
}