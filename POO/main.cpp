#include <iostream>

using namespace std;

class Personne{
public:
    string nom;
    string postnom;
    string prenom;
    int age;
    char sexe;

    Personne(){
        this->age=30;
    }

    Personne(string n, string p){
        nom=n;
        postnom=p;
    }

    void marcher(){
        cout<<nom + " marche"<<endl;
        cout<<"===============";
    }

    void scanner(int fois=4){
        cout<<nom + " doit scanner la presence "<<fois<<" fois avant d'entrer. Et c'est une personne";
    }

    //ENCAPSULATION DU GROUPE SANGUIN DANS LE PUBLIC
    string getGroupesanguin(){
        return groupeSanguin;
    }
    void setGroupesanguin(string groupe){
        groupeSanguin = groupe;
    }
private:
    string groupeSanguin;
protected:
    float taille;
};


class Etudiant: public Personne{
public:
    string filiere;
    string promotion;
    void inscription(){
        cout<<"Je fais mon inscription";
    }

    void scanner(){
        cout<<"Un etudiant scanne avec la carte";
    }

};

int main()
{
    Personne jean;
    Etudiant erick;
    erick.nom="ERICK";
    Personne faustin("FAUSTIN", "KING");

    Personne francois;
    francois.nom = "FRANCOIS";
    francois.scanner();






    /* jean.nom = "JEAN";
    jean.postnom = "ERIC";
    jean.prenom = "JOHN";
    jean.age = 28;
    jean.sexe = 'M';
    jean.setGroupesanguin("A+");


    cout<<jean.nom<<endl;
    cout<<faustin.nom<<endl;
    jean.marcher();
    */
}
