#include <iostream>

using namespace std;

int main()
{
    int num,maior,pos;
    cin>>maior;
    pos=1;
    for (int i=2;i<=100;i++){
        cin>>num;
        if (num>maior){
            maior=num;
            pos=i;
        }
    }
    cout<<maior<<endl<<pos<<endl;

    return 0;
}
