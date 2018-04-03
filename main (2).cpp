#include <iostream>

using namespace std;

int main()
{
    int num,con=1,primo=2,x=2;
    cout << "ingresa hasta que numero quieres ver" << endl;
    cin>>num;
    while(con<=num){
        if(primo%x==0){
            cout<<primo<<endl;

            con=con+1;
        }
        x=2;
        primo=primo+1;
        else{
            x=x+1;
        }
    }



return 0;
}


