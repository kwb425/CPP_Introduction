//
//  cpp_func_overloading.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Function Overloading //////////////////////////////
void different_params(int interger_input){
    cout << "When integer comes in, " \
    << "integer version function runs." << endl;
}
void different_params(string string_input){
    cout << "When string comes in, " \
    << "string version function runs." << endl;
}
