/*
 * Tab2.cpp
 *
 *  Created on: 12 mar 2016
 *      Author: pawel
 */

#include "Tab2.h"
#include <iostream>
using namespace std;


Tab_2::Tab_2() {
cout << "Podaj jakiego rozmiaru ma byc tablica:";
cin >> rozmiar;

}

Tab_2::~Tab_2() {
	delete [] tab1;
	delete [] tab2;
}

void Tab_2::wypelnijtab(){
	int j=0;
	int x=10;
	tab1=new int[x];
	tab2=new int[x+90];

	for(j = 0; j < x; j++){
		tab1[j] = j;
	}

	for(int i = 0; i <rozmiar; i=i+100){ //glowna petla
		if(i > 0)
			{
			delete []tab1;
			tab1=new int[x];
			for(j = 0; j < x; j++)
				{
				tab1[j]=tab2[j];
				}
			delete []tab2;
			tab2=new int[x+100];
			}
			for(j = 0; j < x; ++j)
					{
					tab2[j]=tab1[j];
					}
				if(x==10)
					{x=100;}
						else
							{x=x+100;}
			for(int k=j;k<x;++k)
					{
					tab2[k]=k;
					}
   }//for głowna
}//void
/*
void Tab_2::wypisz()
{
	int x = rozmiar;
	for(int j = 0; j < x; j++){

		{
		cout << tab2[j] << " ";
		}

	} cout << endl;
}

*/
