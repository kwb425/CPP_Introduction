//
//  user_interaction.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// User Interaction //////////////////////////////////
void user_interaction(){
    char name[100*sizeof(char)]; // Memory, 100 chars
    char sex[100*sizeof(char)]; // Memory, 100 chars
    int id = 0;
    
    
    
    //////////////////////////////
    // Giving flow to the computer
    //////////////////////////////
    cout << "Type: name sex identification#" << endl;
    
    
    
    ///////////////////////////////
    // Flow coming in from the user
    ///////////////////////////////
    cin >> name >> sex >> id;

    
    
    //////////////////////////////
    // Giving flow to the computer
    //////////////////////////////
    cout << name << " " << sex << " " << id << endl;
}
