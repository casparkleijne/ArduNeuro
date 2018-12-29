#pragma once
#include <math.h>  
#include "CodeGenerator\Matrices.h"
#include "CodeGenerator\ColumnVectors.h"
#include "CodeGenerator\ColumnVectorsTranspose.h"
#include "CodeGenerator\RowVectorsTranspose.h"
#include "CodeGenerator\RowVectorsMultiply.h"
#include "CodeGenerator\RowVectorsApplyScalar.h"
#include "CodeGenerator\MatricesTranspose.h"
#include "CodeGenerator\MatricesMultiply.h"

double Sigmoid(double value)
{
	return 1.00000000 / (1.00000000 + exp(-value));
};

double Derivative(double value)
{
	return value * (1.00000000 - value);
};

double Error(double left, double right)
{
	return pow((left - right),2) / 2.00000000 ;
};

double ErrorChange(double left, double right)
{
	return -(left - right);
};

double Divide(double left, double right)
{
	return (left / right);
};

double Multiply(double left, double right)
{
	return left * right;
};

double Substract(double left, double right)
{
	return (left - right);
};

double Randomize(double value)
{
	return (double)rand() / (double)RAND_MAX;
};
