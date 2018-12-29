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
// Transposes a rowvector that has [6] columns to a columnvector 
 CV_6 Transpose(RV_6 value) {return {value.N1,value.N2,value.N3,value.N4,value.N5,value.N6};};
// Transposes a rowvector that has [7] columns to a columnvector 
 CV_7 Transpose(RV_7 value) {return {value.N1,value.N2,value.N3,value.N4,value.N5,value.N6,value.N7};};
// Transposes a rowvector that has [8] columns to a columnvector 
 CV_8 Transpose(RV_8 value) {return {value.N1,value.N2,value.N3,value.N4,value.N5,value.N6,value.N7,value.N8};};
// Transposes a rowvector that has [9] columns to a columnvector 
 CV_9 Transpose(RV_9 value) {return {value.N1,value.N2,value.N3,value.N4,value.N5,value.N6,value.N7,value.N8,value.N9};};