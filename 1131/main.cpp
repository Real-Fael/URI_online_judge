#include <iostream>

using namespace std;

int main()
{
    int golInter,golGrem,vitInter,vitGrem,empate,control=1,grenais;
    vitGrem=vitInter=empate=grenais=0;
    while(control==1){
        cin>>golInter>>golGrem;
        grenais++;
        if(golGrem==golInter){
            empate++;
        }else{
            if(golGrem > golInter){
                vitGrem++;
            }else{
                vitInter++;
            }
        }
     cout<<"Novo grenal (1-sim 2-nao)"<<endl;
     cin>>control;

    }
    cout<<grenais<<" grenais"<<endl;
    cout<<"Inter:"<<vitInter<<endl;
    cout<<"Gremio:"<<vitGrem<<endl;
    cout<<"Empates:"<<empate<<endl;
    if(vitGrem==vitInter){
        cout<<"nao houve vencedor"<<endl;
    }else{
        if(vitGrem>vitInter){
            cout<<"Gremio venceu mais"<<endl;
        }else{
            cout<<"Inter venceu mais"<<endl;
        }
    }



    return 0;
}
