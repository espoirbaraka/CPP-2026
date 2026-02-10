#include <iostream>

using namespace std;

int main()
{
    int nombre[3][3];
    int saisi;
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
        cout<<"Saisi un nombre"<<endl;
        cin>>saisi;
        if (saisi >= -12 && saisi <= 100){
        nombre[i][j]=saisi;
        } else if(saisi == 200){
        cout<<"Saisi incorrecte";
        nombre[i][j]=7;
        } else{
        nombre[i][j]=0;
        }
        }
    }


    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
        cout<<nombre[i][j]<<endl;
        }
    }
}
