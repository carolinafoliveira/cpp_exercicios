// C03EX4K.CPP

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

    cout << "Informe a quantidade de dolares que possui....: ";
    cin >> dolar;
    cin.ignore(80, '\n');

    reais = dolar * cotacao;

    cout << "O valor em reais e: " << setw(8) << reais << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
