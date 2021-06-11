#include <iostream>

using namespace std;

int main()
{
    int lido;
    cin>>lido;
    for(int i=0;i<1000;i++){
        cout<<"N["<<i<<"] = "<<(i%lido)<<endl;
    }

    return 0;
}
