// C03EX4N.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int32_t a, b, c, soma, quadrado;

    cout << "Informe um valor para <A>...: "; cin >> a;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe um valor para <B>...: "; cin >> b;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe um valor para <C>...: "; cin >> c;
    cin.ignore(80, '\n'); cout << endl;

    quadrado = pow((a + b + c), 2);


    cout << "O valor do quadrado da soma dos tres valores lidos e...: " << quadrado << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
