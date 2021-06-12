#include <iostream>
#include <iomanip>
#define maximo 12
using namespace std;

int main() {
    double m[maximo][maximo],soma=0,med=0;

    char op;
    cin>>op;
    for(int i=0; i<maximo; i++) {
        for(int j=0; j<maximo; j++) {
            cin>>m[i][j];
            if (j>i){
                soma+=m[i][j];
                med++;
            }
        }
    }
    if(op=='S') {
        cout<<fixed<<setprecision(1)<<soma<<endl;
    } else {
        cout<<fixed<<setprecision(1)<<soma/med<<endl;
    }

    return 0;
}
