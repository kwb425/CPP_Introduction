//
//  arrays.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Defining Arrays ///////////////////////////////////
int arr_num[] = {1, 2, 3}; // []: auto memory alloc
char arr_str[] = "Hello"; // []: auto memory alloc



///////////
// Printing
///////////
void arrays(){
    cout << "Numeric array: " << \
    arr_num[0] << arr_num[1] << arr_num[2] << endl;
    cout << "String array: " << \
    arr_str << endl;
}
