//
//  heap_control.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Heap Control //////////////////////////////////////
void heap_control(){
    int *pointer;
    pointer = (int *) malloc(sizeof(int)); // Type-
                                           // casting
                                           // to
                                           // integer
                                           // pointer
    // De-referencing the pointer
    *pointer = 12;
    printf("Int (memory heap-ed): %d\n", *pointer);
    // Freeing the memory
    free(pointer);
}
