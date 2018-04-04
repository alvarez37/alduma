#include <iostream>

using namespace std;

int main()
{
    int x,d;
    cout << "ingresa tu numero" << endl;
    cin>>x;
    d=0;
    for(int i=1;i<x;i++){
        if(x%i==0){
            d=d+1;
        }
    }
    if(d==2){
        cout<<"si es primo"<<endl;
    }
    else{
        cout<<"no es primo"<<endl;
    }


    return 0;
}
