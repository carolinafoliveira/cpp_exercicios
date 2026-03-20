// C03EX4M.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int32_t a, b, c, soma;

    cout << "Informe um valor para <A>...: "; cin >> a;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe um valor para <B>...: "; cin >> b;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe um valor para <C>...: "; cin >> c;
    cin.ignore(80, '\n'); cout << endl;

    soma = pow(a, 2) + pow(b, 2) + pow(c, 2);

    cout << "O valor da soma dos quadrados dos tres valores lidos e...: " << soma << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
