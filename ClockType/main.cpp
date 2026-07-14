//
// Created by Sherif Ashraf on 7/14/2026.
// Project: Data_Structure_Algorithm
// All rights reserved.
//

#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
    // 1. Test constructor with default parameters
    clockType clock1;                                           //Default: 00:00:00
    clockType clock2(5);                                  //Hours only: 05:00:00
    clockType clock3(12, 30);                      //Hours and minutes: 12:30:00
    clockType clock4(23, 59, 54);          //Fully specified: 23:59:54

    cout << "Initial Times:\n";
    cout << "Clock 1: "; clock1.printTime(); cout << endl;
    cout << "Clock 2: "; clock2.printTime(); cout << endl;
    cout << "Clock 3: "; clock3.printTime(); cout << endl;
    cout << "Clock 4: "; clock4.printTime(); cout << endl;
    cout << "------------------------------------\n";

    // 2. Test built-in assignment operator (=)
    cout << "Assigning Clock 3 to Clock 1 (clock1 = clock3)...\n";
    clock1 = clock3; // Performs memberwise copy
    cout << "Clock 1 now: "; clock1.printTime(); cout << endl;
    cout << "------------------------------------\n";

    // 3. Test equality comparison
    cout << "Comparing Clock 1 and Clock 3:\n";
    if (clock1.equalTime(clock3)) {
        cout << "Clock 1 is EQUAL to Clock 3.\n";
    } else {
        cout << "Clock 1 is NOT EQUAL to Clock 3.\n";
    }
    cout << "------------------------------------\n";

    // 4. Test cascading time increments
    cout << "Incrementing Clock 4 (23:59:54) by 6 seconds:\n";
    for (int i = 0; i < 6; i++) {
        clock4.incrementSeconds();
        clock4.printTime();
        cout << endl;
    }

    return 0;
}