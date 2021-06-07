#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   long long int x,soma=0;
    while(1){
        soma=0;
        cin>>x;
        if(x==0){
            break;
        }
        for(long long int i=x,k=0;k<5;i++){
            if(i%2==0){

                soma+=i;
                k++;
            }
        }
        cout<<fixed<<setprecision(0)<<soma<<endl;

    }

    return 0;
}
