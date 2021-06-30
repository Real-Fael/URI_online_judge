#include <iostream>

using namespace std;

int main() {
    long long int n,minu,soma,num;

    while(1) {
        cin>>n>>minu;
        soma=0;
        if (n==-1 || minu==-1) {
            break;
        } else {
            for(int i=n; i>0; i--) {
                cin>>num;
                soma+=num*i;
            }
            cout<<(soma*minu)<<endl;
        }



    }

return 0;
}
