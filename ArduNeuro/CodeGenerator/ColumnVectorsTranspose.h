#pragma once
#include <stdint.h>
#include "RowVectors.h"
#include "ColumnVectors.h"
// Transposes a columnvector that has [2] row to a rowvector 
 RV_2 Transpose(CV_2 value) {return {value.M1,value.M2};};
// Transposes a columnvector that has [3] row to a rowvector 
 RV_3 Transpose(CV_3 value) {return {value.M1,value.M2,value.M3};};
// Transposes a columnvector that has [4] row to a rowvector 
 RV_4 Transpose(CV_4 value) {return {value.M1,value.M2,value.M3,value.M4};};
// Transposes a columnvector that has [5] row to a rowvector 
 RV_5 Transpose(CV_5 value) {return {value.M1,value.M2,value.M3,value.M4,value.M5};};