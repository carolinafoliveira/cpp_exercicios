// C03EX4B.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float f, c;

    cout << setprecision(2) << fixed << right;
    cout << "Informe a temperatura em graus Fahrenheit: "; cin >> f;
    cin.ignore(80, '\n'); cout << endl;

    c = ((f - 32) * 5) / 9;

    cout << "A temperatura em Celsius e: " << setw(3) << c << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
