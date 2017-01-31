//
//  main.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 29/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .c /////////////////////////////
# include "main.h" // Use "" for current dir.





// Main //////////////////////////////////////////////
int main() {
    
    
    
    ////////////
    // Variables
    ////////////
    variables();
    
    
    
    /////////
    // Arrays
    /////////
    arrays();
    
    
    
    /////////////
    // Structures
    /////////////
    everything all_types_struct = \
    {1, "a", 3.14, 2.71}; // Repective allocation
    cout << "Struct's float: " \
    << all_types_struct.member_float << endl;
    cout << "Struct's char: " \
    << all_types_struct.member_char << endl;

    
    
    ///////////
    // For loop
    ///////////
    for_loop();
    
    
    
    /////////////
    // While loop
    /////////////
    while_loop();

    
    
    ///////////////
    // If statement
    ///////////////
    if_statement();
    
    
    
    ///////////////////
    // User interaction
    ///////////////////
    user_interaction();

    
    
    //////////////////
    // File controling
    //////////////////
    writing_file();
    appending_file();
    reading_file();

    
    
    ///////
    // Heap
    ///////
    heap_control();

    
    
    ///////////////////////////////////////
    // Refer by reference vs Refer by value
    ///////////////////////////////////////
    int value = 1;
    int *pointer = &value;
    pass_by_value(value);
    cout << "Not changed: " << value << endl;
    pass_by_pointer(pointer);
    cout << "Changed: " << value << endl;

    
    
    ////////////////
    // Error control
    ////////////////
    error_control();

    
    
    ///////////////////////
    // Function overloading
    ///////////////////////
    different_params(1);
    different_params("a");

    
    
    ////////////////////
    // Class (objective)
    ////////////////////
    parent_class parent_object(1, 2, 3);
    child_class child_object(4, 5, 6);
    parent_object.parent_func();
    child_object.child_func();

    
    
    /////////////////////////////
    // Build success indicator, 0
    /////////////////////////////
    return 0;
}
