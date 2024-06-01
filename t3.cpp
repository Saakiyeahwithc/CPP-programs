#include <iostream>
using namespace std;
class employee
{
private:
    int eid, salary;
    char ename[20];

public:
    void getdata()
    {
        cout << "Enter employee name: " << endl;
        cin >> ename;
        cout << "Enter id: " << endl;
        cin >> eid;
        cout << "Enter salary: " << endl;
        cin >> salary;
    }
};
class Typist : private employee

{
    int typing_speed;

public:
    void gdata()
    {
        cout << "Enter typing speed: " << endl;
        cin >> typing_speed;
    }
    void sdata()
    {
        cout << "typing_speed=" << typing_speed << endl;
        cout << "Ename=" << ename << endl;
        cout << "Eid=" << eid << endl;
        cout << "Salary=" << salary << endl;
    }
};
int main()
{

    Typist obj1, obj2;
    obj1.getdata();
    obj2.gdata();
    obj2.sdata();
    return 0;
}
