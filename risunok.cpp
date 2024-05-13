// risunok.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Составьте программу, которая напечатает рисунок, используя символы из таблицы ASCII

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int r;
    char c;

    cout << "Введите код: ";
    cin >> r;

    c = r;
    cout << c << endl;

    return 0;
}

