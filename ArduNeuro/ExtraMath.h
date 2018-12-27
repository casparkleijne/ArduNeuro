#pragma once
#include <math.h>  
double Sigmoid(double value)
{
	return 1 / (1 + exp(-value));
};
