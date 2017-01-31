//
//  if_statement.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Defining If Statement /////////////////////////////
void if_statement(){
    int index = 5;
    if (index < 5){
        cout << "If condition is met." << endl;
    }else if(index > 7){
        cout << "Else if condition is met." << endl;
    }else{
        cout << "Else condition is met." << endl;
    }
}
