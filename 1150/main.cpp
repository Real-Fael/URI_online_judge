#include <iostream>

using namespace std;

int main()
{
    int x,z,soma,qnt;
    cin>>x;
    do{
       cin>>z;
    }while(z<=x);
    soma=qnt=0;
    for(int i=x;soma<z;i++){
        soma+=i;
        qnt++;
    }
    cout<<qnt<<endl;

    return 0;
}
