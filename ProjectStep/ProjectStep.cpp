#include <iostream>
using namespace std;

class Fraction
{
private:
    int x;
    int y;
public:
    Fraction(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }
    void SetX(int valueX)
    {
        cout << "Введите X: ";
        cin >> valueX;
        x = valueX;
    }
    void SetY(int valueY)
    {
        cout << "Введите Y: ";
        cin >> valueY;
        y = valueY;
    }
    void Calc(int choice)
    {
        cout << "Выберите желаемую операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "X" << "+" << "Y"<< "=" << x + y;
            break;
        case 2:
            cout << "X" << "-" << "Y"<< "=" << x - y;
            break;
        case 3:
            cout << "X" << "*" << "Y" << "=" << x * y;
            break;
        case 4:
            cout << "X" << "/" << "Y" << "=" << x / y;
            break;
        default:
            cout << "Неизвестная операция.";
            break;
        }
    }
    void Print()
    {
        cout << "X = " << x << "\t Y = " << y << endl;
    }
};



int main()
{
    setlocale(LC_ALL, "ru");

    Fraction a(0, 0);
    a.SetX(0);
    a.SetY(0);
    a.Print();
    a.Calc(0);
}
