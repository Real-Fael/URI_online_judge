#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if (abs(b-c)<a && a<(b+c)){
        cout<<fixed<<"Perimetro = "<<setprecision(1)<<(a+b+c)<<endl;
    }else{
        cout<<fixed<<"Area = "<<setprecision(1)<<(((a+b)*c)/2)<<endl;
    }


    return 0;
}
