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
	cout << "�Ŷ�� ����:" << cublamen << endl;
	cout << "�ֹ� ����:" << hotba << endl;
	cout << "�ﰢ��� ����:" << rimbob << endl;
	cout << "================================" << endl;


	
}