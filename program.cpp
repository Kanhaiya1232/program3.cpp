#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    string y;
};
int main()
{
    A myobj;
    myobj.x=5;
    myobj.y=" Hello";
    cout<<myobj.x;
    cout<<myobj.y;
    return 0;
}