#include <iostream>

using namespace std;

int main() {
    int h_ini,m_ini,h_final,m_final;
    cin>>h_ini>>m_ini>>h_final>>m_final;

    if (h_ini==h_final&& m_ini==m_final) {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    } else {
        if (h_ini>=h_final) {
            if (m_ini>m_final) {
                cout<<"O JOGO DUROU "<<(24-h_ini+h_final-1)<<" HORA(S) ";
            } else {
                cout<<"O JOGO DUROU "<<(h_final-h_ini)<<" HORA(S) ";
            }
        } else {
            if (m_ini>m_final ) {
                cout<<"O JOGO DUROU "<<(h_final-h_ini-1)<<" HORA(S) ";
            } else {

                cout<<"O JOGO DUROU "<<(h_final-h_ini)<<" HORA(S) ";
            }
        }
        if (m_ini>m_final) {
            cout<<"E "<<(60-m_ini+m_final)<< " MINUTO(S)"<<endl;
        } else {
            cout<<"E "<<(m_final-m_ini)<< " MINUTO(S)"<<endl;
        }
    }

    return 0;
}
