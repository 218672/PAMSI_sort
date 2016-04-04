#include "tab.h"

using namespace std;
tab::tab() {
cout << "Podaj jakiego rozmiaru ma byc tablica:";
cin >> rozmiar;
}

tab::~tab() {
	delete [] tab1;
	delete [] tab2;
}

void tab::wypelnijtab(){
	int j=0;
	int x=10;
	tab1=new int[x];
	tab2=new int[x+1];

	for(j = 0; j < x; j++){
		tab1[j] = j;
	}

	for(int i = 10; i < rozmiar; i++){ //glowna petla
		if(i > 10)
			{
			delete []tab1;
			tab1=new int[x];
			for(j = 0; j < x; j++)
				{
				tab1[j]=tab2[j];
				}
			delete []tab2;
			tab2=new int[x+1];
			}
		for(j = 0; j < x; j++)
			{
			tab2[j]=tab1[j];
			if(j == x-1)
				{ // ostatnie wejscie do petli
				tab2[j+1]=j+1;
				}
		    }
		x++;
	}
}
/*
void tab::wypisz()
{
	int x = rozmiar;
	for(int j = 0; j < x; j++){
if(rozmiar==10){cout<<tab1[j]<<" ";}
else{
		cout << tab2[j] << " ";
		}

	} cout << endl;
}
*/
