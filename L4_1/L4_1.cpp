/*
    Дано целое число N и набор из N вещественных чисел. Вывести в
    том же порядке округленные значения всех чисел из данного набора (как
    целые числа), а также сумму всех округленных значений.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    // Объявление переменных
    int n, result;
    int sum = 0;
    double element;

    // Ввод значения переменной n
    cout << "Введите целое значение N (N > 0): ";
    cin >> n;

    //Цикл выполняется n раз
    for (int i = 0; i < n; i++) {
        cout << "Введите вещественное число: ";
        cin >> element;
        //Округление element до целого значения
        result = round(element);
        cout << "Округленное значение = " << result << endl;
        sum += result; //Аналогичная  запись sum = sum + result
    }

    //Вывод суммы округленных значений
    cout << "Сумма округленных значений = " << sum << endl;

}
