#include <iostream>

using namespace std;

int main() {
   long long int m,n,soma;

    while(1) {
        cin>>m>>n;
        soma=0;
        if (m<=0 || n<=0) {
            break;
        } else {
            if(m>n) {
                for(int i=n; i<=m; i++) {
                    soma+=i;
                    cout<<i<<" ";
                }
            } else {
                for(int i=m; i<=n; i++) {
                    soma+=i;
                    cout<<i<<" ";
                }
            }

            cout<<"Sum="<<soma<<endl;

        }
    }
    return 0;
}
