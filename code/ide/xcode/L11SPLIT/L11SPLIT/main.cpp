//
//  main.cpp
//  L11SPLIT
//
//  Created by 谢伟智 on 16/3/6.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

vector<string> split(const string& s){
    vector<string> ret;
    typedef string::size_type string_sz;
    string_sz i = 0;
    
    while (i != s.size()) {
        while (i != s.size() && isspace(s[i]))
            ++i;
        string_sz j = i;
        while (j != s.size() && !isspace(s[j]))
            ++j;
        
        if(i != j){
            ret.push_back(s.substr(i, j-i));
            i = j;
        }
    }
    return ret;
}

string::size_type width(const vector<string>& v){
    string::size_type maxlen = 0;
    for (vector<string>::size_type i = 0; i != v.size(); ++i) {
        maxlen = max(maxlen, v[i].size());
    }
    return maxlen;
}

vector<string> frame(const vector<string>& v){
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen+4, '*');
    
    ret.push_back(border);
    for (vector<string>::size_type i = 0; i != v.size(); ++i) {
        ret.push_back("* " + v[i] +
                      string(maxlen - v[i].size(), ' ') + " *");
    }
    ret.push_back(border);
    return ret;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Begin" << endl;
    string str = "123 123 32 43 45 ljlkj foiuosd fsuoisdufsd osiduf df";
    //getline(cin, str);
    vector<string> vec = split(str);
    cout << "Hello" << endl;

    for (vector<string>::size_type i = 0; i != vec.size() ; ++i) {
        cout << vec[i] << endl;
    }
    vector<string> v = frame(vec);
    frame(vec);
    for (vector<string>::size_type i = 0; i != v.size() ; ++i) {
        cout << v[i] << endl;
    }
    return 0;
}
