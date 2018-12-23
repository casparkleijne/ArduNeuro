#pragma once
#include <stdint.h>
#include "Matrices.h"
#include "RowVectors.h"
#include "ColumnVectors.h"
#include "ColumnVectorsTranspose.h"
public:

M_1x2 Multiply(M_2x2 left,CV_2 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2};}
M_1x2 Multiply(M_2x3 left,CV_3 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2};}
M_1x2 Multiply(M_2x4 left,CV_4 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N1 * left.M4.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N2 * left.M4.N2};}
M_1x2 Multiply(M_2x5 left,CV_5 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N1 * left.M4.N1+
right.N1 * left.M5.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N2 * left.M4.N2+
right.N2 * left.M5.N2};}
M_1x3 Multiply(M_3x2 left,CV_2 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3};}
M_1x3 Multiply(M_3x3 left,CV_3 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3};}
M_1x3 Multiply(M_3x4 left,CV_4 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N1 * left.M4.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N2 * left.M4.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3+
right.N3 * left.M4.N3};}
M_1x3 Multiply(M_3x5 left,CV_5 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N1 * left.M4.N1+
right.N1 * left.M5.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N2 * left.M4.N2+
right.N2 * left.M5.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3+
right.N3 * left.M4.N3+
right.N3 * left.M5.N3};}
M_1x4 Multiply(M_4x2 left,CV_2 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N4 * left.M1.N4+
right.N4 * left.M2.N4};}
M_1x4 Multiply(M_4x3 left,CV_3 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3+
right.N4 * left.M1.N4+
right.N4 * left.M2.N4+
right.N4 * left.M3.N4};}
M_1x4 Multiply(M_4x4 left,CV_4 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N1 * left.M4.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N2 * left.M4.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3+
right.N3 * left.M4.N3+
right.N4 * left.M1.N4+
right.N4 * left.M2.N4+
right.N4 * left.M3.N4+
right.N4 * left.M4.N4};}
M_1x4 Multiply(M_4x5 left,CV_5 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N1 * left.M4.N1+
right.N1 * left.M5.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N2 * left.M4.N2+
right.N2 * left.M5.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3+
right.N3 * left.M4.N3+
right.N3 * left.M5.N3+
right.N4 * left.M1.N4+
right.N4 * left.M2.N4+
right.N4 * left.M3.N4+
right.N4 * left.M4.N4+
right.N4 * left.M5.N4};}
M_1x5 Multiply(M_5x2 left,CV_2 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N4 * left.M1.N4+
right.N4 * left.M2.N4+
right.N5 * left.M1.N5+
right.N5 * left.M2.N5};}
M_1x5 Multiply(M_5x3 left,CV_3 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3+
right.N4 * left.M1.N4+
right.N4 * left.M2.N4+
right.N4 * left.M3.N4+
right.N5 * left.M1.N5+
right.N5 * left.M2.N5+
right.N5 * left.M3.N5};}
M_1x5 Multiply(M_5x4 left,CV_4 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N1 * left.M4.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N2 * left.M4.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3+
right.N3 * left.M4.N3+
right.N4 * left.M1.N4+
right.N4 * left.M2.N4+
right.N4 * left.M3.N4+
right.N4 * left.M4.N4+
right.N5 * left.M1.N5+
right.N5 * left.M2.N5+
right.N5 * left.M3.N5+
right.N5 * left.M4.N5};}
M_1x5 Multiply(M_5x5 left,CV_5 right){return {right.N1 * left.M1.N1+
right.N1 * left.M2.N1+
right.N1 * left.M3.N1+
right.N1 * left.M4.N1+
right.N1 * left.M5.N1+
right.N2 * left.M1.N2+
right.N2 * left.M2.N2+
right.N2 * left.M3.N2+
right.N2 * left.M4.N2+
right.N2 * left.M5.N2+
right.N3 * left.M1.N3+
right.N3 * left.M2.N3+
right.N3 * left.M3.N3+
right.N3 * left.M4.N3+
right.N3 * left.M5.N3+
right.N4 * left.M1.N4+
right.N4 * left.M2.N4+
right.N4 * left.M3.N4+
right.N4 * left.M4.N4+
right.N4 * left.M5.N4+
right.N5 * left.M1.N5+
right.N5 * left.M2.N5+
right.N5 * left.M3.N5+
right.N5 * left.M4.N5+
right.N5 * left.M5.N5};}