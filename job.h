#pragma
#include "patment.h"
#include "imt.h"
#include "goods.h"

#include <iostream>

class job : public patment, public imt, public goods
{
public:
	int mul = 0;

	int calculate_a(int cal);
	int calculate_b(int cal);
	int calculate_c(int cal);
	
};