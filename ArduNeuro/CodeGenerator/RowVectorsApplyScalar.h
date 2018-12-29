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
// Defines a rowvector that has [6] columns 
 RV_6 ApplyScalar(RV_6 value,double (*func)(double)){return {func(value.N1),func(value.N2),func(value.N3),func(value.N4),func(value.N5),func(value.N6)};};
// Defines a rowvector that has [7] columns 
 RV_7 ApplyScalar(RV_7 value,double (*func)(double)){return {func(value.N1),func(value.N2),func(value.N3),func(value.N4),func(value.N5),func(value.N6),func(value.N7)};};
// Defines a rowvector that has [8] columns 
 RV_8 ApplyScalar(RV_8 value,double (*func)(double)){return {func(value.N1),func(value.N2),func(value.N3),func(value.N4),func(value.N5),func(value.N6),func(value.N7),func(value.N8)};};
// Defines a rowvector that has [9] columns 
 RV_9 ApplyScalar(RV_9 value,double (*func)(double)){return {func(value.N1),func(value.N2),func(value.N3),func(value.N4),func(value.N5),func(value.N6),func(value.N7),func(value.N8),func(value.N9)};};

// Defines a rowvector that has [2] columns 
 RV_2 AddScalar(RV_2 value,double add){return {value.N1 + add,value.N2 + add};};
// Defines a rowvector that has [3] columns 
 RV_3 AddScalar(RV_3 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add};};
// Defines a rowvector that has [4] columns 
 RV_4 AddScalar(RV_4 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add,value.N4 + add};};
// Defines a rowvector that has [5] columns 
 RV_5 AddScalar(RV_5 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add,value.N4 + add,value.N5 + add};};
// Defines a rowvector that has [6] columns 
 RV_6 AddScalar(RV_6 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add,value.N4 + add,value.N5 + add,value.N6 + add};};
// Defines a rowvector that has [7] columns 
 RV_7 AddScalar(RV_7 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add,value.N4 + add,value.N5 + add,value.N6 + add,value.N7 + add};};
// Defines a rowvector that has [8] columns 
 RV_8 AddScalar(RV_8 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add,value.N4 + add,value.N5 + add,value.N6 + add,value.N7 + add,value.N8 + add};};
// Defines a rowvector that has [9] columns 
 RV_9 AddScalar(RV_9 value,double add){return {value.N1 + add,value.N2 + add,value.N3 + add,value.N4 + add,value.N5 + add,value.N6 + add,value.N7 + add,value.N8 + add,value.N9 + add};};

// Defines a rowvector that has [2] columns 
 RV_2 ApplyScalar(RV_2 left,RV_2 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2)};};
// Defines a rowvector that has [3] columns 
 RV_3 ApplyScalar(RV_3 left,RV_3 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3)};};
// Defines a rowvector that has [4] columns 
 RV_4 ApplyScalar(RV_4 left,RV_4 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3),func(left.N4,right.N4)};};
// Defines a rowvector that has [5] columns 
 RV_5 ApplyScalar(RV_5 left,RV_5 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3),func(left.N4,right.N4),func(left.N5,right.N5)};};
// Defines a rowvector that has [6] columns 
 RV_6 ApplyScalar(RV_6 left,RV_6 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3),func(left.N4,right.N4),func(left.N5,right.N5),func(left.N6,right.N6)};};
// Defines a rowvector that has [7] columns 
 RV_7 ApplyScalar(RV_7 left,RV_7 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3),func(left.N4,right.N4),func(left.N5,right.N5),func(left.N6,right.N6),func(left.N7,right.N7)};};
// Defines a rowvector that has [8] columns 
 RV_8 ApplyScalar(RV_8 left,RV_8 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3),func(left.N4,right.N4),func(left.N5,right.N5),func(left.N6,right.N6),func(left.N7,right.N7),func(left.N8,right.N8)};};
// Defines a rowvector that has [9] columns 
 RV_9 ApplyScalar(RV_9 left,RV_9 right,double (*func)(double,double)){return {func(left.N1,right.N1),func(left.N2,right.N2),func(left.N3,right.N3),func(left.N4,right.N4),func(left.N5,right.N5),func(left.N6,right.N6),func(left.N7,right.N7),func(left.N8,right.N8),func(left.N9,right.N9)};};

// Defines a rowvector that has [2] columns 
 double Sum(RV_2 value){return value.N1+value.N2;};
// Defines a rowvector that has [3] columns 
 double Sum(RV_3 value){return value.N1+value.N2+value.N3;};
// Defines a rowvector that has [4] columns 
 double Sum(RV_4 value){return value.N1+value.N2+value.N3+value.N4;};
// Defines a rowvector that has [5] columns 
 double Sum(RV_5 value){return value.N1+value.N2+value.N3+value.N4+value.N5;};
// Defines a rowvector that has [6] columns 
 double Sum(RV_6 value){return value.N1+value.N2+value.N3+value.N4+value.N5+value.N6;};
// Defines a rowvector that has [7] columns 
 double Sum(RV_7 value){return value.N1+value.N2+value.N3+value.N4+value.N5+value.N6+value.N7;};
// Defines a rowvector that has [8] columns 
 double Sum(RV_8 value){return value.N1+value.N2+value.N3+value.N4+value.N5+value.N6+value.N7+value.N8;};
// Defines a rowvector that has [9] columns 
 double Sum(RV_9 value){return value.N1+value.N2+value.N3+value.N4+value.N5+value.N6+value.N7+value.N8+value.N9;};

// Defines a rowvector that has [2] columns 
 RV_2 MultiplyScalar(RV_2 value,double factor){return {value.N1 * factor,value.N2 * factor};};
// Defines a rowvector that has [3] columns 
 RV_3 MultiplyScalar(RV_3 value,double factor){return {value.N1 * factor,value.N2 * factor,value.N3 * factor};};
// Defines a rowvector that has [4] columns 
 RV_4 MultiplyScalar(RV_4 value,double factor){return {value.N1 * factor,value.N2 * factor,value.N3 * factor,value.N4 * factor};};
// Defines a rowvector that has [5] columns 
 RV_5 MultiplyScalar(RV_5 value,double factor){return {value.N1 * factor,value.N2 * factor,value.N3 * factor,value.N4 * factor,value.N5 * factor};};
// Defines a rowvector that has [6] columns 
 RV_6 MultiplyScalar(RV_6 value,double factor){return {value.N1 * factor,value.N2 * factor,value.N3 * factor,value.N4 * factor,value.N5 * factor,value.N6 * factor};};
// Defines a rowvector that has [7] columns 
 RV_7 MultiplyScalar(RV_7 value,double factor){return {value.N1 * factor,value.N2 * factor,value.N3 * factor,value.N4 * factor,value.N5 * factor,value.N6 * factor,value.N7 * factor};};
// Defines a rowvector that has [8] columns 
 RV_8 MultiplyScalar(RV_8 value,double factor){return {value.N1 * factor,value.N2 * factor,value.N3 * factor,value.N4 * factor,value.N5 * factor,value.N6 * factor,value.N7 * factor,value.N8 * factor};};
// Defines a rowvector that has [9] columns 
 RV_9 MultiplyScalar(RV_9 value,double factor){return {value.N1 * factor,value.N2 * factor,value.N3 * factor,value.N4 * factor,value.N5 * factor,value.N6 * factor,value.N7 * factor,value.N8 * factor,value.N9 * factor};};