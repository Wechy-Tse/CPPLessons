//
//  Student_info.cpp
//  L10FINAL
//
//  Created by 谢伟智 on 16/3/5.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include "Student_info.hpp"

std::istream& read_hw(std::istream& in, std::vector<double>& hw){
    if (in) {
        hw.clear();
        double x;
        while (in >> x) {
            hw.push_back(x);
        }
        in.clear();
    }
    return in;
}

std::istream& read(std::istream& is, Student_info& s){
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);
    return is;
}

bool compare(const Student_info& x, const Student_info& y){
    return x.name < y.name;
}


