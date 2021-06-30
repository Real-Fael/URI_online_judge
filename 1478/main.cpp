#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m,centro,matriz[100][100];

    while(1) {
        cin>>m;
        if(m==0)
            break;

        centro=m/2+m%2;

        for(int i=0; i<m; i++) {
            matriz[i][i]=1;
            for(int j=i+1; j<m; j++) {
                matriz[i][j]=matriz[i][j-1]+1;

            }
            for(int j=i-1; j>=0; j--) {
                matriz[i][j]=matriz[i][j+1]+1;

            }
        }

        for(int i=0; i<m; i++) {
            for(int j=0; j<m; j++) {
                cout<<setw(3)<<right<<matriz[i][j];
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
