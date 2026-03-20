// C03EX4J.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int32_t a, b, r;

    cout << "Informe um valor para <A>...................: "; cin >> a;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe um valor para <B>...................: "; cin >> b;
    cin.ignore(80, '\n'); cout << endl;

    r = a - b;
    pow(r, 2);

    cout << "O quadrado da diferenca entre <A> e <B> e...: " << pow(r, 2) << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
