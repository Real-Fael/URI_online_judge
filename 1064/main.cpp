#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double lido,soma=0;
    int quant=0;
    for(int i=0;i<6;i++){
        cin>>lido;

        if(lido>=0){
            quant++;
            soma+=lido;
        }
    }
    cout<<quant<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<(soma/quant)<<endl;

    return 0;
}
