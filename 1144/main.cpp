#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin>>n;
    for(int i=1;i<=n;i++){
         cout<<fixed<<setprecision(0)<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<endl;
         cout<<setprecision(0)<<i<<" "<<pow(i,2)+1<<" "<<pow(i,3)+1<<endl;

    }

    return 0;
}
