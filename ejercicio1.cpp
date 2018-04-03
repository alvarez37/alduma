#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "ingresa tu edad" << endl;
    cin>>x;
    if (x>=18){
        cout << "eres mayor de edad" << endl;
    }
    else{
        cout << "eres menor de edad" << endl;
    }
    return 0;
}

