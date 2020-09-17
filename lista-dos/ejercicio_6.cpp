#include <iostream>

using namespace std;

int convertir(int a, int b, int c, int d);


    int main(){

    cout<<"--------Ejercicio 6---------\n\n";
    int u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
    for (u = 0; u <= 1; u++){
        for (v = 0; v <= 1; v++){
            for (w = 0; w <= 1; w++){
                for (x = 0; x <= 1; x++){
                    y = convertir(u, v, w, x);
                    z = convertir(x, w, v, u);
                    cout<<" [y="<<y<<"]["<<"z="<<z<<"] \n";
                }
            }
        }
    }

    cout<<"\n";
    return 0;
}

int convertir(int a, int b, int c, int d){
        int e=0;
        e = 8*a+4*b+2*c+1*d;
        a = 1;
        b = 2;
        c = 3;
        d = 4;
        return (e);
    }
