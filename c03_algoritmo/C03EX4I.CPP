// C03EX4I.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int32_t a;

    cout << "Informe um numero inteiro.........: "; cin >> a;
    cin.ignore(80, '\n'); cout << endl;

    cout << "O quadrado do valor informado e...: " << pow(a, 2) << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
