#include <iostream>
#include <iomanip>
#define maximo 12
using namespace std;

int main() {
    double m[maximo][maximo],soma=0;
    int linha;
    char op;
    cin>>linha>>op;
    for(int i=0; i<maximo; i++) {
        for(int j=0; j<maximo; j++) {
            if(i>linha) {
                break;
            }
            cin>>m[i][j];
            if (i==linha)
                soma+=m[i][j];
        }
    }
    if(op=='S') {
        cout<<fixed<<setprecision(1)<<soma<<endl;
    } else {
        cout<<fixed<<setprecision(1)<<soma/12<<endl;
    }

    return 0;
}
