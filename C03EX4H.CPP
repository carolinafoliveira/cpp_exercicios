// C03EX4H.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float volume, comprimento, largura, altura;

    cout << setprecision(2) << fixed << right;

    cout << "Informe o comprimento da caixa.....: "; cin >> comprimento;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a largura da caixa.........: "; cin >> largura;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a altura da caixa..........: "; cin >> altura;
    cin.ignore(80, '\n'); cout << endl;

    volume = comprimento * largura * altura;

    cout << "O volume da caixa e................: " << setw(8) << volume << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
