#include "job.h"

#include <iostream>

// �̷� ����̸� ��ü
int  job::calculate_a(int cal) {
	mul = 0;
	mul = goods::cublamen1 - cal;
	return mul; 
}


int  job::calculate_b(int cal) {
	mul = 0;
	mul = goods::hotba1 - cal;
	return mul;
}
int  job::calculate_c(int cal) {
	mul = 0;
	mul = goods::rimbob1 - cal;
	return mul;
}