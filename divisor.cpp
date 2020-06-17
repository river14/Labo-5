#include "iostream"

using namespace std;

int mcd (int a, int b);

int main ()
{
    int num1, num2;
    int divisor;
    bool fin = false;
    
    do
    {
        cout<<"\n";
        cout<<"INTRODUZCA PRIMER NUMERO: ";
        cin>>num1;
        cout<<"\n";
        
        cout<<"INTRODUZCA SEGUNDO NUMERO: ";
        cin>>num2;
        cout<< "\n";
        
        divisor = mcd (num1, num2);
        cout<<"EL MCD DE SUS DOS NUMEROS ES: " << divisor;
        cout<<"\n";
        fin == false;
    } 
    while (fin == false);
    
return 0;
}

int mcd (int a, int b)
{
    if (b == 0) 
    {
    return a;
    }
    return mcd (b, a % b);
}