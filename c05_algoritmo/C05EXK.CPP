//C05EXK.CPP

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    uint32_t graos = 1;
    uint32_t total = 0;

    cout << "Programa Graos no Xadrez" << endl << endl;

    for(uint32_t i = 1; i <= 64; ++i)
    {
        total += graos;
        graos *= 2;
    }
    cout << "O total de graos e...: " << total << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
