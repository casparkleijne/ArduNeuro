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
	return 1.0f / (1.0f + exp(-value));
};

double DerivativeSigmoid(double value)
{
	return Sigmoid(value) * (1 - Sigmoid(value));
};

double Derivative(double value)
{
	return value * (1 - value);
};

double Error(double left, double right)
{
	return pow((left - right),2) * 0.50 ;
};

double ErrorChange(double left, double right)
{
	return -(left - right);
};

double Divide(double left, double right)
{
	return (left / right);
};
