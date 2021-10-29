/**
 * @file func.cpp
 * @author SaQr AlGhamdi (h7lc0n@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "MathMan.h"


std::tuple<int, int, int> MathMan::CommonLaw(int a, int b, int c, bool printSolution) {
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

    // Return the common law values (Positive, Negative) & the discriminant status
    if (printSolution) {
        cout << "Positive Value = " << positiveValue << endl;
        cout << "Negative Value = " << negativeValue << endl;
        cout << "Dicsriminant Status = " << discStatus << endl;
    } else {
        return std::make_tuple(positiveValue, negativeValue, discStatus);
    }
}
