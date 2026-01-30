#include <iostream>

using namespace std;

int main()
{
    float longeur;
    float largeur;
    cout << "Saisi la longeur" << endl;
    cin>>longeur;
    cout << "Saisi la largeur" << endl;
    cin>>largeur;
    cout<<"P="<<(longeur+largeur)*2<<" et S="<<longeur*largeur;
    return 0;
}
