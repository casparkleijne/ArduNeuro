#pragma once
#include <stdint.h>
#include "RowVectors.h"
// Defines a matrix that is [2] rows by [2] columns 
 struct M_2x2 {RV_2 M1;RV_2 M2;};
// Defines a matrix that is [2] rows by [3] columns 
 struct M_2x3 {RV_3 M1;RV_3 M2;};
// Defines a matrix that is [2] rows by [4] columns 
 struct M_2x4 {RV_4 M1;RV_4 M2;};
// Defines a matrix that is [3] rows by [2] columns 
 struct M_3x2 {RV_2 M1;RV_2 M2;RV_2 M3;};
// Defines a matrix that is [3] rows by [3] columns 
 struct M_3x3 {RV_3 M1;RV_3 M2;RV_3 M3;};
// Defines a matrix that is [3] rows by [4] columns 
 struct M_3x4 {RV_4 M1;RV_4 M2;RV_4 M3;};
// Defines a matrix that is [4] rows by [2] columns 
 struct M_4x2 {RV_2 M1;RV_2 M2;RV_2 M3;RV_2 M4;};
// Defines a matrix that is [4] rows by [3] columns 
 struct M_4x3 {RV_3 M1;RV_3 M2;RV_3 M3;RV_3 M4;};
// Defines a matrix that is [4] rows by [4] columns 
 struct M_4x4 {RV_4 M1;RV_4 M2;RV_4 M3;RV_4 M4;};