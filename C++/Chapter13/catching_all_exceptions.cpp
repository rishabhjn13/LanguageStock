#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x == 0)
            throw x;
        if (x == -1)
            throw 'x';
        if (x == 1 || x==2)
            throw 1.0;
    }
    catch (...)
    {
        cout << "Caught an exception\n";
    }
}
int main(){
    cout << "Testing Generic Catch \n";
    test(-1);
    test(0);
    test(1);
    test(2);
    return 0;
}