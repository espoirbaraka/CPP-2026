#include <iostream>

using namespace std;

struct personne{
    string nom;
    int age;
};

int main()
{
    personne john;
    john.nom = "JOHN";
    john.age = 22;

    cout<<john.nom;


}
