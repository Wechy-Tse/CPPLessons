//
//  Screen.hpp
//  L07CLASS2
//
//  Created by 谢伟智 on 16/3/1.
//  Copyright © 2016年 Wechy. All rights reserved.
//

#ifndef Screen_hpp
#define Screen_hpp

#include <stdio.h>
#include <string>

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd),
    contents(ht * wd, c){}
    char get() const
    {
        return contents[cursor];
    }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    std::string contents;
};


#endif /* Screen_hpp */
