
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int v1, v2, t1, t2; float v0, t0;
    std::cout << "Введите первый объем >";
    cin >> v1;
    cout << "\nВведите второй объем >";
    cin >> v2;
    cout << "\nВведите первую температуру >";
    cin >> t1;
    cout << "\nВведите вторую температуру >" ;
    cin >> t2;

    if (v1 <= 0 || v2 <= 0 || t1 <= 0 || t2 <= 0)
    {
        cout << "Неверные данные.";
        return 0;
    }

    v0 = v1 + v2;
    t0 = ((v1 * t1) + (v2 * t2) / v0);

    cout << "\nИтоговый объем >" << v0 << endl << "Итоговая температура >" << t0 << endl;
}