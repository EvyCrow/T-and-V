
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int chek = 1;

    while (chek == 1)
    {
        std::cout << "������� 1 ��� ��������, 0 ��� ���������� ��������� >";
        cin >> chek;
        switch (chek)
        {
        case (0):
        {
            cout << "��������� ���������";
            break;
        }
        case (1):
        {
            int v1, v2, t1, t2; float v0, t0;
            cout << "\n������� ������ ����� >";
            cin >> v1;
            cout << "\n������� ������ ����� >";
            cin >> v2;
            cout << "\n������� ������ ����������� >";
            cin >> t1;
            cout << "\n������� ������ ����������� >";
            cin >> t2;

            if (v1 <= 0 || v2 <= 0)
            {
                cout << "����������� �����" << endl;
                continue;
            }
            if (t1 < 0 || t2 < 0)
            {
                cout << "����������� ���� �����������" << endl;
                continue;
            }
            if (t1 > 100 || t2 > 100)
            {
                cout << "����������� ���� �����������" << endl;
                continue;
            }

            v0 = v1 + v2;
            t0 = (((v1 * t1) + (v2 * t2)) / v0);

            cout << "\n�������� ����� >" << v0 << endl << "�������� ����������� >" << t0 << endl;
            continue;
        }
        default:
        {
            cout << "������ �����" << endl;
            chek = 1;
            continue;
        }
        }
    }
}