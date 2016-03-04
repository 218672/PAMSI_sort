#include <iostream>

using namespace std;

void wpisz()
{
int licznik=0;

int c,f;


int a[5];

for(int i=0; i<5; i++)
{cin>>c;
a[i]=c;
licznik++;
}
cout<<" "<<licznik<<endl;
int g=licznik+1;
if(licznik>=5)
{int *e= new int [g];

for(int j=0; j<g; j++)
{
cin>>f;
e[j]=f;
}
}
}





int main()
{
int b;
while(b!=4)
{


cin>>b;

cout<<"menu 1: wpisz 2: skopiuj"<<endl;

switch(b)
{
case 1: wpisz(); break;
case 2: /*; */break;
case 3: break;
default: break;

}
}



    return 0;
}
