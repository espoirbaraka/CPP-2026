#include <iostream>

using namespace std;

int main()
{
    int taille, x, y, z, temp;
    cout<<"Saisi la taille"<<endl;
    cin>>taille;
    int tab[taille];
    for(x=0; x<taille; x++){
        cout<<"Saisi un nombre a l'indice "<<x<<endl;
        cin>>tab[x];
    }

    for(y=0; y<taille-1; y++){
        for(z=y+1; z<taille; z++){
            if(tab[y]>tab[z]){
            temp = tab[z];
            tab[z] = tab[y];
            tab[y] = temp;
            }
        }
    }

    for(y=0; y<taille; y++){
        cout<<tab[y]<<endl;
    }

}
