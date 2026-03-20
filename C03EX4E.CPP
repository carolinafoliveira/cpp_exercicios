// C03EX4E.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float prestacao, valor, taxa, tempo;

    cout << setprecision(2) << fixed << right;

    cout << "Informe o valor da prestacao original....: "; cin >> valor;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a taxa de juros..................: "; cin >> taxa;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe o tempo de atraso da prestacao...: "; cin >> tempo;
    cin.ignore(80, '\n'); cout << endl;

    prestacao = valor + (valor * (taxa / 100) * tempo);

    cout << "O valor da prestação atualizado e........: " << prestacao << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
