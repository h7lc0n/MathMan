/**
 * @file main.cpp
 * @author SaQr AlGhamdi (h7lc0n@gmail.com)
 * @brief This is a simple program to solve Math3 book problems.
 * @version 0.1
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "MathMan.h"


auto clearBuffer {
    []()
    {
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
};

int main() {

    int a = 2, b = -8, c = 5;
    
    MathMan MathMan;
    MathMan.CommonLaw(a, b, c, true);

    return 0;
}
