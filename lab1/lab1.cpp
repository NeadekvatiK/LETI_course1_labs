#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int yp = 0, a = 0, y1 = 0, y2 = 0, y3 = 0, y4 = 0, xt = 0, yt = 0;
	char ans;
	bool isCorrect = true;
	cout << "Программа для вычисления принадлежности точки к области состоящей из двух парабол и прямой" << endl;
	do {

		do {
			cout << "Введите A для парабол вида y=x^2-a и y=-(x^2)+a : " << endl;
			cin >> a;
			cout << "Введите Y для прямой : " << endl;
			cin >> yp;
			if (yp < a && yp > a*(-1)) { //проверка принадлежности прямой к параболам
				break;
				
			}
			else {
				isCorrect = false;
				cout << "Прямая лежит выше или ниже парабол, введите другие значения " << endl;
			}
		} while (isCorrect = true);
		do {
			cout << "Введите координаты точки X : " << endl; //проверка принадлежности Х к области определения
			cin >> xt;
			y1 = ((xt*xt - a)*(-1)) - a; //почему тут такая хрень??? пушто выразили y через уравнение y=x^2-a -> x^2=-y-a
			y2 = ((xt*xt)*(-1) + a) + a;         // y=-(x^2)+a -> x^2 = a-y 
			if (xt*xt > y3 && xt*xt < y4) {
				isCorrect = true;
			}
			else {
				isCorrect = false;
			}
			cout << "Введите координаты точки Y : " << endl; //проверка принадлежности Y к области определения
			cin >> yt;
			y1 = (xt*xt) - a;
			y2 = (-1)*(xt*xt) + a;
			if (yt >= y1 && yt <= y2 && yt >= yp) {
				isCorrect = true;
			}
			else {
				isCorrect = false;
			}
			if (isCorrect == true) {
				cout << "Точка принадлежит" << endl;
			}
			else {
				cout << "Точка не принадлежит" << endl;
			}
			cout << "Ввести другую точку? [Y/N] " << endl;
			cin >> ans;
		} while (ans == 'Y' || ans == 'y');
		cout << "Решить ещё одну задачу? [Y/N] " << endl;
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	return 0;
}



