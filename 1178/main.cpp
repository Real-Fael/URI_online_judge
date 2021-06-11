#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double lido;
    cin>>lido;
    for(int i=0;i<100;i++){
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<lido<<endl;
        lido=lido/2;
    }

    return 0;
}
