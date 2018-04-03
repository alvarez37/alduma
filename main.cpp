#include <iostream>

using namespace std;

int main()
{
    int s,x;
    cout << "ingresa hasta que numero quieres" << endl;
    cin>>x;
    s=0;
    while(s<=x){

       cout<<"\r"<<s++<<"\a"<<endl;

    }
    return 0;
}
