#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quant,x,y,soma=0;
    cin>>quant;
    for(int i=quant;i>0;i--){
        soma=0;
        cin>>x>>y;
        for(int j=x;y>0;j++){
            if(j%2!=0){
                y--;
                soma+=j;
            }
        }
        cout<<fixed<<setprecision(0)<<soma<<endl;
    }

    return 0;
}
