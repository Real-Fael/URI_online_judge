#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    while(1){
        cin>>a;
        if(a==0)
            break;
        cin>>b>>c;
        cout<<(int)sqrt((a*b)/((float)c/100))<<endl;;
    }

    return 0;
}
