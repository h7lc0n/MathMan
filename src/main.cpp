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
#include "../libs/argparse.hpp"


using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

auto clearBuffer {
    []()
    {
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
};


//TODO: add arguments handler

int main(int argc, char* argv[]) {
    ap::parser program(argc, argv);

    program.add("-m", "--mode", "Interface Mode ( GUI, CLI )", ap::mode::OPTIONAL);

    auto args = program.parse();

    if (!args.parsed_successfully()) {
	    cerr << "You must choose between GUI or CLI." << endl;
        return -1;
    }

    auto mode = (args["-m"].empty() ? "gui" : args["-m"]);

    cout << mode << endl;
    return 0;
}
