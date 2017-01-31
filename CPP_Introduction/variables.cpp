//
//  variables.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Defining Variables ////////////////////////////////



//////////////////////
// Global (in this .c)
//////////////////////

//// Variable can be changed.
int global_var = 1;

//// Constant can not be altered.
const int global_const = 1;



/////////////////////
// Local (in this .c)
/////////////////////
void variables(){
    
    //// Variable can be changed.
    int local_var = 2;
    
    //// Constant can not be altered.
    const int local_const = 2;
    
    
    
    ///////////
    // Printing
    ///////////
    cout << "Global variable: " \
    << global_var << endl;
    cout << "Global constant: " \
    << global_const << endl;
    cout << "Local variable: " \
    << local_var << endl;
    cout << "Local constant: " \
    << local_const << endl;
}
