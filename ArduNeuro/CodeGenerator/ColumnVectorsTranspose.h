#pragma once
#include <stdint.h>
#include "RowVectors.h"
#include "ColumnVectors.h"
public:


RV_1 Transpose(CV_1 value) {return value.M1};
RV_2 Transpose(CV_2 value) {return value.M1,
value.M2};
RV_3 Transpose(CV_3 value) {return value.M1,
value.M2,
value.M3};
RV_4 Transpose(CV_4 value) {return value.M1,
value.M2,
value.M3,
value.M4};
RV_5 Transpose(CV_5 value) {return value.M1,
value.M2,
value.M3,
value.M4,
value.M5};