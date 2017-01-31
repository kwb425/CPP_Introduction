//
//  reference_vs_value.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Reference (Pointer) vs Value //////////////////////



////////////
// Reference
////////////
void pass_by_pointer(int *pointer){
    *pointer = 2; // De-referencing -> Re-allocating
}



////////
// Value
////////
void pass_by_value(int value){
    value = 2; // Chaging the value of copied input
}
