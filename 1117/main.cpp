#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i=0;
    double nota,soma=0;
    while(i<2){
        cin>>nota;
        if(nota>=0 && nota<=10){
            soma+=nota;
            i++;
        }else{
            cout<<"nota invalida"<<endl;
        }
    }
    cout<<"media = "<<fixed<<setprecision(2)<<(soma/2)<<endl;

    return 0;
}
