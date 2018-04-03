#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d,e;
    cout << "ingresa tu numero de 5 cifras" << endl;
    cin>>x;
    a=x%1000/100;
    b=x%10;
    c=x%100/10;
    d=x/10000;
    e=x%10000/1000;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<a<<endl;
    cout<<c<<endl;
    cout<<b<<endl;

    return 0;
}
