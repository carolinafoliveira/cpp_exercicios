// C04EX3D.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float n1, n2, n3, n4, md1, md2, ne;

    cout << setprecision(2) << fixed << right;

    cout << "Informe a nota 1...: "; cin >> n1;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a nota 2...: "; cin >> n2;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a nota 3...: "; cin >> n3;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a nota 4...: "; cin >> n4;
    cin.ignore(80, '\n'); cout << endl;

    md1 = (n1 + n2 + n3 + n4) / 4;

    if (md1 >= 7)
        {
        cout << "O aluno foi aprovado com media...: " << setw(5) << md1 << endl;
    }
    else
        {
        cout << "A nota do aluno ficou abaixo do esperado! Sua media foi de" << setw(5) << md1;
        cout << " e deve ser informado a nota do exame!";
        cout << endl;
        cout << "Qual a nota de exame? "; cin >> ne; cin.ignore(80, '\n'); cout << endl;
        md2 = (md1 + ne) / 2;
            if (md2 >= 5)
            {
                cout << "O aluno foi aprovado em exame com media...: " << setw(5) << md2 << endl;
            }
            else
                {
                cout << "O aluno foi reprovado com media...: " << setw(5) << md2 << endl;
            }
    }


    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
