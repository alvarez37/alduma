#include <iostream>

using namespace std;

bool asc (int i,int j){
    return i>j;
}

bool dec (int i,int j){
    return i<j;
}


void ordenar(int a[], int len, bool (*fp)(int,int)){
    for(int i=0; i<len;i++){
        for(int j=0; j<len-1;j++){
            if ((*fp) ( *(a+j),*(a+j+1)){
                *(a+j)^=*(a+j+1);
                *(a+j+1)^=*(a+j);
                *(a+j)^=*(a+j+1);
            }
        }
  }
}

void leer(int a[], int len){
    for(int i=0; i<len;i++){
      cout<<" "<<*a++;
  }
}

int main(){

  ordenar(x,6,asc);

    int n=;
    cin>>n;

    int *ptr= new int[n];

    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }
    ordenar(ptr,n, asc546
    )
    leer(ptr,n);


    delete [] ptr;

    return 0;
}
