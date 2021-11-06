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
//TODO: CLI version

#include "../bin/Math/MathMan.h"
#include "../libs/argparse/argparse.h"


using namespace argparse;

auto clearBuffer {
    []()
    {
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
};


//TODO: add arguments handler

int main(int argc, const char* argv[]) {
    ArgumentParser parser("MathMan", "Argument parser example");

    parser.add_argument()
      .names({"-c", "--cli"})
      .description("Command Line Interface");

    parser.add_argument()
      .names({"-g", "--gui"})
      .description("Graphical User Interface");

    parser.enable_help();
    auto err = parser.parse(argc, argv);

    if (parser.exists("gui")) {
        cout << parser.get<string>("gui") << endl;
        return 0;
    }

    if (parser.exists("help")) {
        parser.print_help();
        return 0;
    }

    if (err) {
        std::cout << err << std::endl;
        return -1;
    }
}


/**
    string mode;

    ( argc < 2 ) ? mode = "gui" : mode = argv[1];

    if (mode == "--cli") {
        cout << "CLI interface executing ..." << endl;
        //return ;
    } else {
        cout << "GUI interface executing ..." << endl;
        //return ;
    };

    return 0; // Zero errors
    */

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
