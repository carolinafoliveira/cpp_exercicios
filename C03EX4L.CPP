// C03EX4L.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float reais, dolar, cotacao;

    cout << setprecision(2) << fixed << right;

    cout << "Informe o valor da cotacao do dolar de hoje...: ";
    cin >> cotacao;
    cin.ignore(80, '\n');

    cout << "Informe a quantidade de reais que possui....: ";
    cin >> reais;
    cin.ignore(80, '\n');

    dolar = reais / cotacao;

    cout << "O valor em dolares e: " << setw(8) << dolar << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
