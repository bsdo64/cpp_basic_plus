#include <iostream>


int foo(int x)
{
    if(x < 10)
    {
        return 100;
    }

    return 1000;
}

int main()
{
    using namespace std;

    int carrots = 25;

    int* p = &carrots;

    cout << "You have " << carrots << " carrots" << endl;
    carrots = carrots - 1;
    cout << "Now " << carrots << " carrots" << endl;

    int a = foo(1000);
    return 0;
}
