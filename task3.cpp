/*
Вариант 7. Мобильная связь
Задание 3. Через do-while запрашивать процент использованного пакета
от 0 до 100. После корректного ввода вывести остаток пакета.
*/

#include <iostream>
using namespace std;

int main() {
    double percent;
    do {
        cout << "Введите процент использованного пакета (0..100): ";
        if (!(cin >> percent)) return 0;
    } while (percent < 0 || percent > 100);
    cout << "Остаток пакета: " << 100 - percent << "%" << endl;
    return 0;
}
