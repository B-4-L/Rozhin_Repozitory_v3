#include <iostream>

using namespace std;

int Maxchislo(int nomer) {
    int Max = 0;
    while (nomer > 0) {
        int cifra = nomer % 10;
        if (cifra > Max) {
            Max = cifra;
        }
        nomer = nomer / 10;
    }
    return Max;
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
