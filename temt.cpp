
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int v1, v2, t1, t2; float v0, t0;
    std::cout << "������� ������ ����� >";
    cin >> v1;
    cout << "\n������� ������ ����� >";
    cin >> v2;
    cout << "\n������� ������ ����������� >";
    cin >> t1;
    cout << "\n������� ������ ����������� >" ;
    cin >> t2;

    if (v1 <= 0 || v2 <= 0 || t1 <= 0 || t2 <= 0)
    {
        cout << "�������� ������.";
        return 0;
    }

    v0 = v1 + v2;
    t0 = ((v1 * t1) + (v2 * t2) / v0);

    cout << "\n�������� ����� >" << v0 << endl << "�������� ����������� >" << t0 << endl;
}