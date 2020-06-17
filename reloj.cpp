#include "iostream"

using namespace std;

int main()
{
    
    bool fin = false;
    
    do
    {
        
    int hour, min, seg;

    cout<<"\n";
    cout<<"\n";
    cout<<"Introduzca horas (en formato de 24h): ";
    scanf ("%d", & hour) ;
    cout<<"\n";

    cout<<"Introduzca minutos: ";
    scanf ("%d", & min) ;
    cout<<"\n";

    cout<<"Introduzca segundos: ";
    scanf ("%d", & seg) ;
    cout<<"\n";

    if ( hour >= 0 && hour <= 23 && min >= 0 && min <= 59 && seg >= 0 && seg <= 59 )
    {
        seg++;
        if ( seg == 60 )
        {
            seg = 0;
            min++;
        if ( min == 60 )
        {
            min = 0;
            hour++;
        if ( hour == 24 )
            hour = 0;
        }
        }
    
        printf( "La hora es: %d:%d:%d", hour, min, seg );
        fin == false;
    }
    
    else
    {
        cout<<"La hora es incorrecta.";
        fin == false;
    }
    } while (fin == false);
    

return 0;
}


