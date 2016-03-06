//
//  main.cpp
//  L08LESSON
//
//  Created by 谢伟智 on 16/3/2.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    /********************************************
    string hello = "hello";
    string exclem = "!";
    string message = hello + "World" + "!";
    string message1 = hello + "World" + exclem;
    std::cout << "Hello, World!\n";
    
    {
        string s = "a string";
        cout << s << endl;
    }
    
    {
        string s = "another string";
        cout << s << endl;
    }
     **********************************************/
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    
    const string greeting = "Hello, " + name + "!";
    const int pad = 1;
    const int rows = pad * 2 + 3;
    string::size_type cols = greeting.size() + pad * 2 + 2;
    cout << endl;
    
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            }else{
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                }else{
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }
    
    return 0;
}
