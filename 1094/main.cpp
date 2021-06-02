#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quant,total=0,num,c=0,r=0,s=0;
    char tipo;
    cin>>quant;
    for(int i=0;i<quant;i++){
        cin>>num>>tipo;
        switch (tipo){
        case 'C':
            c+=num;
        break;
        case 'R':
            r+=num;
        break;
        case 'S':
            s+=num;
        break;
        }
        total+=num;

    }
        cout<<"Total: "<<total<<" cobaias"<<endl
        <<"Total de coelhos: "<<c<<endl
        <<"Total de ratos: "<<r<<endl
        <<"Total de sapos: "<<s<<endl
        <<"Percentual de coelhos: "<<fixed<<setprecision(2)<< ((float)c/total)*100<<" %"<<endl
        <<"Percentual de ratos: "<<fixed<<setprecision(2)<< ((float)r/total)*100<<" %"<<endl
        <<"Percentual de sapos: "<<fixed<<setprecision(2)<< ((float)s/total)*100<<" %"<<endl;

    return 0;
}
