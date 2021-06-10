#include <iostream>

using namespace std;

int main()
{
    int t,i;
    long long int pa,pb;
    double g1,g2;
    cin>>t;
    for(;t>0;t--){
        cin>>pa>>pb>>g1>>g2;
        for(i=1;i<=100;i++){
            pa*=1+(g1/100);
            pb*=1+(g2/100);
            if(pa>pb){
                break;
            }
        }
        if(i>100){
            cout<<"Mais de 1 seculo."<<endl;
        }else{
        cout<<i<<" anos."<<endl;
        }
    }

    return 0;
}
