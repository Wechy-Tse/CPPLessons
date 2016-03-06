//
//  grade.cpp
//  L10FINAL
//
//  Created by 谢伟智 on 16/3/5.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include "grade.hpp"

using std::vector;
using std::domain_error;
double grade(double midterm, double final, double homework){
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw){
    if (0 == hw.size()) {
        throw domain_error("student has done no homework");
    }
    return grade(midterm, final, median(hw));
}

double grade(const Student_info& s){
    return grade(s.midterm, s.final, s.homework);
}

bool fgrade(const Student_info& s){
    return grade(s) < 60;
}

//std::vector<Student_info> extract_fails(std::vector<Student_info>& students){
//    std::vector<Student_info> fail;
//    std::vector<Student_info>:: size_type i = 0;
//    
//    while (i != students.size()) {
//        if (fgrade(students[i])) {
//            fail.push_back(students[i]);
//            students.erase(students.begin() + i);
//        }else
//            ++i;
//    }
//    return fail;
//}

std::vector<Student_info> extract_fails(std::vector<Student_info>& students){
    std::vector<Student_info> fail;
    std::vector<Student_info>::iterator iter = students.begin();
    
    while (iter != students.end()) {
        if (fgrade(*iter)) {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }else
            ++iter;
    }
    return fail;
}

std::list<Student_info> extract_fails(std::list<Student_info>& students){
    std::list<Student_info> fail;
    std::list<Student_info>::iterator iter = students.begin();
    
    while (iter != students.end()) {
        if (fgrade(*iter)) {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }else
            ++iter;
    }
    return fail;
}



