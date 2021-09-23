
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int chek = 1;

    while (chek == 1)
    {
        std::cout << "Введите 1 для рассчета, 0 для завершения программы >";
        cin >> chek;
        switch (chek)
        {
        case (0):
        {
            cout << "Программа завершена";
            break;
        }
        case (1):
        {
            int v1, v2, t1, t2; float v0, t0;
            cout << "\nВведите первый объем >";
            cin >> v1;
            cout << "\nВведите второй объем >";
            cin >> v2;
            cout << "\nВведите первую температуру >";
            cin >> t1;
            cout << "\nВведите вторую температуру >";
            cin >> t2;

            if (v1 <= 0 || v2 <= 0)
            {
                cout << "Невозможный объем" << endl;
                continue;
            }
            if (t1 < 0 || t2 < 0)
            {
                cout << "Температура ниже критической" << endl;
                continue;
            }
            if (t1 > 100 || t2 > 100)
            {
                cout << "Температура выше критической" << endl;
                continue;
            }

            v0 = v1 + v2;
            t0 = (((v1 * t1) + (v2 * t2)) / v0);

            cout << "\nИтоговый объем >" << v0 << endl << "Итоговая температура >" << t0 << endl;
            continue;
        }
        default:
        {
            cout << "Ошибка ввода" << endl;
            chek = 1;
            continue;
        }
        }
    }
}