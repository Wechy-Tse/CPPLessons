//
//  main.cpp
//  L06CLASS
//
//  Created by 谢伟智 on 16/3/1.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>
#include <string>
#include "Sales_data.hpp"

using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    Sales_data total;
    Sales_data test = Sales_data(cin);
//    cout << test.bookNo << " " << test.units_sold << endl;
    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            }else{
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }else{
        cerr << "No data?!" << endl;
    }
    return 0;
}
