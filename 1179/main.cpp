#include <iostream>

using namespace std;

void mostraVet(int vet[],int ind,bool par){
    if(par){
        for(int i=0;i<ind;i++){
            cout<<"par["<<i<<"] = "<<vet[i]<<endl;
        }
    }else{
        for(int i=0;i<ind;i++){
            cout<<"impar["<<i<<"] = "<<vet[i]<<endl;
        }
    }
}

int main()
{
    int indPar,indImpar,vetPar[5],vetImpar[5],num;

    indImpar=indPar=0;
    for(int j=0;j<15;j++){
        cin>>num;
        if(num%2!=0){
            vetImpar[indImpar]=num;
            indImpar++;
            if(indImpar==5){
                mostraVet(vetImpar,indImpar,false);
                indImpar=0;
            }
        }else{
            vetPar[indPar]=num;
            indPar++;
            if(indPar==5){
                mostraVet(vetPar,indPar,true);
                indPar=0;
            }

        }
    }
    mostraVet(vetImpar,indImpar,false);
     mostraVet(vetPar,indPar,true);

    return 0;
}
