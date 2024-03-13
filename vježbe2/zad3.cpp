#include<iostream>  
#include<list>

using namespace std;

void pomnozi (list <double> L, double mulitplikator){
    for (list<double>::iterator it=L.begin(); it!=L.end(); it++)
        *it*=mulitplikator;
}

//zadatak za V2

void zbroji (list <double> L, double pribrojnik){
    for (list<double>::iterator it=L.begin(); it!=L.end(); it++)
        *it+=pribrojnik;
}

int main(){
    /* ...*/
    return 0;
}