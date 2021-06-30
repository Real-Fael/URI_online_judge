#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m,cont,matriz[16][16],quantidade;

    while(1) {
        cin>>m;
        if(m==0)
            break;
        for(int i=0; i<m; i++) {
            for(int j=0; j<m; j++) {
                if(i==0) {
                    if(j==0) {
                        matriz[i][j]=1;
                    } else {
                        matriz[i][j]=matriz[i][j-1]*2;
                    }
                }else
                    matriz[i][j]=matriz[i-1][j]*2;
            }
        }
        cont=matriz[m-1][m-1];
        for(quantidade=0;cont>0;quantidade++){
            cont=(int)((float)cont/10);
        }
        for(int i=0; i<m; i++) {
            for(int j=0; j<m; j++) {
                cout<<right<< setw(quantidade) <<matriz[i][j];
                if(j==(m-1))
                    break;
                cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
