// C04EX3K.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t n;

    cout << "Informe um valor para <N>...: "; cin >> n;
    cin.ignore(80,'\n'); cout << endl;

    if (not (n > 3))
        cout << "O numero e " << n << endl;
    else
        cout << "Numero invalido!";

    cout << endl << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
