#include<iostream>
#include<list>

using namespace std;

list <string> lista;

int main()
{
    string unos;
    do {
        cout<<"Unesite rijec: ";
        cin>>unos;
        lista.push_back(unos);
    } while (unos!="kraj");
    //ispisuje sve unesene rijeci u listu
    for (list<string>::iterator it=lista.begin(); it!=lista.end(); it++)
        cout<<*it<<endl;
    
    return 0;
}