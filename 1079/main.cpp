#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double media,num;
    cin>>n;
    for(int i=0;i<n;i++){
        media=0;
        cin>>num;
        media+=num*2;
        cin>>num;
        media+=num*3;
        cin>>num;
        media+=num*5;
        media/=10;
        cout<<fixed<<setprecision(1)<<media<<endl;
    }

    return 0;
}
