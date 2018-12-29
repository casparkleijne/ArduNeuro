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
// Multiplies two equal sized rowvectors that have [6] columns to a double 
 double Multiply(RV_6 left,CV_6 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6;};
// Multiplies two equal sized rowvectors that have [7] columns to a double 
 double Multiply(RV_7 left,CV_7 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7;};
// Multiplies two equal sized rowvectors that have [8] columns to a double 
 double Multiply(RV_8 left,CV_8 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7 + left.N8 * right.M8;};
// Multiplies two equal sized rowvectors that have [9] columns to a double 
 double Multiply(RV_9 left,CV_9 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7 + left.N8 * right.M8 + left.N9 * right.M9;};

// Multiplies two equal sized rowvectors that have [2] columns to a double 
 double MultiplyScalar(RV_2 left,CV_2 right) {return left.N1 * right.M1 + left.N2 * right.M2;};
// Multiplies two equal sized rowvectors that have [3] columns to a double 
 double MultiplyScalar(RV_3 left,CV_3 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3;};
// Multiplies two equal sized rowvectors that have [4] columns to a double 
 double MultiplyScalar(RV_4 left,CV_4 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4;};
// Multiplies two equal sized rowvectors that have [5] columns to a double 
 double MultiplyScalar(RV_5 left,CV_5 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5;};
// Multiplies two equal sized rowvectors that have [6] columns to a double 
 double MultiplyScalar(RV_6 left,CV_6 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6;};
// Multiplies two equal sized rowvectors that have [7] columns to a double 
 double MultiplyScalar(RV_7 left,CV_7 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7;};
// Multiplies two equal sized rowvectors that have [8] columns to a double 
 double MultiplyScalar(RV_8 left,CV_8 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7 + left.N8 * right.M8;};
// Multiplies two equal sized rowvectors that have [9] columns to a double 
 double MultiplyScalar(RV_9 left,CV_9 right) {return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7 + left.N8 * right.M8 + left.N9 * right.M9;};