#pragma once
#include <stdint.h>
#include "Matrices.h"
#include "RowVectors.h"
#include "ColumnVectors.h"
#include "ColumnVectorsTranspose.h"
public:

	M_2x1 Multiply(RV_2 left, M_2x2 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2;
	}
	M_3x1 Multiply(RV_3 left, M_2x3 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2;
	}
	M_4x1 Multiply(RV_4 left, M_2x4 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N1 * right.M4.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N2 * right.M4.N2;
	}
	M_5x1 Multiply(RV_5 left, M_2x5 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N1 * right.M4.N1 +
			left.N1 * right.M5.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N2 * right.M4.N2 +
			left.N2 * right.M5.N2;
	}
	M_2x1 Multiply(RV_2 left, M_3x2 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3;
	}
	M_3x1 Multiply(RV_3 left, M_3x3 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3;
	}
	M_4x1 Multiply(RV_4 left, M_3x4 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N1 * right.M4.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N2 * right.M4.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3 +
			left.N3 * right.M4.N3;
	}
	M_5x1 Multiply(RV_5 left, M_3x5 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N1 * right.M4.N1 +
			left.N1 * right.M5.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N2 * right.M4.N2 +
			left.N2 * right.M5.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3 +
			left.N3 * right.M4.N3 +
			left.N3 * right.M5.N3;
	}
	M_2x1 Multiply(RV_2 left, M_4x2 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N4 * right.M1.N4 +
			left.N4 * right.M2.N4;
	}
	M_3x1 Multiply(RV_3 left, M_4x3 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3 +
			left.N4 * right.M1.N4 +
			left.N4 * right.M2.N4 +
			left.N4 * right.M3.N4;
	}
	M_4x1 Multiply(RV_4 left, M_4x4 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N1 * right.M4.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N2 * right.M4.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3 +
			left.N3 * right.M4.N3 +
			left.N4 * right.M1.N4 +
			left.N4 * right.M2.N4 +
			left.N4 * right.M3.N4 +
			left.N4 * right.M4.N4;
	}
	M_5x1 Multiply(RV_5 left, M_4x5 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N1 * right.M4.N1 +
			left.N1 * right.M5.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N2 * right.M4.N2 +
			left.N2 * right.M5.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3 +
			left.N3 * right.M4.N3 +
			left.N3 * right.M5.N3 +
			left.N4 * right.M1.N4 +
			left.N4 * right.M2.N4 +
			left.N4 * right.M3.N4 +
			left.N4 * right.M4.N4 +
			left.N4 * right.M5.N4;
	}
	M_2x1 Multiply(RV_2 left, M_5x2 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N4 * right.M1.N4 +
			left.N4 * right.M2.N4 +
			left.N5 * right.M1.N5 +
			left.N5 * right.M2.N5;
	}
	M_3x1 Multiply(RV_3 left, M_5x3 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3 +
			left.N4 * right.M1.N4 +
			left.N4 * right.M2.N4 +
			left.N4 * right.M3.N4 +
			left.N5 * right.M1.N5 +
			left.N5 * right.M2.N5 +
			left.N5 * right.M3.N5;
	}
	M_4x1 Multiply(RV_4 left, M_5x4 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N1 * right.M4.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N2 * right.M4.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3 +
			left.N3 * right.M4.N3 +
			left.N4 * right.M1.N4 +
			left.N4 * right.M2.N4 +
			left.N4 * right.M3.N4 +
			left.N4 * right.M4.N4 +
			left.N5 * right.M1.N5 +
			left.N5 * right.M2.N5 +
			left.N5 * right.M3.N5 +
			left.N5 * right.M4.N5;
	}
	M_5x1 Multiply(RV_5 left, M_5x5 right) {
		return left.N1 * right.M1.N1 +
			left.N1 * right.M2.N1 +
			left.N1 * right.M3.N1 +
			left.N1 * right.M4.N1 +
			left.N1 * right.M5.N1 +
			left.N2 * right.M1.N2 +
			left.N2 * right.M2.N2 +
			left.N2 * right.M3.N2 +
			left.N2 * right.M4.N2 +
			left.N2 * right.M5.N2 +
			left.N3 * right.M1.N3 +
			left.N3 * right.M2.N3 +
			left.N3 * right.M3.N3 +
			left.N3 * right.M4.N3 +
			left.N3 * right.M5.N3 +
			left.N4 * right.M1.N4 +
			left.N4 * right.M2.N4 +
			left.N4 * right.M3.N4 +
			left.N4 * right.M4.N4 +
			left.N4 * right.M5.N4 +
			left.N5 * right.M1.N5 +
			left.N5 * right.M2.N5 +
			left.N5 * right.M3.N5 +
			left.N5 * right.M4.N5 +
			left.N5 * right.M5.N5;
	}