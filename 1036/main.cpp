#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,delta,bhaskara,r1,r2;
    cin>>a>>b>>c;

    delta=b*b-4*a*c;
    if (delta<0 || a==0){
        cout<<"Impossivel calcular"<<endl;
    }else{
        r1= (-b-sqrt(delta))/(2*a);
        r2= (-b+sqrt(delta))/(2*a);

        cout<<fixed;
        cout <<setprecision(5)<< "R1 = "<<r2 << endl;
        cout <<setprecision(5)<< "R2 = "<<r1 << endl;

    }

    return 0;
}
