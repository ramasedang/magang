#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 1;
    int y = 2;
    int z = 3;

    cout << "Before swap :" << x << endl;
    cout << "Before swap :" << y << endl;
    cout << "Before swap :" << z << endl;

    //proses swap
    swap(x, y);
    swap(y, z);

    cout << "After swap :" << x << endl;
    cout << "After swap :" << y << endl;
    cout << "After swap :" << z << endl;
    return 0;
}