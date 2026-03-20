// C03EX4G.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, c, d, ra1, ra2, ra3, ra4, ra5, ra6, rm1, rm2, rm3, rm4, rm5, rm6;

    cout << "Infore um valor para <A>...: "; cin >> a;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Infore um valor para <B>...: "; cin >> b;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Infore um valor para <C>...: "; cin >> c;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Infore um valor para <D>...: "; cin >> d;
    cin.ignore(80, '\n'); cout << endl;

    ra1 = a + b;
    ra2 = a + c;
    ra3 = a + d;
    ra4 = b + c;
    ra5 = b + d;
    ra6 = c + d;
    rm1 = a * b;
    rm2 = a * c;
    rm3 = a * d;
    rm4 = b * c;
    rm5 = b * d;
    rm6 = c * d;

    cout << "Os resultados sao: " << endl;

    cout << " a + b = "<< ra1 << endl;
    cout << " a + c = "<< ra2 << endl;
    cout << " a + d = "<< ra3 << endl;
    cout << " b + c = "<< ra4 << endl;
    cout << " b + d = "<< ra5 << endl;
    cout << " c + d = "<< ra6 << endl;
    cout << " a * b = "<< rm1 << endl;
    cout << " a * c = "<< rm2 << endl;
    cout << " a * d = "<< rm3 << endl;
    cout << " b * c = "<< rm4 << endl;
    cout << " b * d = "<< rm5 << endl;
    cout << " c * d = "<< rm6 << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}

