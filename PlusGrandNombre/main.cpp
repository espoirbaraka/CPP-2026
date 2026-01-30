#include <iostream>

using namespace std;


int plusGrand(int nbre1, int nbre2) {
    if(nbre1>nbre2){
    return nbre1;
    }
    else if(nbre2>nbre1){
    return nbre2;
    }
}



int main()
{
    int a,b;
    cout<<"Saisi le premier nombre"<<endl;
    cin>>a;
    cout<<"Saisi le deuxieme nombre"<<endl;
    cin>>b;
    cout<<plusGrand(a,b)<<endl;
    return 0;
}
