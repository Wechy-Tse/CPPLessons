//
//  main.cpp
//  L03IF
//
//  Created by 谢伟智 on 16/2/22.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;
    
    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u  << endl;
    cout << u - i << endl;
    
//    int i3 = {1.11};
    
    int ival = 1.01;
    int &ival2 = ival;
    
    const int v2 = 0;
    int v1 = v2;
    constexpr int v3 = v2;
    
    cout << ival2 << endl;
    
//    int *p1 = nullptr;
    
    // insert code here...
    int currVal = 0, val = 0;
    if (cin >> currVal) {
        int cnt = 1;
        while (cin >> val) {
            if (val == currVal) {
                ++cnt;
            }else {
                cout << currVal << " occurs "
                     << cnt << " times" << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs "
             << cnt << " times" << endl;
    }
    return 0;
}
