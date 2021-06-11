#include <iostream>

using namespace std;

int main() {
    int t,calcatual,digitado;
    unsigned long long int vetfibo[61];

    vetfibo[0]=0;
    vetfibo[1]=1;
    calcatual=1;
    cin>>t;
    for(int j=0; j<t; j++) {
        cin>>digitado;
        if(digitado>calcatual) {
            while (calcatual<digitado) {
                vetfibo[calcatual+1]=vetfibo[calcatual]+vetfibo[calcatual-1];
                calcatual++;
            }
        }
        cout<<"Fib("<<digitado<<") = "<<vetfibo[digitado]<<endl;
    }
    return 0;
}
