//
//  main.cpp
//  L01OOP
//
//  Created by 谢伟智 on 16/2/21.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <ios>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    // 请求输入并读入学生的姓名
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    
    // 请求输入并读入期中和期末成绩
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    
    // 请求输入家庭作业成绩
    cout << "Enter all your homework grades, followed by end-of-file:  ";
    vector<double> homework;
    double x;
    
    // 不变式： homework包含了所有的家庭作业成绩
    while (cin >> x) {
        homework.push_back(x);
    }
    // 检查homework是否为空
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if(size == 0){
        cout << endl << "You must enter your grades. " << "Please try again." << endl;
        return 1;
    }
    
    // 对成绩进行排序
    sort(homework.begin(), homework.end());
    
    // 计算家庭作业成绩中值
    vec_sz mid = size/2;
    double median;
    median = (size % 2 == 0) ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];
    
    // 计算并输出总成绩
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec) << endl;
    return 0;
}
