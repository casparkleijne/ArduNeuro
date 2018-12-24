#pragma once
#include <stdint.h>
#include "Matrices.h"
public:

M_2x1 Multiply(RV_2 left, M_2x2 right){return left.N1 * right.M1.N1+
left.N1 * right.M2.N1+
left.N2 * right.M1.N2+
left.N2 * right.M2.N2;}
M_3x1 Multiply(RV_3 left, M_2x3 right){return left.N1 * right.M1.N1+
left.N1 * right.M2.N1+
left.N1 * right.M3.N1+
left.N2 * right.M1.N2+
left.N2 * right.M2.N2+
left.N2 * right.M3.N2;}
M_2x1 Multiply(RV_2 left, M_3x2 right){return left.N1 * right.M1.N1+
left.N1 * right.M2.N1+
left.N2 * right.M1.N2+
left.N2 * right.M2.N2+
left.N3 * right.M1.N3+
left.N3 * right.M2.N3;}
M_3x1 Multiply(RV_3 left, M_3x3 right){return left.N1 * right.M1.N1+
left.N1 * right.M2.N1+
left.N1 * right.M3.N1+
left.N2 * right.M1.N2+
left.N2 * right.M2.N2+
left.N2 * right.M3.N2+
left.N3 * right.M1.N3+
left.N3 * right.M2.N3+
left.N3 * right.M3.N3;}