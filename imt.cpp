#include "imt.h"
#include <iostream>
using namespace std;
imt::imt()
{
	cublamen = 5;
	hotba = 5;
	rimbob = 5;
}

void imt::setCublamen()
{
	cublamen--;
}

void imt::sethotba()
{
	hotba--;
}

void imt::setrimbob() {
	rimbob--;
}

void imt::getimt() {
	
	cout << "================================"<<endl;
	cout << "ÄÅ¶ó¸é ¼ö·®:" << cublamen << endl;
	cout << "ÇÖ¹Ù ¼ö·®:" << hotba << endl;
	cout << "»ï°¢±è¹ä ¼ö·®:" << rimbob << endl;
	cout << "================================" << endl;


	
}