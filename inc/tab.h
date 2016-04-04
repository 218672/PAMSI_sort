/*
 * tab.h
 *
 *  Created on: 30 mar 2016
 *      Author: pj
 */


#ifndef TAB_H_
#define TAB_H_
#include <iostream>
class tab {
private:
	int rozmiar;
public:
	int *tab1;
	int *tab2;
	tab();
	~tab();
	void wypelnijtab();
	//void wypisz();
};

#endif /* TAB_H_ */



