// C03EX4A.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float f, c;

    cout << setprecision(2) << fixed << right;
    cout << "Informe a temperatura em graus Celsius: "; cin >> c;
    cin.ignore(80, '\n'); cout << endl;

    f = c * 9/5 + 32;

    cout << "A temperatura em Fahrenheit e: " << setw(3) << f << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
