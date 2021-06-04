#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x,y,quant;
    cin>>quant;
    for (int i=0;i<quant;i++){
    cin>>x>>y;
    if(y==0){
        cout<<"divisao impossivel"<<endl;
    }else{
        cout<<fixed<<setprecision(1)<<((float)x/y)<<endl;
    }
    }
    return 0;
}
