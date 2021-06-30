#include <iostream>

using namespace std;

int main()
{
    int n,vel,maior;

    while(cin>>n){
        cin>>maior;
        for(int i=1;i<n;i++){
            cin>>vel;
            if(vel>maior)
                maior=vel;
        }
        if(maior<10){
            cout<<"1"<<endl;
        }else{
            if(maior>=10 && maior<20){
                cout<<"2"<<endl;
            }else{
                cout<<"3"<<endl;
            }
        }

    }


    return 0;
}
