// C04EX3B.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t n, r;

    cout << "Informe um valor para <N>...: "; cin >> n;
    cin.ignore(80, '\n'); cout << endl;

    if (n < 0)
        n = n * -1;

    cout << "O valor de <N> positivo e...: " << n << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
