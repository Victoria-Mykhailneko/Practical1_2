// Practical1_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

void changePrice(double* price) {
    if (price != nullptr) {
        *price = *price + 250.0;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "=== Система обліку замовлень ===" << endl << endl;

    int orderNumber = 914; 
    int* ptrOrderNumber = &orderNumber;

    cout << "1. Номер замовлення:" << endl;
    cout << "   Значення orderNumber: " << orderNumber << endl;
    cout << "   Адреса &orderNumber:  " << &orderNumber << endl;
    cout << "   Адреса через ptr:     " << ptrOrderNumber << endl;
    cout << "   Значення через *ptr:  " << *ptrOrderNumber << endl;

    *ptrOrderNumber = 915;
    cout << "   Нове значення (після зміни через *ptr): " << orderNumber << endl << endl;

    double weight = 12.5;
    double* weightPtr = &weight;

    cout << "2. Вага замовлення:" << endl;
    cout << "   Значення weight: " << weight << " кг" << endl;
    cout << "   Адреса &weight:  " << &weight << endl;
    cout << "   Адреса через weightPtr:    " << weightPtr << endl;
    cout << "   Значення через *weightPtr: " << *weightPtr << " кг" << endl;

    *weightPtr = 15.0;
    cout << "   Нова вага (після зміни через *weightPtr): " << weight << " кг" << endl << endl;

    double price = 500.0; 

    cout << "3. Вартість замовлення:" << endl;
    cout << "   Початкова вартість: " << price << " грн" << endl;

    changePrice(&price);

    cout << "   Нова вартість (після changePrice): " << price << " грн" << endl;

    cout << endl << "=================================" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
