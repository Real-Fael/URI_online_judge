#include <iostream>

using namespace std;

int main()
{
    int n,ant,prox,aux;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<"0 ";
        }
        if(i==1){
            cout<<"1";
            ant=0;
            prox=1;
        }
        if(i>1){
            aux=prox+ant;
            ant=prox;
            prox=aux;
            cout<<" "<<prox;

        }
    }
    cout<<endl;

    return 0;
}
