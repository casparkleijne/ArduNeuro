/*
 Name:		ArduNeuro.ino
 Created:	12/20/2018 10:48:49 AM
 Author:	CasparKleijne
*/

#include "MatrixOperations.h"

// the setup function runs once when you press reset or power the board
void setup() {
	M_2x2 matrixa = { 1,2,3,4 };
	M_2x2 matrixb = Matrix::Transpose(matrixa);

	M_3x3 matrixa1 = { 1,2,3,4,5,6,7,8,9 };
	M_3x3 matrixb1 = Matrix::Transpose(matrixa1);

	M_2x3 matrixa2 = { 1,2,3,4,5,6 };
	M_3x2 matrixb2 = Matrix::Transpose(matrixa2);

	M_2x2 matrixad = Matrix::DotProduct(matrixa, matrixa);

	M_4x7 matrixa3 = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28 };
	M_4x7 matrixb3 = Matrix::ReflectHorizontal(matrixa3);

	M_7x4 matrixa4 = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28 };
	M_7x4 matrixb4 = Matrix::ReflectVertical(matrixa4);

	M_7x4 matrixa5 = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28 };
	M_4x7 matrixb5 = Matrix::Rotate90(matrixa5);

	M_7x4 matrixa6 = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28 };
	M_7x4 matrixb6 = Matrix::Rotate180(matrixa6);

	M_7x4 matrixa7 = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28 };
	M_4x7 matrixb7 = Matrix::Rotate270(matrixa7);

	M_7x4 matrixa8 = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28 };
	M_7x4 matrixb8 = Matrix::Clone(matrixa8);

	M_7x4 matrixa9 = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28 };
	M_7x4 matrixb9 = Matrix::MultiplyScalar(2.0f, matrixa9);

	M_7x7 matrixad2 = Matrix::DotProduct(matrixa7, matrixb7);
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
