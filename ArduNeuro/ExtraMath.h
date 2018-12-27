#pragma once
#include <math.h>  
double Sigmoid(double value)
{
	return 1.0f / (1.0f + exp(-value));
};

double Bias(double value)
{
	return value + 0.35f;
};
