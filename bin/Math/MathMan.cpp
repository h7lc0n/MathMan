/**
 * @file MathMan.cpp
 * @author SaQr AlGhamdi (h7lc0n@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "MathMan.h"


std::tuple<int, int, string> MathMan::CommonLaw(int a, int b, int c) {
    string discStatus;

    int discriminant    = pow(b, 2) - ( 4 * a * c );
    int positiveValue   = ( -b + sqrt(discriminant) ) / ( 2 * a );
    int negativeValue   = ( -b - sqrt(discriminant) ) / ( 2 * a );

    if (discriminant > 0) {
        discStatus = "Two relative real roots";
    } else if (discriminant == 0 ) {
        discStatus = "Real root duplicated twice";
    } else {
        discStatus = "Two conjugated compound roots";
    }

    return std::make_tuple(positiveValue, negativeValue, discStatus);
}


string MathMan::RealNumbers(int number) {
    /*
    std::tuple<char, char, char, char, char> types;

    types = std::make_tuple('N', 'W', 'Z', 'Q', 'I');
    */
    string numberType;

    if (number >= 1) {
        numberType = "Natural Number";
    } else if (number == 0) {
        numberType = "Whole Number";
    } else if (number < 0) {
        numberType = "Integer";
    }

    return numberType;
}