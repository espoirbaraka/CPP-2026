#include <iostream>

using namespace std;

float somme(float a, float b, char signe){
 if(signe == '+'){
    return a+b;
 } else if(signe == '-'){
    return a-b;
 } else if(signe == '/'){
    return a/b;
 } else if(signe == '*'){
    return a*b;
 } else {
    return a+b;
 }
}

int main()
{
    cout << somme(11, 16, '+');
}
