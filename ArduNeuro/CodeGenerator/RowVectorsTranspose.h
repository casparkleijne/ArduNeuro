﻿#pragma once
#include <stdint.h>
#include "RowVectors.h"
#include "ColumnVectors.h"
public:


	CV_1 Transpose(RV_1 value) { return value.N1 };
	CV_2 Transpose(RV_2 value) {
		return value.N1,
			value.N2
	};
	CV_3 Transpose(RV_3 value) {
		return value.N1,
			value.N2,
			value.N3
	};
	CV_4 Transpose(RV_4 value) {
		return value.N1,
			value.N2,
			value.N3,
			value.N4
	};
	CV_5 Transpose(RV_5 value) {
		return value.N1,
			value.N2,
			value.N3,
			value.N4,
			value.N5
	};