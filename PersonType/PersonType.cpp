//
// Created by Sherif Ashraf on 7/14/2026.
// Project: Data_Structure_Algorithm
// All rights reserved.
//

#include <iostream>
#include "personType.h"

using namespace std;

// Print the full name
void personType::print() const
{
    cout << firstName << " " << lastName;
}

// Set the first and last name
void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

// Getter for first name
string personType::getFirstName() const
{
    return firstName;
}

// Getter for last name
string personType::getLastName() const
{
    return lastName;
}

// Default constructor
personType::personType()
{
    firstName = "";
    lastName = "";
}

// Parameterized constructor
personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}