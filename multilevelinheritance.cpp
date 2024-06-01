// CPP program to demonstrate multilevel inheritance
#include <iostream>
using namespace std;
class stud
{
protected:
    char name[20];
    int rn;

public:
    void getdata()
    {
        cout << "Student name:\t";
        cin >> name;
        cout << "Roll no:\t";
        cin >> rn;
    }
    void showdata()
    {
        cout << "Name of student is:\t" << name << endl;
        cout << "Roll no:\t" << rn << endl;
    }
};
class marks
{
protected:
    int m1, m2;

public:
    void getmarks()
    {
        cout << "Enter the marks in maths:\t" << endl;
        cin >> m1;
        cout << "Enter the marks in C++:\t" << endl;
        cin >> m2;
    }
    void showmarks()
    {
        cout << "Marks in maths is:\t" << m1 << endl;
        cout << "Marks in C++ is:\t" << m2 << endl;
    }
};
class result : public marks, public stud
{
    int total;

public:
    void calculate()
    {
        total = m1 + m2;
    }
    void show()
    {
        cout << "Total Marks=" << total;
    }
};
int main()
{
    result r1;
    r1.getdata();
    r1.getmarks();
    r1.calculate();
    r1.showdata();
    r1.showmarks();
    r1.show();
    return 0;
}