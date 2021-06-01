#include <iostream>

using namespace std;

int main() {
    int n[3],ord[3],aux;
    bool verifica=true;
    cin>>n[0]>>n[1]>>n[2];
    for(int i=0; i<=2; i++) {
        ord[i]=n[i];
    }
    for (int j=0; j<3; j++) {
        verifica=false;

        for(int i=0; i<2 ; i++) {
            if(ord[i]>ord[i+1]) {
                aux=ord[i+1];
                ord[i+1]=ord[i];
                ord[i]=aux;
                verifica=true;
            }
        }
        if(!verifica) {
            break;
        }
    }
    for(int i=0; i<=2; i++) {
        cout<<ord[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<=2; i++) {
        cout<<n[i]<<endl;
    }

    return 0;
}
