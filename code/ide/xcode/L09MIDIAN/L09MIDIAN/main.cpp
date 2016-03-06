//
//  main.cpp
//  L09MIDIAN
//
//  Created by 谢伟智 on 16/3/3.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Student_info{
    string name;
    double midterm, final;
    vector<double> homework;
};

double grade(double midterm, double final, double homework);
double grade(double midterm, double final, const vector<double>& hw);
double grade(const Student_info& s);
double median(vector<double> vec);
istream& read_hw(istream& in, vector<double>& hw);
istream& read(istream& is, Student_info& s);
bool compare(const Student_info& x, const Student_info& y);



int main(int argc, const char * argv[]) {
    
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    
    cout << "Enter all your homework grades, "
    "followed by end-of file: ";
    
    vector<double> homework;
    read_hw(cin, homework);
    
    try {
        double final_grade = grade(midterm, final, homework);
        cout << "Your final grade is " << final_grade << endl;
    } catch (domain_error) {
        cout << endl << "You must enter your grades. "
        << "Please try again." << endl;
        return 1;
    }
    return 0;
}

double grade(double midterm, double final, double homework){
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw){
    if (0 == hw.size()) {
        throw domain_error("student has done no homework");
    }
    return grade(midterm, final, median(hw));
}

double median(vector<double> vec){
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    if (0 == size) {
        throw domain_error("median of an empty vector");
    }
    sort(vec.begin(), vec.end());
    
    vec_sz mid = size/2;
    
    return size % 2 == 0 ? (vec[mid] + vec[mid - 1])/2 : vec[mid];
}

istream& read_hw(istream& in, vector<double>& hw){
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

istream& read(istream& is, Student_info& s){
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);
    return is;
}

double grade(const Student_info& s){
    return grade(s.midterm, s.final, s.homework);
}

bool compare(const Student_info& x, const Student_info& y){
    return x.name < y.name;
}
