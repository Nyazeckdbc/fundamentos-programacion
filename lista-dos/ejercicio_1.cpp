#include <iostream>

using namespace std;

int main()
{

    
    int x, y, z;

    cout<<"--------Ejercicio 1---------\n\n";
    cout<<"Valor de x: ";
    cin>>x;

    cout<<"Valor de y: ";
    cin>>y;

    /////A
    if (((x == 0) && (y == 1)) || ((x == 1) && (y == 0)))
        z = 1;
    else
        z = 0;

    cout<<"\na.- Valor de z: "<<z;
    /////B

    if (((x == 1) || (y == 0)) && ((x == 0) && (y == 1)))
        z = 1;
    else
        z = 0;

cout<<"\nb.- Valor de z: "<<z;

    /////C

    if (x == 0)
    {
        if (y == 0)
            z = 0;
        else
            z = 1;
    }
    else
    {
        if (y == 0)
            z = 2;
        else
            z = 3;
    }

    cout<<"\nc.- Valor de z: "<<z<<"\n\n";
    return 0;
}