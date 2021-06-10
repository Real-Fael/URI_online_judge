#include <iostream>

using namespace std;

int main() {
    int vet[10];
    cin>>vet[0];
    cout<<"N[0] = "<<vet[0]<<endl;
    for(int i=1; i<10; i++) {
        vet[i]=vet[i-1]*2;
             cout<<"N["<<i<<"] = "<<vet[i]<<endl;
    }

    return 0;
}
