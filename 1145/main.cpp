#include <iostream>

using namespace std;

int main()
{
    int x,y,cont=1;
    cin>>x>>y;
    while(cont<=y){
        cout<<cont;
        if(cont%x==0){
        cout<<endl;
        }else{
        cout<<" ";
        }
        cont++;
    }


    return 0;
}
