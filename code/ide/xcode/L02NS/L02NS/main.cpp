//
//  main.cpp
//  L02NS
//
//  Created by 谢伟智 on 16/2/21.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int sum = 0, val = 50;
    while (val <= 300) {
        sum += val;
        ++val;
    }
    cout << "Sum of 50 to 300 inclusive is "
    << sum << endl;
    // insert code here...
    cout << "Enter two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
    << " is " << v1 + v2 << endl;
    
    cout << "/*" << endl;
    cout << "*/" << endl;
//  cout << /* "*/" */<< endl;    //违法注释
    cout << /* "*/" /* "/*" */<< endl;  //合法
    
    
    return 0;
}
