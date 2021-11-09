/**
 * @file mainwindow.h
 * @author SaQr AlGhamdi <h7lc0n@gmail.com>
 * @brief 
 * @version 0.1
 * @date 2021-11-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#ifndef __MAINWINDOW_H_
#define __MAINWINDOW_H_

// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#ifndef WX_PRECOMP
    #include <wx/wx.h>

#endif

#include <wx/wxprec.h>


class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

class MyFrame : public wxFrame {
public:
    MyFrame();
private:
    void OnHello(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
};


enum {
    ID_Hello = 1
};

#endif // __MAINWINDOW_H_
