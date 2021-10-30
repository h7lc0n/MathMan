/**
 * @file main.cpp
 * @author SaQr AlGhamdi <h7lc0n@gmail.com>
 * @brief This is a simple program to solve Math3 book problems.
 * @version 0.1
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

//TODO: GUI version
//TOOD: CLI version

#include "MathMan.h"


auto clearBuffer {
    []()
    {
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
};


//TODO: add arguments handler - DONE
int main(int argc, char *argv[]) {
    string mode;

    ( argc < 2 ) ? mode = "gui" : mode = argv[1];

    if (mode == "cli") {
        return ;
    } else {
        return ;
    };

    return 0; // Zero errors
}


/**
 * 
 * 
 * char choice;

    system("clear");
    printf("\n=====================================\n\n");
    printf("\tWelcome To Math3 Book\n");
    printf("\tChoose Your Problem");
    printf("\n\n=====================================\n");
    
    printf("1. Common law & Dicsriminant\n");
    printf("2. Real Numbers\n");

    printf("i. About the program\n");
    printf("E. Exit program\n\n");

    cout << "Choose Your Problem: ";
    cin >> choice;
    clearBuffer;

    switch (choice) {
    case '1':
        MathMan MathMan;
        MathMan.CommonLaw(NULL, NULL, NULL); // CHANGE: arguments
        break;
    
    case '2':
        MathMan.RealNumbers(NULL); // CHANGE: arguments
        break;

    case 'i':
        cout << endl << endl;
        cout << "Author: SaQr AlGhamdi - @h7lc0n" << endl;
        cout << "Program brief: This is a simple program to solve Math3 book problems." << endl;
        cout << "Version: 0.1" << endl;
        break;
    
    case 'E':
        cout << "See you budd" << endl;
        exit(0);
        break;
    
    default:
        break;
    }
 * 
 */
