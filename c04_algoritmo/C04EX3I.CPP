// C04EX3I.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, c, d, e, x, maior, menor;

    cout << "Informe um valor para <A>...: "; cin >> a;
    cin.ignore(80,'\n'); cout << endl;

    cout << "Informe um valor para <B>...: "; cin >> b;
    cin.ignore(80,'\n'); cout << endl;

    cout << "Informe um valor para <C>...: "; cin >> c;
    cin.ignore(80,'\n'); cout << endl;

    cout << "Informe um valor para <D>...: "; cin >> d;
    cin.ignore(80,'\n'); cout << endl;

    cout << "Informe um valor para <E>...: "; cin >> e;
    cin.ignore(80,'\n'); cout << endl;

    maior = a;
    menor = a;

    if (b > maior)
        maior = b;
    if (b < menor)
        menor = b;

    if (c > maior)
        maior = c;
    if (c < menor)
        menor = c;

    if (d > maior)
        maior = d;
    if (d < menor)
        menor = d;

    if (e > maior)
        maior = e;
    if (e < menor)
        menor = e;

    cout << "Maior valor informado: " << maior << endl;
    cout << "Menor valor informado: " << menor << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
