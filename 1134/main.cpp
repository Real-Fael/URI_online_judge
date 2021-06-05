#include <iostream>

using namespace std;

int main()
{
    int cod,alcool,gas,diesel;
    cout << "MUITO OBRIGADO" << endl;
    cod=alcool=gas=diesel=0;
    while(cod!=4){
        cin>>cod;
        switch(cod){
    case 1:
        alcool++;
        break;
        case 2:
        gas++;
        break;
          case 3:
        diesel++;
        break;
        }
    }
    cout<<"Alcool: "<<alcool<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<diesel<<endl;


    return 0;
}
