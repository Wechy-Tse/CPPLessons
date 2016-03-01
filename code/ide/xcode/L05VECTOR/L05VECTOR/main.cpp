//
//  main.cpp
//  L05VECTOR
//
//  Created by 谢伟智 on 16/2/24.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "iterator.h"

int main(int argc, const char * argv[]) {
    using namespace std;
    
    string ss("abcd efg hi jkl mn opq");
    testIterator(ss);
    vector<string> sevc(10, "null");
    cout << sevc[1] << endl;
    
    vector<vector<int>> ivec;
    vector<int> v3(10, 42);
    cout << v3.size() << endl;
    vector<int> v4{10, 42};
    cout << v4.size() << endl;
    vector<string> v5{10, "hi"};
    cout << v5.size() << endl;
  /*
    vector<int> ivec1;
    int i;
    while (cin >> i) {
        ivec1.push_back(i);
    }
    for (auto i : ivec1) {
        cout << i << endl;
    }
   */
    
    string str1;
    vector<string> svec1;
    while (cin >> str1) {
        svec1.push_back(str1);
    }
    for (auto s : svec1 ) {
        for (auto &c : s) {
            c = toupper(c);
        }
        cout << s << endl;
    }
//    vector<string> svec1 = ivec;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
