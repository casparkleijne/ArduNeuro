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