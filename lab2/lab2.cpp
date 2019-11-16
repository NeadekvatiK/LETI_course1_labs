#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    double x;
    double tochka;
    long max = 10000000;
    double eps = 1;
    
    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите искомую точку" << endl;
    cin >> tochka;
    
    long nomer = 0;
    for (long n = 1; n < max; n++) {
        double value = ((x + n) / pow(x, n)) * pow(-1, n + 1);
        if (value >= tochka - eps && value <= tochka + eps) {
            nomer = n;
            break;
        }
    }
    if(nomer > 0)
        cout << "Мы попали, номер элемента = " << nomer << endl;
    else
        cout << "В последовательности нет значения близкого к " << x << endl;
    
    return 0;
}