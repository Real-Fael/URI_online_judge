#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i*4+1;j<i*4+4;j++){
         cout<<j<<" ";
        }
        cout<<"PUM"<<endl;
    }

    return 0;
}
