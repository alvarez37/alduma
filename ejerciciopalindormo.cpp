#include <iostream>

using namespace std;

int main()

{
    int a,b,c,d,x,e;
    cout << "ingresa tu numero de 5 cifras" << endl;
    cin>>x;
    a=x%1000/100;
    b=x%10;
    c=x%100/10;
    d=x/10000;
    e=x%10000/1000;
    if((d==b)and(e==c)){
        cout<<"es palindromo"<<endl;
    }
    else{
        cout<<"no es palindromo"<<endl;
    }

    return 0;
}
