#include <iostream>
#include <ctime>
using namespace std;

class wys
{
      public:
void wyswietl()
{
   string imie;
   cout<<"           =================================="<<endl;
   cout<<"                   Witamy w programie        "<<endl;
   cout<<"           =================================="<<endl;
   cout<<endl<<endl;
   cout<<" Wprowadz swoje imie  ";
   cout<<endl<<endl;
   cin>> imie;
   cout<<endl;
   cout<<" *************************************************************"<<endl;
   cout<<"                         Witaj "<<imie <<" "<<endl<<endl;
   cout<<" *************************************************************"<<endl;
}};
class prost
{
      public:
int prostokat()
{  
   


int a,b;
   
cout<<"Podaj liczbe kolumn "<<endl;
cin>>a;
cout<<endl;
cout<<"Podaj liczbe wierszy "<<endl;
cin>>b;
cout<<endl<<endl;
   for (int i=1; i<=a; i++){
         for (int j=1; j<=b; j++){
               if (i==1 || i==a || j==1 || j==b){  
             cout<<""<<a; 
             
			}
			else  
            {cout<<" ";
			 } }
 
		 cout<<"\n";
         } 
}};
class suma1
{
      public:
int suma()
     {
         srand(time(NULL));
            int c,d;
            cout<<endl;
            cout<<"Losujemy liczby z przedzialu [0;20]"<<endl;
            d=(rand()%21)+0;
            cout<<endl;
            
            
            cout<<endl;
            c=(rand()%21)+0;
            
            cout<<" Wylosowane liczby to : "<<d<<" i "<<c;
            cout<<endl;
            cout<<endl;
            int suma;
            suma=c+d;
            cout<<endl;
            cout<<"Suma tych liczby wynosi : "<<suma;
            cout<<endl;
            if(suma<=20)
            {
                        cout<<endl<<endl;
                        cout<<" Idea programu zostala zrealizowana"<<endl;
                        }
                        else
                        {
                            cout<<endl<<endl;
                            cout<<" Niestety nie udalo sie , sproboj szczescia innym razem ";
                            }
                           
                            }};
            
int main()
{
    wys p;
    p.wyswietl();
    cout<<endl;
  prost*pom=new prost;
  pom-> prostokat(); 
    cout<<endl;
  suma1 k;
  k.suma();
    cin.ignore();
    getchar();
    return 0;
}
