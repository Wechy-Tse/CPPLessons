//
//  median.cpp
//  L10FINAL
//
//  Created by 谢伟智 on 16/3/5.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <stdexcept>
#include "median.h"
#include <algorithm>

double median(std::vector<double> vec){
    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    if (0 == size) {
        throw std::domain_error("median of an empty vector");
    }
    std::sort(vec.begin(), vec.end());
    vec_sz mid = size/2;
    return size % 2 == 0?(vec[mid]+vec[mid-1])/2:vec[mid];
}


