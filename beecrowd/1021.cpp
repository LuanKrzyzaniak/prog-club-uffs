#include <iostream>
 
using namespace std;

int main() {

    float money;
    int change;

    cin >> money;
    cout << "NOTAS: \n";

    change = static_cast<int>(money / 100);
    money -= change * 100;
    cout << change << "nota(s) de R$100.00\n";

    change = static_cast<int>(money / 50);
    money -= change * 50;
    cout << change << "nota(s) de R$50.00\n";

    change = static_cast<int>(money / 20);
    money -= change * 20;
    cout << change << "nota(s) de R$20.00\n";

    change = static_cast<int>(money / 10);
    money -= change * 10;
    cout << change << "nota(s) de R$10.00\n";

    change = static_cast<int>(money / 5);
    money -= change * 5;
    cout << change << "nota(s) de R$5.00\n";

    change = static_cast<int>(money / 2);
    money -= change * 2;
    cout << change << "nota(s) de R$2.00\n";

    change = static_cast<int>(money / 1);
    money -= change * 1;
    cout << "MOEDAS: \n" << change << "moeda(s) de R$1.00\n";

    change = static_cast<int>(money / 0.5);
    money -= change * 0.5;
    cout << change << "moeda(s) de R$0.50\n";

    change = static_cast<int>(money / 0.25);
    money -= change * 0.25;
    cout << change << "moeda(s) de R$0.025\n";

    change = static_cast<int>(money / 0.10);
    money -= change * 0.10;
    cout << change << "moeda(s) de R$0.10\n";

    change = static_cast<int>(money / 0.05);
    money -= change * 0.05;
    cout << change << "moeda(s) de R$0.05\n";

    change = static_cast<int>(money / 0.01);
    money -= change * 0.01;
    cout << change << "moeda(s) de R$0.01\n";

    return 0;
}