#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,qnt,soma;
    soma=qnt=0;
    while(1){
        cin>>n;
        if(n<0){
            break;
        }
        soma+=n;
        qnt++;

    }
    cout<<fixed<<setprecision(2)<<((float)soma/qnt)<<endl;

    return 0;
}
