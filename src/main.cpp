/*
 * main.cpp
 *
 *  Created on: 30 mar 2016
 *      Author: pj
 */


#include "tab.h"
#include <time.h>
#include <iostream>

using namespace std;

int main(){
tab tablica;

double czas1 = clock();
tablica.wypelnijtab();
double czas2 = clock();

//tablica.wypisz();

cout<<endl;

cout<<"czas: "<<czas2-czas1<<" [10^-6 s]"<<endl;;

	return 0;
}
