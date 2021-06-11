#include <iostream>

using namespace std;

int main()
{
    int ind,menor,pos,lido;
    cin>>ind>>menor;
    pos=0;
    for (int i=1;i<ind;i++){
        cin>>lido;
        if(lido<menor){
            menor=lido;
            pos=i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<pos<<endl;
    return 0;
}
