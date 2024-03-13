#include<iostream>
#include<list>

using namespace std;

int main(){
    list <string> lista={"NTP","Jupi"};
    list <string>::iterator it;
    string S;
    string slovo;
    for (it=lista.begin(); it!=lista.end(); it++){ //najprije iteriramo kroz svaku rijec u listi
        S = *it;
        for(int i= 0; i < S.length(); ++i){ //iteriramo kroz svako slovo rijeci i ubacujemo ga u listu koristeci insert (pogledajte na slideovima sa vježbi kako je definirana funkcija insert za listu)
            slovo = S.substr(i,1); //izdvajamo svako slovo - ovo je jedan od načina kako se to može napraviti
            lista.insert(it, slovo); 
        }
    }
            //ispis
            for(it=lista.begin(); it!=lista.end(); it++)
                cout<<*it << " ";
            cout<<endl;
    return 0;


}