#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    for(double i=0; i<=2; i+=0.2) {
        for(double j=i+1; j<=i+3; j++) {
            if (fmod(j,1)==0) {
                cout<<"I="<<fixed<<setprecision(0)<<i<<" J="<<setprecision(0)<<j<<endl;
            } else {
                cout<<"I="<<fixed<<setprecision(1)<<i<<" J="<<setprecision(1)<<j<<endl;
            }
        }
    }
    return 0;
}
