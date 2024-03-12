# Zadatak
---
Napišite program koji sadrži:  
Strukturu pravokutnik koja se sastoji od dvije stranice (int)
Funkciju povecaj_za(P,x) koja poveća obje stranice pravokutnika za x
Funkciju smanji_za(P,x) koja smanji obje stranice pravokutnika za x
Funkciju ispisi(P) koja ispiše vrijednosti stranica pravokutnika
Program treba sadržavati slijedeću main funkciju:


```
int main()  

{  

    pravokutnik P={2,4}; //kreira pravokutnik sa stranicama 2 i 4
    cout<<povrsina(P)<<endl; //vraca povrsinu pravokutnika
    povecaj_za(P,3); //povecava stranice pravokutnika za 3
    smanji_za(P,2); //smanjuje stranice pravokutnika za 2
    ispisi(P);  //ispisuje sve podatke o pravokutniku
    return 0;
}

