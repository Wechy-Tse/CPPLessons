//
//  main.cpp
//  L10FINAL
//
//  Created by 谢伟智 on 16/3/5.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.hpp"
#include "Student_info.hpp"

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::max;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;
    
    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }
    
    sort(students.begin(), students.end(), compare);
    
    for (std::vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        
        cout << std::setw(maxlen + 1) << students[i].name;
        
        try {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
            << setprecision(prec);
        } catch (std::domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}


// /Users/Wechy/Study/C++/CPPLessons/code/ide/xcode/L10FINAL/L10FINAL/main.cpp:52:29: Implicit conversion loses integer precision: 'streamsize' (aka 'long') to 'int'
