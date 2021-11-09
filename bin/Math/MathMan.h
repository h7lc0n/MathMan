/**
 * @file MathMan.h
 * @author SaQr AlGhamdi (h7lc0n@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#pragma once

#ifndef __MATHMAN_H_
#define __MATHMAN_H_

#include <iostream>
#include <typeinfo>
#include <limits>
#include <math.h>
#include <vector>
#include <tuple>
#include <ios>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class MathMan {
    private:
        /* data */
    public:
        // MathMan();
        // ~MathMan();

        std::tuple<int, int, string> QuadraticEqu(int a, int b, int c);
        string RealNumbers(double number);


};

#endif // __MATHMAN_H_

/*
MathMan::MathMan() {
}

MathMan::~MathMan() {
}
*/