//
//  main.cpp
//  L04String
//
//  Created by 谢伟智 on 16/2/24.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    using namespace std;
    string word;
    string s = "Hello world";
    for(char &c : s){
        c = 'X';
    }
    cout << s << endl;
    
    const string s1 = "Keep out!";
    for (auto &c : s1) {
        cout << c << endl;
    }
 //   cin >> s;
 //  cout << s << endl;
    
    while (getline(cin, word)) {
        if (!word.empty()) {
            cout << word << endl;
        }
    }
    
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
