// C04EX3K.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t n;

    cout << "Informe um valor para <N>...: "; cin >> n;
    cin.ignore(80,'\n'); cout << endl;

    if (n >= 1 and n <= 9)
        cout << "O numero " << n << " esta na faixa permita" << endl;
    else
        cout << "O numero " << n << " nao esta na faixa permita" << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
