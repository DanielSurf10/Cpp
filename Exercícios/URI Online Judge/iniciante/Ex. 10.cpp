#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int id1, id2, qtd1, qtd2;
    float preco1, preco2, total;

    cin >> id1 >> qtd1 >> preco1;
    cin >> id2 >> qtd2 >> preco2;

    total = (preco1 * qtd1) + (preco2 * qtd2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;


    return 0;
}
