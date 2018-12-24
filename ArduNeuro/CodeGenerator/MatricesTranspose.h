#pragma once
#include <stdint.h>
public:


M_2x2  Transpose(M_2x2  value) {return {value.M1.N1,
value.M2.N1,
value.M1.N2,
value.M2.N2};};
M_2x3  Transpose(M_3x2  value) {return {value.M1.N1,
value.M2.N1,
value.M3.N1,
value.M1.N2,
value.M2.N2,
value.M3.N2};};
M_3x2  Transpose(M_2x3  value) {return {value.M1.N1,
value.M2.N1,
value.M1.N2,
value.M2.N2,
value.M1.N3,
value.M2.N3};};
M_3x3  Transpose(M_3x3  value) {return {value.M1.N1,
value.M2.N1,
value.M3.N1,
value.M1.N2,
value.M2.N2,
value.M3.N2,
value.M1.N3,
value.M2.N3,
value.M3.N3};};