#include <iostream>
#include <list>

using namespace std;

bool IsSorted(list<char>& L){
    list<char>::iterator it = L.begin();
    char prethodni = *it;
    it++;
    while (it != L.end()) {
        if (prethodni > *it) //za zadatak za grupu V2 trebalo je koristiti < umjesto >
            return false;
        prethodni = *it;
    }
    return true;

}

int main(){ 
    list <char> L;
    L.push_back('b');
    L.push_back('a');
    L.push_back('c');
    L.push_back('d');
    L.push_back('e');
    L.push_back('f');
    L.push_back('g');
   
    cout << IsSorted(L) << endl;
    return 0;
}