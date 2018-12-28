#pragma once
#include <math.h>  
double Sigmoid(double value)
{
	return 1.0f / (1.0f + exp(-value));
};

double Error(double left, double right)
{
	return pow((left - right),2) * 0.50 ;
};
