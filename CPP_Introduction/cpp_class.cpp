//
//  cpp_class.cpp
//  CPP_Introduction
//
//  Created by KimWiback on 30/01/2017.
//  Copyright © 2017 Kim, Wiback. All rights reserved.
//





// Attaching .h Above .cpp ///////////////////////////
# include "main.h" // Use "" for current dir.





// Class /////////////////////////////////////////////



////////////////
// Terminologies
////////////////

//// Scope resolution operator (::)
// is used to denote relation of inclusion.

//// Member initializer (:)
// is used for initialization.



///////////////
// Parent class
///////////////

//// Constructor (runs when objectized.)
parent_class::parent_class(int pub, int pro, int pri){
    // Initilizations without :
    parent_public_v = pub;
    parent_protected_v = pro;
    parent_private_v = pri;
    cout << "Parent's constructor" << endl;
}

//// Other methods
void parent_class::parent_func(){
    cout << "Parent class can access " \
    << "public, protected, and private variables " \
    << "of it's own." << endl;
    cout << "Public: " << parent_public_v \
    << "\nProtected: " << parent_protected_v \
    << "\nPrivate: " << parent_private_v << endl;
}

//// De-constructor (runs when main() ends.)
parent_class::~parent_class(){
    cout << "Parent's de-constructor" << endl;
}



//////////////
// Child class
//////////////

//// Constructor (runs when objectized.)
child_class::child_class(int pub, int pro, int pri) \
// Initilizations with :
:parent_class(pub, pro, pri), \
child_public_v(pub), \
child_protected_v(pro), \
child_private_v(pri)
{
    cout << "Child's constructor" << endl;
}

//// Other methods
void child_class::child_func(){
    cout << "Child class can access " \
    << "public, protected, and private variables " \
    << "of it's own." << endl;
    cout << "Public: " << child_public_v \
    << "\nProtected: " << child_protected_v \
    << "\nPrivate: " << child_private_v << endl;
    cout << "Child class can inherit " \
    << "the public, protected, " \
    << "but not private variables " \
    << "of the parent class." << endl;
    cout << "Public: " << parent_public_v \
    << "\nProtected: " << parent_protected_v << endl;
}

//// De-constructor (runs when main() ends.)
child_class::~child_class(){
     cout << "Child's de-constructor" << endl;
}
