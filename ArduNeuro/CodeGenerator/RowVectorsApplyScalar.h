#pragma once
#include <stdint.h>
// Defines a rowvector that has [2] columns 
 RV_2 ApplyScalar(RV_2 value,double (*func)(double)){return {func(value.N1),func(value.N2)};};
// Defines a rowvector that has [3] columns 
 RV_3 ApplyScalar(RV_3 value,double (*func)(double)){return {func(value.N1),func(value.N2),func(value.N3)};};
// Defines a rowvector that has [4] columns 
 RV_4 ApplyScalar(RV_4 value,double (*func)(double)){return {func(value.N1),func(value.N2),func(value.N3),func(value.N4)};};
// Defines a rowvector that has [5] columns 
 RV_5 ApplyScalar(RV_5 value,double (*func)(double)){return {func(value.N1),func(value.N2),func(value.N3),func(value.N4),func(value.N5)};};