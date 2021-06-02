#include <iostream>

using namespace std;

int main() {
   long long int m,n,soma,quant;

   cin>>quant;
    for(int j=0;j<quant;j++) {
        cin>>m>>n;
        soma=0;
        if (m<=0 || n<=0) {
            break;
        } else {
            if(m>n) {
                for(int i=n+1; i<m; i++) {
                    if(i%2==1){
                       soma+=i;
                    }

                }
            } else {
                for(int i=m+1; i<n; i++) {
                    if(i%2==1){
                       soma+=i;
                    }
                }
            }

            cout<<soma<<endl;

        }
    }
    return 0;
}
