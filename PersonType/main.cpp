//
// Created by Sherif Ashraf on 7/14/2026.
// Project: Data_Structure_Algorithm
// All rights reserved.
//

#include <iostream>
#include "personType.h"

using namespace std;

int main()
{
    // 1. Create a person using the default constructor
    personType person1;
    cout << "Person 1 (Default): [";
    person1.print();
    cout << "]\n";

    // 2. Set name for Person 1
    person1.setName("Sherif", "Ashraf");
    cout << "Person 1 (After setName): ";
    person1.print();
    cout << "\n------------------------------------\n";

    // 3. Create a person using the parameterized constructor
    personType person2("Merna", "Kamal");
    cout << "Person 2 (Parameterized): ";
    person2.print();
    cout << "\n------------------------------------\n";

    // 4. Test Getters
    cout << "Testing individual getters on Person 2:\n";
    cout << "First Name: " << person2.getFirstName() << endl;
    cout << "Last Name: " << person2.getLastName() << endl;

    return 0;
}