#include <iostream>
using namespace std;
int main()
{
    int grammv;
    int poz;
    int vsto;
    int gramm;
    float g{};
    setlocale(0, "rus");
    cout << "Пожалуйста введите сколько всего грамм" <<endl;
    cin >> grammv;
    cout << "Пожалуйста введите сколько всего позиций" << endl;
    cin >> poz;
    cout << "Пожалуйста соберите сто штук одной позиции и запишите время в секундах" << endl;
    cin >> vsto;
    cout << "Пожалуйста взвести каждую позицию и запишите ее вес в граммах" << endl;
    for (int i = 0; i < poz; i++) {
        cout << "Позиция номер " <<i<<":";
        cin >> gramm;
        cout << endl;
        g = g + gramm;
    }
    g = g / poz;
    cout <<"Средний вес всех позиций: "<< g;
}
