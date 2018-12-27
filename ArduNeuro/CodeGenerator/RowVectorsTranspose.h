#pragma once
#include <stdint.h>
#include "RowVectors.h"
#include "ColumnVectors.h"
// Transposes a rowvector that has [2] columns to a columnvector 
 CV_2 Transpose(RV_2 value) {return {value.N1,value.N2};};
// Transposes a rowvector that has [3] columns to a columnvector 
 CV_3 Transpose(RV_3 value) {return {value.N1,value.N2,value.N3};};
// Transposes a rowvector that has [4] columns to a columnvector 
 CV_4 Transpose(RV_4 value) {return {value.N1,value.N2,value.N3,value.N4};};
// Transposes a rowvector that has [5] columns to a columnvector 
 CV_5 Transpose(RV_5 value) {return {value.N1,value.N2,value.N3,value.N4,value.N5};};