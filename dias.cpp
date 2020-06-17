#include "iostream"

using namespace std;

int main ()
{
    bool fin = false;
    int dia, mes, yer, nextday, nextmonth, nextyear;
    
    do
    {
    cout<<"\n";
    cout<<"Ingrese el año: ";
    cin>>yer;
    cout<<"\n";

    cout<<"Ingrese el dia: ";
    cin>>dia;
    cout<<"\n";

    cout<<"Ingrese el mes: ";
    cin>>mes;
    cout<<"\n";
    cout<<"\n";

    if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11 )) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((yer % 4 != 0) || (yer % 100) == 0) && (yer % 400) != 0) || dia == 31)
        {
            nextmonth = mes + 1;
            nextday = 1;
            cout<<"El dia siguiente es: " << yer << "/" <<nextday << "/" <<nextmonth;
            fin == false;
        }
    else
        {
            nextday = dia + 1;
            nextmonth = mes;
            cout<<"El dia siguiente es: " << yer << "/" <<nextday << "/" <<nextmonth;
            fin == false;
        }

    if (nextday == 1 && nextmonth == 13)
        {
            nextmonth = 1;
            nextyear = yer + 1;
            cout<<"El dia siguiente es: " << nextyear << "/" <<nextday << "/" <<nextmonth;
            fin == false;
        }
    else
        {    
            nextyear = yer;
            cout<<"El dia siguiente es: " << yer << "/" <<nextday << "/" <<nextmonth;
            fin == false;
        }

    } while (fin == false);
    

return 0;
}
