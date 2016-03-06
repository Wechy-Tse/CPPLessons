//
//  grade.hpp
//  L10FINAL
//
//  Created by 谢伟智 on 16/3/5.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#ifndef grade_hpp
#define grade_hpp

#include <vector>
#include "Student_info.hpp"
#include "median.h"
#include <list>

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

std::vector<Student_info> extract_fails(std::vector<Student_info>&);
std::list<Student_info> extract_fails(std::list<Student_info>&);
bool fgrade(const Student_info&);

#endif /* grade_hpp */
