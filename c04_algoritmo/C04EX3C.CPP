// C04EX3C.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float n1, n2, n3, n4, md;

    cout << setprecision(2) << fixed << right;

    cout << "Informe a nota 1...: "; cin >> n1;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a nota 2...: "; cin >> n2;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a nota 3...: "; cin >> n3;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe a nota 4...: "; cin >> n4;
    cin.ignore(80, '\n'); cout << endl;

    md = (n1 + n2 + n3 + n4) / 4;

    if (md >= 5){
        cout << "O aluno foi aprovado com media...: " << setw(5) << md << endl;
    } else {
        cout << "O aluno foi reprovado com media..: " << setw(5) << md << endl;
    }

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
