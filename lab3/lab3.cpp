#include <iostream>
using namespace std;
int main()
{
    cout << "Время рисовать ёлку в двумерном массиве!" << endl;
    char ans;
    bool isCorrect = false;
    int n;
    do {
        do {
            cout << "Введите число: ";
            cin >> n;
            if (n >= 5 && n % 2 == 1) {
                isCorrect = false;
                cout << "Число подходит." << endl;
            }
            else {
                isCorrect = true;
                cout << "Число не подходит." << endl;
            }
        } while (isCorrect == true);
        int arr[n][n];
        int ser = n / 2; //середина массива
        int schet = 1; //счетчик длинны текущей ветки ёлки
        for (int i = 0; i < n; i++) { //это строка
            for (int j = 0; j < n; j++) { //это столбец
                if (j == ser) { //заполнение чётной строки
                    arr[i][ser] = 1;
                }
                else if (i % 2 == 1 && j >= ser - schet && j <= ser + schet) { //заполнение нечётной строки, с проверкой на соседние элементы
                    arr[i][j] = 1;
                }
                else
                    arr[i][j] = 0;
            }
            if (i % 2 == 1) {
                schet++;
            } //перепрыгивание на нечётную строку
        }
        for (int i = 0; i < n; i++) { //печать массива
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Нарисовать ещё одну ёлку? [Y/N] " << endl;
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    return 0;
}