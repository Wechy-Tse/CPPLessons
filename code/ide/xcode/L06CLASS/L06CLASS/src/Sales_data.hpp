//
//  Sales_data.hpp
//  L06CLASS
//
//  Created by 谢伟智 on 16/3/1.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#ifndef Sales_data_hpp
#define Sales_data_hpp

#include <iostream>
#include <string>

using namespace std;

struct Sales_data{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);

ostream &print(ostream&, const Sales_data&);

istream &read(istream&, Sales_data&);



#endif /* Sales_data_hpp */
