#include <iostream>

using namespace std;

int main()
{
    int n,soma=1;
    cin>>n;
    for(int i=n;i>0;i--){
        soma*=i;
    }
    cout<<soma<<endl;
    return 0;
}
