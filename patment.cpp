#include "patment.h"
#include <iostream>

patment::patment() {
	add = 0;
}

//���� ���� 
void patment::setpatment(int a)
{
	add += add + a;
}


//�󸶳� �������ִ��� Ȯ�� 
void  patment::getpatment()
{
	std::cout << "���� ���� ����:" << add << std::endl;
}