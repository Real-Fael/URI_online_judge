#include <iostream>

using namespace std;

int main()
{
    double lido;
    int quant=0;
    for(int i=0;i<6;i++){
        cin>>lido;
        if(lido>=0){
            quant++;
        }
    }
    cout<<quant<<" valores positivos"<<endl;

    return 0;
}
