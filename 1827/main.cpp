#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m,centro,matriz[102][102];

    while(cin>>m) {
        if(m==0)
            break;
        centro=m/2;
        for(int i=0; i<m; i++) {
            for(int j=0; j<m; j++) {
                matriz[i][j]=0;
                 if(j==(m-i-1)){
                   matriz[i][j]=3;
                }
                if(i==j){
                    matriz[i][j]=2;
                }
                if(i>=(int)((float)m/3) && i<(m-(int)((float)m/3)) &&
                   j>=(int)((float)m/3) && j<(m-(int)((float)m/3)) ){
                matriz[i][j]=1;
                }


            }

        }
        matriz[centro][centro]=4;

        for(int i=0; i<m; i++) {
            for(int j=0; j<m; j++) {
                cout<<matriz[i][j];
                if(j==(m-1))
                    break;

            }
             cout<<endl;
        }
        cout<<endl;

    }





    return 0;
}
