#include "patment.h"
#include <iostream>

patment::patment() {
	add = 0;
}

//매출 축적 
void patment::setpatment(int a)
{
	add += add + a;
}


//얼마나 매출이있는지 확인 
void  patment::getpatment()
{
	std::cout << "현재 누적 매출:" << add << std::endl;
}