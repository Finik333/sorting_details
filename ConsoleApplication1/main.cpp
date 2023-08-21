#include <iostream>
using namespace std;
int main()
{
    int grammv;
    int poz;
    int vsto;
    float gramm;
    float g{};
    float v;
    int a;
    float b;
    setlocale(0, "rus");
    cout << "Пожалуйста введите сколько всего грамм: ";
    cin >> grammv;
    cout << "Пожалуйста введите сколько всего позиций: ";
    cin >> poz;
    cout << "Пожалуйста, соберите сто штук одной позиции и запишите время в секундах: ";
    cin >> vsto;
    cout << "Пожалуйста взвести каждую позицию и запишите ее вес в граммах"<< endl;
    for (int i = 0; i < poz; i++) {
        cout << "Позиция номер " << i << ":";
        cin >> gramm;
        cout << endl;
        g = g + gramm;
    }
    g = g / poz;
    cout << "Средний вес всех позиций: " << g<< endl;
    v = grammv / g;
    cout << "Примерно всего деталей: " << v<< endl;
    b = v / 100;
    a = b * vsto;
    a = a / 60;
    cout << "Вы можете расcортировать ваши детали за: "<<a<<" мин";
    return 0;
}
