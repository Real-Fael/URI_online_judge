#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i=0,sai=0;
    double nota,soma;
    while(sai!=2) {
        i=soma=0;
        sai=0;
        while(i<2) {

            cin>>nota;
            if(nota>=0 && nota<=10) {
                soma+=nota;
                i++;
            } else {
                cout<<"nota invalida"<<endl;
            }
        }
        cout<<"media = "<<fixed<<setprecision(2)<<(soma/2)<<endl;
       while(sai<1 || sai >2){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>sai;
        }

    }


    return 0;
}
