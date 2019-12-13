#include <iostream>
using namespace std;

int main()
{
    float C,F,K,R;
    cout<<"\t=== PROGRAM KONVERSI SUHU ==="<<endl;
    cout<<"\t      Dwiki Rama"<<endl<<endl;
    cout<<"Masukkan Suhu (Celcius) : ";
    cin>>C;
    cout<<endl;
    cout<<"Hasil Konversi";
    F=C*1.8+32;
    K=C+273;
    R=C*0.8;
    cout<<endl;
    cout<<"Kelvin     : "<<K<<endl<<"Fahrenheit : "<<F<<endl<<"Reamur     : "<<R;
    return 0;
} 
