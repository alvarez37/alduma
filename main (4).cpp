#include <iostream>

using namespace std;


int main()
{
    int x,y,z;
    float v;
    cout << "ingresa tus numeros" << endl;
    cin>>x;
    cin>>y;
    cin>>z;
    v=(x+y+z)/3;
    if ((x>y)and(x>z)){
        cout << "mayor es"<<x << endl;
    }
    else if ((x<y)and(y>z)){
        cout << "mayor es"<<y << endl;
    }
    else{
        cout<<"mayor es"<<z<<endl;
    }
    cout<<"promedio es"<<v<<endl;
    return 0;
}
