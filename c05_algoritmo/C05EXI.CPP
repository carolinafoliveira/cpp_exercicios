//C05EXI.CPP

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    uint32_t anterior = 0;
    uint32_t atual = 1;
    uint32_t proximo;

    cout << "Programa Fibonacci" << endl << endl;
    for(uint16_t i = 1; i <= 15; ++i)
    {
        proximo = atual + anterior;
        cout << "Valor atual: " << atual << endl;
        anterior = atual;
        atual = proximo;
    }
    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
