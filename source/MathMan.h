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

#ifndef MATHMAN_H_
#define MATHMAN_H_

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


class MathMan {
    private:
        /* data */
    public:
        // MathMan();
        // ~MathMan();

        std::tuple<int, int, string> CommonLaw(int a, int b, int c, bool = false);


};
#endif // MATHMAN_H_

/*
MathMan::MathMan() {
}

MathMan::~MathMan() {
}
*/