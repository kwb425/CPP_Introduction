//
//  main.h
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Preventing Double Loading /////////////////////////
#ifndef main_h
#define main_h





// Default Headers ///////////////////////////////////
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>





// Default Libraries /////////////////////////////////
using namespace std;





// Prototyping ///////////////////////////////////////
void variables();
void arrays();
void for_loop();
void while_loop();
void if_statement();
void user_interaction();
void writing_file();
void appending_file();
void reading_file();
void heap_control();
void pass_by_pointer(int *pointer);
void pass_by_value(int value);
void error_control();
void different_params(int interger_input);
void different_params(string string_input);
class parent_class{
    public:
        parent_class(int pub, int pro, int pri);
        ~parent_class();
        void parent_func();
        int parent_public_v;
    protected:
        int parent_protected_v;
    private:
        int parent_private_v;
};
class child_class: public parent_class{
    public:
        child_class(int pub, int pro, int pri);
        ~child_class();
        void child_func();
        int child_public_v;
    protected:
        int child_protected_v;
    private:
        int child_private_v;
};





// Declarations //////////////////////////////////////
struct all_types {
    int member_int;
    char member_char[2];
    float member_float;
    double member_double;
};
typedef struct all_types everything;





// Preventing Double Loading /////////////////////////
#endif /* main_h */
