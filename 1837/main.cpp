#include <iostream>

using namespace std;

int main()
{
    int a,b,r,q;
    cin>>a>>b;
    r=a%b;
    if(r<0){
        if(b<0){
            r=r-b;
        }else{
            r=r+b;
        }

    }
    q=(a-r)/b;

    cout<<q<<" "<<r<<endl;

    return 0;
}
