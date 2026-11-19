/*
Вариант 7. Мобильная связь
Задание 2. С помощью while вводить длительности звонков до ввода 0.
Отрицательные значения пропускать. Найти общую длительность
и число звонков дольше 5 минут.
*/

#include <iostream>
using namespace std;

int main() {
    double minutes, sum = 0;
    int count = 0;
    cout << "Введите длительности звонков в минутах (0 — конец): ";
    while (cin >> minutes && minutes != 0) {
        if (minutes < 0) continue;
        sum += minutes;
        if (minutes > 5) count++;
    }
    cout << "Общая длительность: " << sum << endl;
    cout << "Звонков дольше 5 минут: " << count << endl;
    return 0;
}
