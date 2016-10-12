#include <iostream>

using namespace std;


double wyswietlNajwiekszaLiczbe(double a, double b, double c, double d){
   double max=0;

    if(a>b)
        max=a;
    else
        max=b;

    if (c>max)
        max=c;
    if (d>max)
        max=d;

    return max;
}

void sortujDwieLiczby(double a, double b){
    if  (a<=b){
        cout << a << b;
    }else{
        cout << b << a;
    }
}

void przestaw(int tab[], int i){

    int rob;

    if  (tab[i]>tab[i+1]){
        rob=tab[i];
        tab[i]=tab[i+1];
        tab[i+1]=rob;
    }
}

void sortowanieBabelkowe(int t[],int x){

    for (int i = x-1; i > 0; i--){
        for (int j = 0; j < i; j++){
            przestaw(t,j);
        }
    }

}

string czyTrojkatJestProstokaty(int a , int b , int c){
    ///
/// ... text ...
///


    if  (a*a+b*b==c*c) return "Trojkat jest prostokatny";
    else return "Trojkat nie jest prostokatny";



}

// zad7
//Napisz program, który wczytuje ze standardowego wejscia cztery liczby ca³kowite i wyswietla
//na standardowym wyjsciu napis „RÓWNE” jezeli suma pierwszej i drugiej liczby jest równa
//sumie liczb trzeciej i czwartej.


int main()
{

    // << sortujDwieLiczby(3, 2);
    // cout << wyswietlNajwiekszaLiczbe(9,2,22,4);

    int tablica[] = {9,5,3,4};
    int x = sizeof(tablica)/sizeof(0);


    sortowanieBabelkowe(tablica,x);

    for (int i = 0; i < 4; i++){
            cout << tablica[i];
    }

    cout << "\n" << czyTrojkatJestProstokaty(1,2,3);

    return 0;
}


