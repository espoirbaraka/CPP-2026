#include <iostream>

using namespace std;

void f1(){
    cout<<"Bonjour"<<endl;
}

void f2(int fois){
for(int i=0; i<fois; i++){
cout<<"Bonjour"<<endl;
}
}

int f3(int fois){
for(int i=0; i<fois; i++){
//cout<<"Bonjour"<<endl;
return 0;
}
}

int main()
{
    cout<<f3(5);
}
