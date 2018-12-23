#pragma once
#include <stdint.h>
#include "RowVectors.h"

#include "ColumnVectors.h"
#include "RowVectorsTranspose.h"
#include "ColumnVectorsTranspose.h"
#include "MatricesTranspose.h"
public:

	struct M_1x1 { RV_1 M1; };
	struct M_2x1 {
		RV_1 M1;
		RV_1 M2;
	};
	struct M_3x1 {
		RV_1 M1;
		RV_1 M2;
		RV_1 M3;
	};
	struct M_4x1 {
		RV_1 M1;
		RV_1 M2;
		RV_1 M3;
		RV_1 M4;
	};
	struct M_5x1 {
		RV_1 M1;
		RV_1 M2;
		RV_1 M3;
		RV_1 M4;
		RV_1 M5;
	};
	struct M_1x2 { RV_2 M1; };
	struct M_2x2 {
		RV_2 M1;
		RV_2 M2;
	};
	struct M_3x2 {
		RV_2 M1;
		RV_2 M2;
		RV_2 M3;
	};
	struct M_4x2 {
		RV_2 M1;
		RV_2 M2;
		RV_2 M3;
		RV_2 M4;
	};
	struct M_5x2 {
		RV_2 M1;
		RV_2 M2;
		RV_2 M3;
		RV_2 M4;
		RV_2 M5;
	};
	struct M_1x3 { RV_3 M1; };
	struct M_2x3 {
		RV_3 M1;
		RV_3 M2;
	};
	struct M_3x3 {
		RV_3 M1;
		RV_3 M2;
		RV_3 M3;
	};
	struct M_4x3 {
		RV_3 M1;
		RV_3 M2;
		RV_3 M3;
		RV_3 M4;
	};
	struct M_5x3 {
		RV_3 M1;
		RV_3 M2;
		RV_3 M3;
		RV_3 M4;
		RV_3 M5;
	};
	struct M_1x4 { RV_4 M1; };
	struct M_2x4 {
		RV_4 M1;
		RV_4 M2;
	};
	struct M_3x4 {
		RV_4 M1;
		RV_4 M2;
		RV_4 M3;
	};
	struct M_4x4 {
		RV_4 M1;
		RV_4 M2;
		RV_4 M3;
		RV_4 M4;
	};
	struct M_5x4 {
		RV_4 M1;
		RV_4 M2;
		RV_4 M3;
		RV_4 M4;
		RV_4 M5;
	};
	struct M_1x5 { RV_5 M1; };
	struct M_2x5 {
		RV_5 M1;
		RV_5 M2;
	};
	struct M_3x5 {
		RV_5 M1;
		RV_5 M2;
		RV_5 M3;
	};
	struct M_4x5 {
		RV_5 M1;
		RV_5 M2;
		RV_5 M3;
		RV_5 M4;
	};
	struct M_5x5 {
		RV_5 M1;
		RV_5 M2;
		RV_5 M3;
		RV_5 M4;
		RV_5 M5;
	};