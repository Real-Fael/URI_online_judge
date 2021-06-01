#include <iostream>

using namespace std;

int main()
{
    int i,lido;
    cin>>i;
    for(int j=0;j<i;j++){
        cin>>lido;
        if (lido==0){
            cout<<"NULL"<<endl;
        }else{
            if (lido%2 == 0){
                cout<<"EVEN ";
            }else{
                cout<<"ODD ";
            }
            if(lido < 0){
                cout<<"NEGATIVE"<<endl;
            }else{
                cout<<"POSITIVE"<<endl;
            }

        }

    }
    return 0;
}
