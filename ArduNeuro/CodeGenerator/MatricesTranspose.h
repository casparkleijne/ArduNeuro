﻿#pragma once
#include <stdint.h>
#include "Matrices.h"
// Transposes a matrix that is [2] rows by [2] columns to a matrix that has [2] rows by [2] columns  
 M_2x2 Transpose(M_2x2  value) {return {value.M1.N2,value.M2.N2};};
// Transposes a matrix that is [3] rows by [2] columns to a matrix that has [2] rows by [3] columns  
 M_2x3 Transpose(M_3x2  value) {return {value.M1.N2,value.M2.N2,value.M3.N2};};
// Transposes a matrix that is [4] rows by [2] columns to a matrix that has [2] rows by [4] columns  
 M_2x4 Transpose(M_4x2  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M4.N2};};
// Transposes a matrix that is [5] rows by [2] columns to a matrix that has [2] rows by [5] columns  
 M_2x5 Transpose(M_5x2  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M4.N2,value.M5.N2};};
// Transposes a matrix that is [2] rows by [3] columns to a matrix that has [3] rows by [2] columns  
 M_3x2 Transpose(M_2x3  value) {return {value.M1.N2,value.M2.N2,value.M1.N3,value.M2.N3};};
// Transposes a matrix that is [3] rows by [3] columns to a matrix that has [3] rows by [3] columns  
 M_3x3 Transpose(M_3x3  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M1.N3,value.M2.N3,value.M3.N3};};
// Transposes a matrix that is [4] rows by [3] columns to a matrix that has [3] rows by [4] columns  
 M_3x4 Transpose(M_4x3  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M4.N2,value.M1.N3,value.M2.N3,value.M3.N3,value.M4.N3};};
// Transposes a matrix that is [5] rows by [3] columns to a matrix that has [3] rows by [5] columns  
 M_3x5 Transpose(M_5x3  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M4.N2,value.M5.N2,value.M1.N3,value.M2.N3,value.M3.N3,value.M4.N3,value.M5.N3};};
// Transposes a matrix that is [2] rows by [4] columns to a matrix that has [4] rows by [2] columns  
 M_4x2 Transpose(M_2x4  value) {return {value.M1.N2,value.M2.N2,value.M1.N3,value.M2.N3,value.M1.N4,value.M2.N4};};
// Transposes a matrix that is [3] rows by [4] columns to a matrix that has [4] rows by [3] columns  
 M_4x3 Transpose(M_3x4  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M1.N3,value.M2.N3,value.M3.N3,value.M1.N4,value.M2.N4,value.M3.N4};};
// Transposes a matrix that is [4] rows by [4] columns to a matrix that has [4] rows by [4] columns  
 M_4x4 Transpose(M_4x4  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M4.N2,value.M1.N3,value.M2.N3,value.M3.N3,value.M4.N3,value.M1.N4,value.M2.N4,value.M3.N4,value.M4.N4};};
// Transposes a matrix that is [5] rows by [4] columns to a matrix that has [4] rows by [5] columns  
 M_4x5 Transpose(M_5x4  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M4.N2,value.M5.N2,value.M1.N3,value.M2.N3,value.M3.N3,value.M4.N3,value.M5.N3,value.M1.N4,value.M2.N4,value.M3.N4,value.M4.N4,value.M5.N4};};
// Transposes a matrix that is [2] rows by [5] columns to a matrix that has [5] rows by [2] columns  
 M_5x2 Transpose(M_2x5  value) {return {value.M1.N2,value.M2.N2,value.M1.N3,value.M2.N3,value.M1.N4,value.M2.N4,value.M1.N5,value.M2.N5};};
// Transposes a matrix that is [3] rows by [5] columns to a matrix that has [5] rows by [3] columns  
 M_5x3 Transpose(M_3x5  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M1.N3,value.M2.N3,value.M3.N3,value.M1.N4,value.M2.N4,value.M3.N4,value.M1.N5,value.M2.N5,value.M3.N5};};
// Transposes a matrix that is [4] rows by [5] columns to a matrix that has [5] rows by [4] columns  
 M_5x4 Transpose(M_4x5  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M4.N2,value.M1.N3,value.M2.N3,value.M3.N3,value.M4.N3,value.M1.N4,value.M2.N4,value.M3.N4,value.M4.N4,value.M1.N5,value.M2.N5,value.M3.N5,value.M4.N5};};
// Transposes a matrix that is [5] rows by [5] columns to a matrix that has [5] rows by [5] columns  
 M_5x5 Transpose(M_5x5  value) {return {value.M1.N2,value.M2.N2,value.M3.N2,value.M4.N2,value.M5.N2,value.M1.N3,value.M2.N3,value.M3.N3,value.M4.N3,value.M5.N3,value.M1.N4,value.M2.N4,value.M3.N4,value.M4.N4,value.M5.N4,value.M1.N5,value.M2.N5,value.M3.N5,value.M4.N5,value.M5.N5};};