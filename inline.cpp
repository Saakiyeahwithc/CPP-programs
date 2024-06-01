#include <iostream>
using namespace std;
inline int set(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int s;
    s = set(10, 20);
    cout << "max:" << s;
    return 0;
}