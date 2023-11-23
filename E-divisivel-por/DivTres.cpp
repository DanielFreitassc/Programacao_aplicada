#include "DivTres.hpp"

// Construtor
DivTres::DivTres() {
    for (int i = 0; i < totalNums; i++) {
        numbers[i] = 0;
        found[i] = '0';
    }
}

// Coleta as Entradas do Usuário
void DivTres::getNumbers() {
    for (int i = 0; i < totalNums; i++) {
        cout << "Digite o numero " << i + 1 << '/' << totalNums << ": ";
        cin >> numbers[i];
    }

    numDivTres(numbers);
}

// Imprime os resultados
void DivTres::printResults() {
    cout << "\nOs numeros com 'Y' sao divisiveis por 3\n" << endl;

    for (int i = 0; i < totalNums; i++)
        cout << setw(4) << numbers[i] << ' ' << found[i]
             << ((i + 1) % 2 == 0 ? '\n' : '\t');
}

// Verifica os valores divisíveis por 3
void DivTres::numDivTres(int num[totalNums]) {
    for (int i = 0; i < totalNums; i++) {
        if (num[i] % 3 == 0)
            found[i] = 'Y';
        else
            found[i] = 'N';
    }
}
