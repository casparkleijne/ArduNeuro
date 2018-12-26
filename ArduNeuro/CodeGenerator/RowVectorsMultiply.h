#pragma once
#include <stdint.h>
#include "RowVectors.h"
// Multiplies two equal sized rowvectors that have [2] columns to a double 
 double Multiply(RV_2 left,CV_2 right) {return left.N1 * right.M1 + left.N2 * right.M2;};
// Multiplies two equal sized rowvectors that have [3] columns to a double 
 double Multiply(RV_3 left,CV_3 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3;};
// Multiplies two equal sized rowvectors that have [4] columns to a double 
 double Multiply(RV_4 left,CV_4 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4;};
// Multiplies two equal sized rowvectors that have [5] columns to a double 
 double Multiply(RV_5 left,CV_5 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5;};