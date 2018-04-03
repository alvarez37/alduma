#include <iostream>

using namespace std;

int main()
{
    int x,y,s;

    cout << "ingresa tus numeros" << endl;
    cin>>x;
    cin>>y;
    s=x*x;
    if ((x%2==0)and(y%2==0)){
        cout << "son multiplos de 2"<< endl;
    }
    else{
        cout<<"no lo son"<<endl;
    }
    if(x%y==0){
        cout<<x<<"si es multiplo de"<<y<<endl;
    }
    else{
       cout<<x<<"no es multiplo de"<<y<<endl;
    }
    if(s==y){
        cout<<"si es , elevado al cuadrado"<<endl;
    }
    else{
         cout<<"no es , elevado al cuadrado"<<endl;
    }
    return 0;
}
