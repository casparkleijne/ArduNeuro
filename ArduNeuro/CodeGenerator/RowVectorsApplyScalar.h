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

// Defines a rowvector that has [2] columns 
 RV_2 AddScalar(RV_2 value,double add){return {value.N1 + add,value.N2 + add};};
// Defines a rowvector that has [3] columns 
 RV_3 AddScalar(RV_3 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add};};
// Defines a rowvector that has [4] columns 
 RV_4 AddScalar(RV_4 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add,value.N4 + add};};
// Defines a rowvector that has [5] columns 
 RV_5 AddScalar(RV_5 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add,value.N4 + add,value.N5 + add};};

// Defines a rowvector that has [2] columns 
 RV_2 ApplyScalar(RV_2 left,RV_2 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2)};};
// Defines a rowvector that has [3] columns 
 RV_3 ApplyScalar(RV_3 left,RV_3 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3)};};
// Defines a rowvector that has [4] columns 
 RV_4 ApplyScalar(RV_4 left,RV_4 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3),func(left.N4,right.N4)};};
// Defines a rowvector that has [5] columns 
 RV_5 ApplyScalar(RV_5 left,RV_5 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3),func(left.N4,right.N4),func(left.N5,right.N5)};};

// Defines a rowvector that has [2] columns 
 double Sum(RV_2 value){return value.N1+value.N2;};
// Defines a rowvector that has [3] columns 
 double Sum(RV_3 value){return value.N1+value.N2+value.N3;};
// Defines a rowvector that has [4] columns 
 double Sum(RV_4 value){return value.N1+value.N2+value.N3+value.N4;};
// Defines a rowvector that has [5] columns 
 double Sum(RV_5 value){return value.N1+value.N2+value.N3+value.N4+value.N5;};