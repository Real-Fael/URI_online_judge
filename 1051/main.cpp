#include <iostream>
#include <iomanip>

using namespace std;

double maior(double x){
    if (x>=0){
        return x;
    }
    return 0;
}

int main()
{
    double sal,soma;
    cin>>sal;
    soma=0;
    if(sal>=0 && sal<=2000){
        cout<<"Isento"<<endl;
        return 0;
    }else{
        sal-=2000;
        if (sal>=1000){
            soma+=1000*0.08;
            sal-=1000;
            if (sal>=1500){
                soma+=1500*0.18;
                sal-=1500;
                soma+=sal*0.28;
            }else{
                soma+=sal*0.18;
            }


        }else{
            soma+= sal*0.08;
        }
    }
    cout<<"R$ "<<fixed<<setprecision(2)<<soma<<endl;



    return 0;
}
