// C04EX3G.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, c, d, r2, r3;

    cout << "Informe um valor para <A>...: "; cin >> a;
    cin.ignore(80,'\n'); cout << endl;

    cout << "Informe um valor para <B>...: "; cin >> b;
    cin.ignore(80,'\n'); cout << endl;

    cout << "Informe um valor para <C>...: "; cin >> c;
    cin.ignore(80,'\n'); cout << endl;

    cout << "Informe um valor para <D>...: "; cin >> d;
    cin.ignore(80,'\n'); cout << endl;

    r2 = a % 2;
    r3 = a % 3;

    if (r2 == 0 and r3 == 0)
        cout << "Resultado = " << a << endl;
    else
        cout << "Valor nao divisivel por 2 e 3" << endl;

    r2 = b % 2;
    r3 = b % 3;

    if (r2 == 0 and r3 == 0)
        cout << "Resultado = " << b << endl;
    else
        cout << "Valor nao divisivel por 2 e 3" << endl;

    r2 = c % 2;
    r3 = c % 3;

    if (r2 == 0 and r3 == 0)
        cout << "Resultado = " << c << endl;
    else
        cout << "Valor nao divisivel por 2 e 3" << endl;

    r2 = d % 2;
    r3 = d % 3;

    if (r2 == 0 and r3 == 0)
        cout << "Resultado = " << d << endl;
    else
        cout << "Valor nao divisivel por 2 e 3" << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
