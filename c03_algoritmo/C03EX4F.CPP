// C03EX4F.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, x;

    cout << "Infore um valor para <A>...: "; cin >> a;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Infore um valor para <B>...: "; cin >> b;
    cin.ignore(80, '\n'); cout << endl;

    x = a;
    a = b;
    b = x;

    cout << "Valores apos a troca: " << " A = " << a << " B = " << b <<endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
