#include "iostream"
#include "locale.h"

using namespace std;

int year;
int prueba = (year % 400);
int secprueba = (year % 4);
int terprueba = (year % 100);
bool fin = false;

bool bisiesto (int year);
    
int main()
{
    setlocale(LC_ALL, "spanish");
    int yer;
    int bis;
    bool quit = false;

    do
    {
        
    cout<<"\n";
    cout<<"Introduzca el año: ";
    cin>>yer;
    cout<<"\n";

    bis = bisiesto (yer);
    
    if (bis == true)
    {
        cout<<"El año que introdujo si es bisiesto";
        quit == false;
        cout<<"\n";
    }

    if (bis == false)
    {
        cout<<"El año que introdujo no es bisiesto";
        quit == false;
        cout<<"\n";
    }
    
    } while (quit == false);
    
return 0;
}

bool bisiesto (int year)
{
    
    if (year%4==0 and year%100!=0 or year%400==0)
    {
        return fin = true;
    }
  
    if (year%4!=0 and year%100==0 or year%400!=0)
    {
        return fin == false;
    }
    
}
