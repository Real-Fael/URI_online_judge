#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1,n2,n3,n4,mp;

    cin>>n1>>n2>>n3>>n4;

    mp=(n1*2+n2*3+n3*4+n4)/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<mp<<endl;
    if (mp>=7) {
        cout<<"Aluno aprovado."<<endl;
    }
    if(mp<5) {
        cout<<"Aluno reprovado."<<endl;
    }
    if (mp>=5 && mp<7) {
        cout<<"Aluno em exame."<<endl;
        cin>>n1;
        cout<<"Nota do exame: "<<setprecision(1)<<n1<<endl;
        mp=(mp+n1)/2;
        if (mp>=5) {
            cout<<"Aluno aprovado."<<endl;
        } else {
            cout<<"Aluno reprovado"<<endl;
        }
        cout<<"Media final: "<<setprecision(1)<<mp<<endl;

    }


    return 0;
}
