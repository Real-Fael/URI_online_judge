#include <iostream>

using namespace std;

int main()
{
  int lido;
    int quant=0;
    for(int i=0;i<5;i++){
        cin>>lido;

        if((lido % 2)==0){
            quant++;

        }
    }
    cout<<quant<<" valores pares"<<endl;

    return 0;
}
