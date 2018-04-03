#include <iostream>

using namespace std;

int main()
{
    int x;
    cout <<"ingresa el año" << endl;
    cin>>x;
    if((x%4==0)and(x%100!=0)or(x%400==0)){
        cout<<"si es bisiesto"<<endl;
    }
    else{
        cout<<"no es bisiesto"<<endl;
    }
    return 0;
}
