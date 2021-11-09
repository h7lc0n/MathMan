/**
 * @file main.cpp
 * @author SaQr AlGhamdi <h7lc0n@gmail.com>
 * @brief 
 * @version 0.1
 * @date 2021-11-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "mainwindow.h"


// main function
wxIMPLEMENT_APP(MyApp);

// startup function
bool MyApp::OnInit() {
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}
