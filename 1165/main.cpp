#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int x;
    bool verifica;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>x;
        verifica=true;
        for(int i=2;i<x;i++){
            if(x%i==0){
                verifica=false;
                break;
            }
        }
        if(!verifica){
            cout<<x<<" nao eh primo"<<endl;
        }else{
            cout<<x<<" eh primo"<<endl;
        }
    }

    return 0;
}
