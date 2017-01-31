//
//  while_loop.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Defining While-loop ///////////////////////////////
void while_loop(){
    int index = 1;
    while(index <= 10){
        cout << index << "'th while loop iteration" \
        << endl;
        index++;
    }
}
