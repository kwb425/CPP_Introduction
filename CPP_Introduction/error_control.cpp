//
//  error_control.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 31/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Error Control /////////////////////////////////////
void error_control(){
    try{
    fstream file_object;
    file_object.open("not_existing.txt", ios::in);
    // Throwing character array
    throw "No such file or directory";
    // Catching the chracter array's name (pointer)
    }catch(const char *err_msg){
        // Displaying the array
        cout << err_msg << endl;
    }
}
