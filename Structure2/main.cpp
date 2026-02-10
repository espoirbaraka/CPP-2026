#include <iostream>

using namespace std;

struct temps{
    double heure;
    double minute;
};

int main()
{
    temps theorique;
    temps tp;

    theorique.heure = 45.5;
    theorique.minute = 15;
    tp.heure = 15;
    tp.minute = 20;

    cout<<"TOTAL HEURE = "<<theorique.heure + tp.heure<<endl;
    cout<<"TOTAL MUNITE = "<<theorique.minute + tp.minute;
}
