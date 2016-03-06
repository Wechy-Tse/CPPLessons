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

class Sales_data{
    friend istream &read(istream &, Sales_data &);
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend ostream &print(ostream&, const Sales_data&);
public:
    Sales_data() = default;
    Sales_data(const string &s):bookNo(s){}
    Sales_data(const string &s, unsigned n, double p):
    bookNo(s), units_sold(n), revenue(p*n){}
    Sales_data(istream &is){read(is, *this);}
    
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);

ostream &print(ostream&, const Sales_data&);

istream &read(istream&, Sales_data&);



#endif /* Sales_data_hpp */
