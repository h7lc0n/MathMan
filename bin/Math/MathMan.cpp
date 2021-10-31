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


/**
 * @brief Quadratic Equation Solve Function - Quadratic Equation x = [ -b ± √( b2 - 4ac ) ] / 2
 * 
 * @param a (a)x² + bx + c = 0
 * @param b ax² + (b)x + c = 0
 * @param c ax² + bx + (c) = 0
 * 
 * @return std::tuple<int, int, string>
 * @retval positiveValue :: The Positive Rule Value
 * @retval negativeValue :: The Negative Rule Value
 * @retval dicsStatus :: The Discriminant Root Status
 */
std::tuple<int, int, string> MathMan::QuadraticEqu(int a, int b, int c) {

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


/**
 * @brief Real Numbers & Thier Types Function - ('N', 'W', 'Z')
 * 
 * @param number Write Any Number
 * 
 * @return std::string
 * @retval type :: The Number Type
 */
string MathMan::RealNumbers(double number) {
    /*
    std::tuple<char, char, char, char, char> types;

    types = std::make_tuple('N', 'W', 'Z', 'Q', 'I');
    */
    string type;

    if (number >= 1) {
        type = "[N] Natural Number";
    } else if (number >= 0) {
        type = "[W] Whole Number";
    } else if (number < 0) {
        type = "[Z] Integer";
    }

    return type;
}