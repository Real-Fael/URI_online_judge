#include <iostream>

using namespace std;

int main()
{
   string cat1,cat2,cat3;
   cin>> cat1>>cat2>>cat3;

  if(cat1=="vertebrado"){
    if(cat2=="ave"){
        if(cat3=="carnivoro"){
            cout<<"aguia"<<endl;
        }else{
            cout<<"pomba"<<endl;
        }
    }else{
        if(cat3=="onivoro"){
            cout<<"homem"<<endl;
        }else{
            cout<<"vaca"<<endl;
        }
    }
  }else{
      if(cat2=="inseto"){
        if(cat3=="hematofago"){
            cout<<"pulga"<<endl;
        }else{
            cout<<"lagarta"<<endl;
        }
    }else{
        if(cat3=="hematofago"){
            cout<<"sanguessuga"<<endl;
        }else{
            cout<<"minhoca"<<endl;
        }
    }


  }

    return 0;
}
