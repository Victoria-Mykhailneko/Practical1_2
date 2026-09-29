#Практична робота №1_2: Вказівники (Частина 1)
**Виконала:** студентка групи 4СОМ Михайленко Вікторія (Варіант № 9)

##  Завдання.
**Завдання:** <img width="489" height="22" alt="image" src="https://github.com/user-attachments/assets/4c3ca76f-1e9f-420d-b45b-7b6aa21e9308" />

### 💻 Код програми:
```cpp
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
```
### 👁️ Візуалізація пам'яті:
<img width="718" height="506" alt="image" src="https://github.com/user-attachments/assets/aab0a1a1-38bb-4d34-8bba-ae67dc39af9b" />
<img width="673" height="513" alt="image" src="https://github.com/user-attachments/assets/2f6a732b-06af-4f84-bbfd-7243a0c04302" />
<img width="701" height="517" alt="image" src="https://github.com/user-attachments/assets/7e6c3482-9dfb-4db2-bd64-fe0fc5bb2835" />
<img width="713" height="518" alt="image" src="https://github.com/user-attachments/assets/bcdbecff-968d-4c8b-a1f5-a63a3bc7e859" />
<img width="692" height="509" alt="image" src="https://github.com/user-attachments/assets/69794df5-34c5-467e-af8d-30db12056226" />
<img width="681" height="502" alt="image" src="https://github.com/user-attachments/assets/360ea624-b571-4c75-aec6-54eb170d4bf9" />
<img width="699" height="512" alt="image" src="https://github.com/user-attachments/assets/634f0674-2678-4fe0-9a7f-53c8a06be1e4" />
<img width="695" height="506" alt="image" src="https://github.com/user-attachments/assets/0957cebf-6741-445f-82ea-91124c6cbe02" />
<img width="680" height="512" alt="image" src="https://github.com/user-attachments/assets/59b7c506-51f1-4564-8d70-227ffcb22455" />
<img width="674" height="504" alt="image" src="https://github.com/user-attachments/assets/5db5c626-c361-43d3-a7d4-04f122324636" />
<img width="694" height="509" alt="image" src="https://github.com/user-attachments/assets/01cef893-55de-497a-854c-5fec68a92524" />

Висновок: використовували базові операції з вказівниками, навчились керувати динамічною пам'яттю з використанням вказівників.
