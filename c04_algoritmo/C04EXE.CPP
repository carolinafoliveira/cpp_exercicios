// C04EXE.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float a, b, c, delta, x1, x2;

    cout << "Informe o valor para <A>...: "; cin >> a;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe o valor para <B>...: "; cin >> b;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe o valor para <C>...: "; cin >> c;
    cin.ignore(80, '\n'); cout << endl;

    if (a != 0 and b != 0 and c != 0)
        {
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
            {
                cout << "Nao ha solucao real" << endl << endl;
            }
        else if (delta > 0)
            {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                cout << "Existem duas solucoes reais diferentes: " << endl << endl;
                cout << "x1 = " << x1 << "\n";
                cout << "x2 = " << x2 << "\n";
                cout << endl;
            }
            else
            {
                x1 = -b / (2 * a);
                cout << "Existe apenas uma solucao real: x = " << x1 << endl << endl;
            }
        }
    else
    {
        cout << "Nao e uma equacao completa do segundo grau." << endl << endl;
    }

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
