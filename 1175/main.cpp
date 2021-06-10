#include <iostream>

using namespace std;

int main()
{
    int v[20],aux;
    for(int i=0;i<20;i++){
        cin>>v[i];
    }

    for(int i=0;i<10;i++){
        aux=v[i];
        v[i]=v[19-i];
        v[19-i]=aux;
    }

    for(int i=0;i<20;i++){
        cout<<"N["<<i<<"] = "<<v[i]<<endl;
    }

    return 0;
}
