#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double new_salary,current_wage,percentage;
    cin>>current_wage;
    if(current_wage>=0 && current_wage<=400){
        percentage=0.15;
    }
    if(current_wage>400 && current_wage<=800){
        percentage=0.12;
    }
    if(current_wage>800 && current_wage<=1200){
        percentage=0.10;
    }
    if(current_wage>1200 && current_wage<=2000){
        percentage=0.07;
    }
    if(current_wage>2000){
        percentage=0.04;
    }
    new_salary= current_wage*(1+percentage);
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_salary<<endl;

    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(new_salary-current_wage)<<endl;

    cout<<"Em percentual: "<<fixed<<setprecision(0)<<percentage*100<< " %"<<endl;


    return 0;
}
