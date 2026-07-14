//
// Created by Sherif Ashraf on 7/14/2026.
// Project: Data_Structure_Algorithm
// All rights reserved.
//

#ifndef H_personType
#define H_personType

#include <string>

using namespace std;

class personType
{
public:
    // Function to output the first name and last name in the form: firstName lastName
    void print() const;

    // Function to set firstName and lastName according to the parameters
    void setName(string first, string last);

    // Function to return the first name
    string getFirstName() const;

    // Function to return the last name
    string getLastName() const;

    // Default constructor (sets firstName and lastName to empty strings)
    personType();

    // Constructor with parameters
    personType(string first, string last);

private:
    string firstName; // Variable to store the first name
    string lastName;  // Variable to store the last name
};

#endif // H_personType