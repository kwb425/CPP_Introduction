//
//  file_control.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// File Control //////////////////////////////////////



//////////
// Writing
//////////
void writing_file(){
    fstream file_object;
    file_object.open("sample.txt", ios::out);
    file_object << "Sample text 1" << endl;
    file_object.close();
}



////////////
// Appending
////////////
void appending_file(){
    fstream file_object;
    file_object.open("sample.txt", ios::app);
    file_object << "Sample text 2" << endl;
    file_object.close();
}



//////////
// Reading
//////////
void reading_file(){
    fstream file_object;
    string line; // Intuitive than char line[] = "";
    file_object.open("sample.txt", ios::in);
    while(file_object){
        getline(file_object, line);
        cout << line << endl;
        }
    file_object.close();
}
