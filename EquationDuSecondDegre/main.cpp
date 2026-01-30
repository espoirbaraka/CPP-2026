#include <iostream>
#include <cmath>

using namespace std;

void equation(int a, int b, int c){
    float delta;
    delta = (b*b)-4*a*c;
    if(delta<0){
        cout<<"Pas de solution reelle";
    }else if(delta==0){
        cout<<"x0="<<-b/2*a;
    }else{
        cout<<"x1="<<(-b-sqrt(delta))/2*a<<" et x2="<<(-b+sqrt(delta))/2*a;
    }
}

int main()
{
    equation(1,2,1);
    return 0;
}
