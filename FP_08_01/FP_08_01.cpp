#include <Windows.h>
#include <iostream>
#include "time.h"

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ЗАДАНИЕ 1
    /*
     const size_t size = 10, a = 10, b = 100;
    int min, max;
    int array[size];
    srand(time(NULL));

    cout << endl;
    for (int i = 0; i < size; i++) {
        array[i] = a + rand() % (b - a);
        cout << " ";
        cout << array[i] << " ";
    }
    cout << endl;
    min = array[0];
    max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << endl;
    cout << " Минимальное значение в массиве: " << min << endl;
    cout << " Максимальное значение в массиве: " << max << endl;
    */

    // ЗАДАНИЕ 2
    /*
     const size_t size = 10;
    int a, b, summa, value;
    string numberOne = " Введите первое число: ";
    string numberTwo = " Введите второе число: ";
    string numberValue = " Введите диапазон: ";
    int array[size];
    srand(time(NULL));

    cout << numberOne;
    cin >> a;
    cout << numberTwo;
    cin >> b;
    cout << numberValue;
    cin >> value;

    cout << endl;
    for (int i = 0; i < size; i++) {
        array[i] = a + rand() % (b - a);
        cout << "  ";
        cout << array[i] << " ";
    }
    cout << endl;

    summa = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < value) {
            summa += array[i];
        }
    }
    cout << summa << endl;
    */

    // ЗАДАНИЕ 3
    /*
     const size_t month = 12;
    int array[month];
    int min, max, StartMonth, FinishMonth;

    cout << endl;
    for (int i = 0; i < month; i++) {
        cout << " Введите зарплату за " << i + 1 << " месяц: ";
        cin >> array[i];
    }
    cout << endl;
    cout << " Введите начальный месяц: ";
    cin >> StartMonth;
    cout << " Введите последний месяц: ";
    cin >> FinishMonth;

    min = StartMonth - 1;
    max = StartMonth - 1;

    cout << endl;
    for (int i = StartMonth; i <= FinishMonth - 1; i++) {
        if (array[i] > array[max]) {
            max = i;
        }
        if (array[i] < array[min]) {
            min = i;
        }
    }
    cout << " Минимальная зарплата была в " << min + 1 << " месяце" << endl;
    cout << " Максимальная зарплата была в " << max + 1 << " месяце" << endl;
    */

    // ЗАДАНИЕ 4
    /*
     const size_t N = 10;
    int array[N]{ 1, -2, 4, 6, -3, -8, 5, 7, -9, 10 };
    int min, max, sumMinus = 0, ProizvedeniePlus = 1;

    cout <<" Размер массива: " << endl;
    for (int i = 0; i < N; i++) {
        cout << " ";
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;

    min = array[0];
    max = array[0];

    for (int i = 0; i < N; i++) {

        if (array[i] < 0) {
            sumMinus += array[i];
        }
        if (array[i] > 0) {
            ProizvedeniePlus *= array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << " Сумма отрицательных элементов массива равна: " << sumMinus << endl;
    cout << " Произведение положительных элементов массива равна: " << ProizvedeniePlus << endl;
    cout << " Минимальное значение в массиве: " << min << endl;
    cout << " Максимальное значение в массиве: " << max << endl;
    cout << " Произведение между минимальным и максимальным значением массива равно: " << min * max << endl;

    */





}
