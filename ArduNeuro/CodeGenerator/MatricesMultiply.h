#pragma once
#include <stdint.h>
#include "Matrices.h"
#include "MatricesTranspose.h"
M_2x2 Multiply(M_2x2 left, M_2x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2};;
}
M_3x2 Multiply(M_3x2 left, M_2x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2};;
}
M_4x2 Multiply(M_4x2 left, M_2x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2};;
}
M_5x2 Multiply(M_5x2 left, M_2x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2};;
}
M_2x3 Multiply(M_2x2 left, M_2x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3};;
}
M_3x3 Multiply(M_3x2 left, M_2x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3};;
}
M_4x3 Multiply(M_4x2 left, M_2x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3};;
}
M_5x3 Multiply(M_5x2 left, M_2x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3};;
}
M_2x4 Multiply(M_2x2 left, M_2x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4};;
}
M_3x4 Multiply(M_3x2 left, M_2x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4};;
}
M_4x4 Multiply(M_4x2 left, M_2x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4};;
}
M_5x4 Multiply(M_5x2 left, M_2x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3,
left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4};;
}
M_2x5 Multiply(M_2x2 left, M_2x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5};;
}
M_3x5 Multiply(M_3x2 left, M_2x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5};;
}
M_4x5 Multiply(M_4x2 left, M_2x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4,
left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5};;
}
M_5x5 Multiply(M_5x2 left, M_2x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4,
left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3,
left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4,
left.M5.N1 * right.M1.N5 + left.M5.N2 * right.M2.N5};;
}
M_2x2 Multiply(M_2x3 left, M_3x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2};;
}
M_3x2 Multiply(M_3x3 left, M_3x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2};;
}
M_4x2 Multiply(M_4x3 left, M_3x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2};;
}
M_5x2 Multiply(M_5x3 left, M_3x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2};;
}
M_2x3 Multiply(M_2x3 left, M_3x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3};;
}
M_3x3 Multiply(M_3x3 left, M_3x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3};;
}
M_4x3 Multiply(M_4x3 left, M_3x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3};;
}
M_5x3 Multiply(M_5x3 left, M_3x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3};;
}
M_2x4 Multiply(M_2x3 left, M_3x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4};;
}
M_3x4 Multiply(M_3x3 left, M_3x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4};;
}
M_4x4 Multiply(M_4x3 left, M_3x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4};;
}
M_5x4 Multiply(M_5x3 left, M_3x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3,
left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4};;
}
M_2x5 Multiply(M_2x3 left, M_3x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5};;
}
M_3x5 Multiply(M_3x3 left, M_3x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5};;
}
M_4x5 Multiply(M_4x3 left, M_3x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4,
left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5};;
}
M_5x5 Multiply(M_5x3 left, M_3x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4,
left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3,
left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4,
left.M5.N1 * right.M1.N5 + left.M5.N2 * right.M2.N5 + left.M5.N3 * right.M3.N5};;
}
M_2x2 Multiply(M_2x4 left, M_4x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2};;
}
M_3x2 Multiply(M_3x4 left, M_4x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2};;
}
M_4x2 Multiply(M_4x4 left, M_4x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2};;
}
M_5x2 Multiply(M_5x4 left, M_4x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2};;
}
M_2x3 Multiply(M_2x4 left, M_4x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3};;
}
M_3x3 Multiply(M_3x4 left, M_4x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3};;
}
M_4x3 Multiply(M_4x4 left, M_4x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3};;
}
M_5x3 Multiply(M_5x4 left, M_4x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3};;
}
M_2x4 Multiply(M_2x4 left, M_4x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4};;
}
M_3x4 Multiply(M_3x4 left, M_4x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4};;
}
M_4x4 Multiply(M_4x4 left, M_4x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4};;
}
M_5x4 Multiply(M_5x4 left, M_4x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3,
left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4 + left.M5.N4 * right.M4.N4};;
}
M_2x5 Multiply(M_2x4 left, M_4x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5};;
}
M_3x5 Multiply(M_3x4 left, M_4x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5};;
}
M_4x5 Multiply(M_4x4 left, M_4x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4,
left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5 + left.M4.N4 * right.M4.N5};;
}
M_5x5 Multiply(M_5x4 left, M_4x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4,
left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5 + left.M4.N4 * right.M4.N5,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3,
left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4 + left.M5.N4 * right.M4.N4,
left.M5.N1 * right.M1.N5 + left.M5.N2 * right.M2.N5 + left.M5.N3 * right.M3.N5 + left.M5.N4 * right.M4.N5};;
}
M_2x2 Multiply(M_2x5 left, M_5x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2};;
}
M_3x2 Multiply(M_3x5 left, M_5x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2};;
}
M_4x2 Multiply(M_4x5 left, M_5x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2};;
}
M_5x2 Multiply(M_5x5 left, M_5x2 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1 + left.M5.N5 * right.M5.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2 + left.M5.N5 * right.M5.N2};;
}
M_2x3 Multiply(M_2x5 left, M_5x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3};;
}
M_3x3 Multiply(M_3x5 left, M_5x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3};;
}
M_4x3 Multiply(M_4x5 left, M_5x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3};;
}
M_5x3 Multiply(M_5x5 left, M_5x3 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1 + left.M5.N5 * right.M5.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2 + left.M5.N5 * right.M5.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3 + left.M5.N5 * right.M5.N3};;
}
M_2x4 Multiply(M_2x5 left, M_5x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4};;
}
M_3x4 Multiply(M_3x5 left, M_5x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4};;
}
M_4x4 Multiply(M_4x5 left, M_5x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4 + left.M4.N5 * right.M5.N4};;
}
M_5x4 Multiply(M_5x5 left, M_5x4 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4 + left.M4.N5 * right.M5.N4,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1 + left.M5.N5 * right.M5.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2 + left.M5.N5 * right.M5.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3 + left.M5.N5 * right.M5.N3,
left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4 + left.M5.N4 * right.M4.N4 + left.M5.N5 * right.M5.N4};;
}
M_2x5 Multiply(M_2x5 left, M_5x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5 + left.M1.N5 * right.M5.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5 + left.M2.N5 * right.M5.N5};;
}
M_3x5 Multiply(M_3x5 left, M_5x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5 + left.M1.N5 * right.M5.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5 + left.M2.N5 * right.M5.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5 + left.M3.N5 * right.M5.N5};;
}
M_4x5 Multiply(M_4x5 left, M_5x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5 + left.M1.N5 * right.M5.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5 + left.M2.N5 * right.M5.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5 + left.M3.N5 * right.M5.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4 + left.M4.N5 * right.M5.N4,
left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5 + left.M4.N4 * right.M4.N5 + left.M4.N5 * right.M5.N5};;
}
M_5x5 Multiply(M_5x5 left, M_5x5 right){
	return {left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1,
left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5 + left.M1.N5 * right.M5.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1,
left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5 + left.M2.N5 * right.M5.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1,
left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4,
left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5 + left.M3.N5 * right.M5.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1,
left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2,
left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3,
left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4 + left.M4.N5 * right.M5.N4,
left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5 + left.M4.N4 * right.M4.N5 + left.M4.N5 * right.M5.N5,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1 + left.M5.N5 * right.M5.N1,
left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2 + left.M5.N5 * right.M5.N2,
left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3 + left.M5.N5 * right.M5.N3,
left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4 + left.M5.N4 * right.M4.N4 + left.M5.N5 * right.M5.N4,
left.M5.N1 * right.M1.N5 + left.M5.N2 * right.M2.N5 + left.M5.N3 * right.M3.N5 + left.M5.N4 * right.M4.N5 + left.M5.N5 * right.M5.N5};;
}