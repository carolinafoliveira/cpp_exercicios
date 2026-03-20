// C04EX3J.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t n, r;

    cout << "Informe um valor para <N>...: "; cin >> n;
    cin.ignore(80,'\n'); cout << endl;

    r = n % 2;

    if (r == 0)
        cout << "O numero " << n << " e par." << endl;
    else
        cout << "O numero " << n << " e impar." << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
