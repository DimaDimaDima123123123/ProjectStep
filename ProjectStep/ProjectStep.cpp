#include <iostream>
#include <Windows.h>

using namespace std;

class Student
{
private:
    char name[50];        
    char birthdate[20];    
    char phone[20];      
    char city[30];        
    char country[30];      
    char education[50];   
    char classnumber[10];  
    
public:
    Student(const char* Name, const char* Birthdate, const char* Phone, const char* City, const char* Country, const char* Education, const char* Classnumber)
    {
        strcpy_s(name, Name);
        strcpy_s(birthdate, Birthdate);
        strcpy_s(phone, Phone);
        strcpy_s(city, City);
        strcpy_s(country, Country);
        strcpy_s(education, Education);
        strcpy_s(classnumber, Classnumber);
    }

    void Input()
    {
        cout << "Введите ФИО: ";
        cin.getline(name, 40);
        cout << "Введите дату рождения: ";
        cin.getline(birthdate, 10);
        cout << "Введите телефон: ";
        cin.getline(phone, 10);
        cout << "Введите город: ";
        cin.getline(city, 15);
        cout << "Введите страну: ";
        cin.getline(country, 15);
        cout << "Введите название учебного заведения: ";
        cin.getline(education, 20);
        cout << "Введите номер группы: ";
        cin.getline(classnumber, 5);
    }

    void Print() const
    {
        cout << "ФИО: " << name << endl;
        cout << "Дата рождения: " << birthdate << endl;
        cout << "Телефон: " << phone << endl;
        cout << "Город: " << city << endl;
        cout << "Страна: " << country << endl;
        cout << "Учебное заведение: " << education << endl;
        cout << "Номер группы: " << classnumber << endl;
    }

    void SetName(const char* Name) { strcpy_s(name, Name); }
    const char* GetName() const { return name; }

    void SetPhone(const char* Phone)
    {
        strcpy_s(phone, Phone);
    }
    const char* GetPhone() const
    {
        return phone;
    }

    ~Student()
    {

    }

};

int main()
{
    setlocale(LC_ALL, "ru");

    Student student("Зубенко Михаил Петрович", "08.03.1969", "+3805633465", "Троицкое", "Украина", "ПТУ", "КН-1337");
    student.Print();
    cout << "\nВведите новые данные студента:\n";
    student.Input();
    student.Print();

    return 0;
}
