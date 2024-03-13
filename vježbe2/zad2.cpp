#include<iostream>
#include<list>

using namespace std;

list <int> lista;

int main(){
    int unos;
    do {
        cout<<"Unesite broj: ";
        cin>>unos;
        lista.push_back(unos);  //za zadatak za grupu V2 trebalo je koristiti push_front
    } while (unos!=0);
    //ispisuje sve unesene brojeve u listu
    for (list<int>::iterator it=lista.begin(); it!=lista.end(); it++)
        cout<<*it<<endl;
    
    return 0;
}
