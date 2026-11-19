/*
Вариант 7. Мобильная связь
Задание 1. Ввести n (1..12) — число месяцев. С помощью for вывести
абонентскую плату каждого месяца: 15, а каждый третий месяц — 12.
Найти общую сумму за n месяцев.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Введите число месяцев (1..12): ";
        if (!(cin >> n)) return 0;
    } while (n < 1 || n > 12);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int price = 15;
        if (i % 3 == 0) price = 12;
        cout << "Месяц " << i << ": " << price << endl;
        sum += price;
    }
    cout << "Общая сумма: " << sum << endl;
    return 0;
}
