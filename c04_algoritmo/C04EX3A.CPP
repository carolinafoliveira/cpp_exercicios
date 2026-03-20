// C04EX3A.CPP

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, r;

    cout << "Informe um valor para <A>...: "; cin >> a;
    cin.ignore(80, '\n'); cout << endl;

    cout << "Informe um valor para <B>...: "; cin >> b;
    cin.ignore(80, '\n'); cout << endl;

    if (a > b){
        r = a - b;
    }else {
        r = b - a;
    }
    cout << "A diferenca do maior pelo menor e...: " << r << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
