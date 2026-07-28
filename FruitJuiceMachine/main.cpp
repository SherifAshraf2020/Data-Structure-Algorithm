//
// Created by Sherif Ashraf on 7/28/2026.
// Project: ${DIR_NAME}
// All rights reserved.
//

#include <iostream>
#include "cashRegister/cashRegister.h"
#include "dispenserType/dispenserType.h"

using namespace std;

void showSelection(const dispenserType &apple, const dispenserType &orange,
                   const dispenserType &mango, const dispenserType &punch) {
    cout << "===========================================" << endl;
    cout << "*** Welcome to Shelly's Fruit Juice Shop ***" << endl;
    cout << "===========================================" << endl;
    cout << "To select an item, enter:" << endl;

    cout << "1 for Apple Juice  [" << apple.getCost() << " cents] -> ("
            << apple.getNoOfItems() << " left)" << endl;

    cout << "2 for Orange Juice [" << orange.getCost() << " cents] -> ("
            << orange.getNoOfItems() << " left)" << endl;

    cout << "3 for Mango Lassi  [" << mango.getCost() << " cents] -> ("
            << mango.getNoOfItems() << " left)" << endl;

    cout << "4 for Fruit Punch  [" << punch.getCost() << " cents] -> ("
            << punch.getNoOfItems() << " left)" << endl;

    cout << "9 to Exit" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Selection: ";
}

void sellProduct(dispenserType &product, cashRegister &pCounter) {
    int amount;
    int amount2;

    if (product.getNoOfItems() > 0) {
        cout << "Please deposit " << product.getCost() << " cents" << endl;
        cin >> amount;

        if (amount < product.getCost()) {
            cout << "Please deposit another " << product.getCost() - amount << " cents" << endl;
            cin >> amount2;
            amount = amount + amount2;
        }

        if (amount >= product.getCost()) {
            pCounter.acceptAmount(amount);
            product.makeSale();
            cout << "Collect your item at the bottom and enjoy." << endl;
        } else {
            cout << "The amount is not enough. Collect what you deposited." << endl;
        }
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl << endl;
    } else {
        cout << "Sorry, this item is sold out." << endl;
    }
}

int main() {
    cashRegister counter;

    dispenserType appleJuice(100, 50);
    dispenserType orangeJuice(100, 65);
    dispenserType mangoLassi(75, 45);
    dispenserType fruitPunch(100, 85);

    int choice;

    showSelection(appleJuice, orangeJuice, mangoLassi, fruitPunch);
    cin >> choice;

    while (choice != 9) {
        switch (choice) {
            case 1:
                sellProduct(appleJuice, counter);
                break;
            case 2:
                sellProduct(orangeJuice, counter);
                break;
            case 3:
                sellProduct(mangoLassi, counter);
                break;
            case 4:
                sellProduct(fruitPunch, counter);
                break;
            default:
                cout << "Invalid selection." << endl;
        }

        showSelection(appleJuice, orangeJuice, mangoLassi, fruitPunch);
        cin >> choice;
    }

    return 0;
}
