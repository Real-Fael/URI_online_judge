#include <iostream>
#include <climits>
#include <vector>


using namespace std;

class vertice{

    int aresta[100],pesoAresta[100],quantArestas;//100 pois pode ter castelos e vilas juntos

    int peso,pai;

    public:
    vertice(){
        peso= INT_MAX;
        pai=-1;
        quantArestas=0;
    }
    int getPeso(){
        return peso;
    }
    void setPeso(int p){
        peso=p;
    }

    int getpai(){
        return pai;
    }
    void setpai(int pi){
        pai=pi;
    }

    int getQuantArestas(){
        return quantArestas;
    }
    void insereAresta(int vertice,int p){
        aresta[getQuantArestas()]=vertice;
        pesoAresta[getQuantArestas()]=p;
        quantArestas++;

    }


/*
   bool operator < ( juncao &other){//porque n pode usa const
        return (peso<other.getPeso());
   }
*/
};

bool castelo(int v,int a){
    if (v>=a){ // o vetor começará em 0 ao inves de 1 por isso essa alteração foi necessário
        return true;
    }
    return false;
}

void mario(){
    int a,b,m,l,k,n;
    cin>>a>>b>>m>>l>>k;
    n=a+b;
    vector<vertice> vertices;


    for(int i=0;i<n;i++){

    }


}



int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        mario();



    cout << "Hello world!" << endl;
    }

    return 0;
}
