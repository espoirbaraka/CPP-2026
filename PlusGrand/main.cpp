#include <iostream>

using namespace std;

int main()
{
    int note1, note2, note3;
    cout << "Saisi la premiere note" << endl;
    cin>>note1;
    cout << "Saisi la deuxieme note" << endl;
    cin>>note2;
    cout << "Saisi la troisieme note" << endl;
    cin>>note3;
    if(note3 > note2 && note3>note1){
        cout<<"La plus grande note est "<<note3;
    }else if(note1 > note2 && note1>note3){
        cout<<"La plus grande note est "<<note1;
    }else if(note2 > note3 && note2>note1){
        cout<<"La plus grande note est "<<note2;
    }
    return 0;
}
