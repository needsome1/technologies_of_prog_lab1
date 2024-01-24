#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class Person {
public:
    string lastName;
    string firstName;
    string middleName;
    string address;
    char gender;
    string education;
    int birthYear;

    Person(const string& last, const string& first, const string& middle,
        const string& addr, char gen, const string& edu, int year)
        : lastName(last), firstName(first), middleName(middle), address(addr),
        gender(gen), education(edu), birthYear(year) {}

    
    void displayInfo() const {
        cout << lastName << " " << firstName << " " << middleName << " - "
            << address << ", " << "Gender: " << gender << ", Education: "
            << education << ", Birth Year: " << birthYear << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    list<Person> people = {
        {"������", "����", "��������", "������", '�', "������", 1990},
        {"������", "����", "��������", "�����-���������", '�', "�������", 1985},
        {"��������", "�����", "��������", "������", '�', "������", 1988},
    };

    int targetYear = 1990;
    cout << "��������, ��� ������� ��������� " << 2024 - targetYear << " ����:" << endl;
    for (auto pers : people) {
        if (pers.birthYear < targetYear) {
            pers.displayInfo();
        }
    }
    cout << endl;
    cout << "�������� � ������ ������������ " << endl;
    for (auto pers : people) {
        if (pers.education =="������") {
            pers.displayInfo();
        }
    }
    cout << endl;
    cout << "�������� �������� ����" << endl;
    for (auto pers: people)
    {
        if (pers.gender == '�')
        {
            pers.displayInfo();
        }
    }




   

    return 0;
}
