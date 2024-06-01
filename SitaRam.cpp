// CPP program to concatenate to strings "Sita" and "Ram" and disply output "SitaRam"
#include <iostream>
#include <string>
using namespace std;
class name
{
    char s[20], c;

public:
    void get(char *c)
    {
        strcpy(s, c);
    }
    void show()
    {
        cout << s << endl;
    }
    name operator+(name x)
    {
        name temp;
        strcpy(temp.s, s);
        strcat(temp.s, x.s);
        return temp;
    }
};
int main()
{
    name s1, s2, s3;
    s1.get("Sita");
    s2.get("Ram");
    s3 = s1 + s2;
    s3.show();
    return 0;
}