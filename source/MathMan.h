/**
 * @file header.h
 * @author SaQr AlGhamdi (h7lc0n@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include <iostream>
#include <limits>
#include <math.h>
#include <tuple>
#include <ios>

using std::cout;
using std::cin;
using std::endl;
using std::string;


auto clearBuffer {
    []()
    {
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
};


class MathMan {
    private:
        /* data */
    public:
        MathMan();
        ~MathMan();

        std::tuple<int, int, int> CommonLaw(int a, int b, int c, bool = false);


};


/*
MathMan::MathMan() {
}

MathMan::~MathMan() {
}
*/