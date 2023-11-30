#include <iostream>

using namespace std;

int Vvestichislo() {
    int nomer;
    cout << "Введите натуральное число X: ";
    cin >> nomer;
    return nomer;
}

int main() {
    int chislo;
    int nomer;

    cout << "Меню выбора:" << endl;
    cout << "1. Ввести натуральное число X" << endl;
    cout << "2. Найти наибольшую цифру в записи числа X" << endl;
    cout << "3. Найти наименьшую цифру в записи числа X" << endl;
    cout << "Выберите пункт меню: ";
    cin >> chislo;

    switch (chislo) {
        case 1:
            nomer = Vvestichislo();
            break;
        case 2:
            cout << "Наибольшая цифра в записи числа X: " << Maxchislo(nomer) << std::endl;
            break;
        case 3:
            cout << "Наименьшая цифра в записи числа X: " << Minchislo(nomer) << std::endl;
            break;
        default:
            cout << "Неверный выбор" << endl;
    }

    return 0;
}