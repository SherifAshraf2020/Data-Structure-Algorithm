//
// Created by Sherif Ashraf on 7/5/2026.
// Project: Data_Structure_Algorithm
// All rights reserved.
//

#include <iostream>
#include <string>
#include <cassert>

#include "arrayListType.h"
using namespace std;

int main() {
    arrayListType<int> intList(100);
    arrayListType<string> stringList;
    int number;
    cout << "Line 17: Enter 5 integers: ";
    for (int counter = 0; counter < 5; counter++) {
        cin >> number;
        intList.insertAt(counter, number);
    }
    cout << endl;
    cout << "Line 23: The list you entered is: ";
    intList.print();
    cout << endl;
    cout << "Line 26: Enter the item to be deleted: ";
    cin >> number;
    intList.remove(number);
    cout << "Line 29: After removing " << number
            << ", the list is:" << endl;
    intList.print();
    cout << endl;
    string str;
    cout << "Line 34: Enter 5 strings: ";
    for (int counter = 0; counter < 5; counter++) {
        cin >> str;
        stringList.insertAt(counter, str);
    }
    cout << endl;
    cout << "Line 40: The list you entered is: " << endl;
    stringList.print();
    cout << endl;
    cout << "Line 43: Enter the string to be deleted: ";
    cin >> str;
    stringList.remove(str);
    cout << "Line 46: After removing " << str
            << ", the list is:" << endl;
    stringList.print();
    cout << endl;
    return 0;
}
