// C03EX4D.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float distancia, tempo, velocidade, litros_usados;

    cout << setprecision(2) << fixed << right;

    cout << "Informe o tempo gasto na viagem...: ";
    cin >> tempo; cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a velocidade media........: ";
    cin >> velocidade; cin.ignore(80, '\n'); cout << endl;

    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    cout << "A distancia percorrida na viagem foi de..............: ";
    cout << setw(8) << distancia << endl;

    cout << "O tempo gasto na viagem foi de.......................: ";
    cout << setw(8) << tempo << endl;

    cout << "A velocidade media usada na viagem foi de............: ";
    cout << setw(8) << velocidade << endl;

    cout << "A quantidade de litros utilizados na viagem foi de...: ";
    cout << setw(8) << litros_usados << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
