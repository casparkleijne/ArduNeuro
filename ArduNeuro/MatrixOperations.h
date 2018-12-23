#pragma once

#include "CodeGenerator\Matrices.h"
//All Matrix operations are here
class Matrix
{
public:

	// transposes a 2 row vector to column 2 size column vector
	static CV_2 Transpose(RV_2 vector)
	{
		return 	{ vector.N1,vector.N2 };
	}
	// transposes a 2 column vector and returns a 2 size row vector
	static RV_2 Transpose(CV_2 vector)
	{
		return 	{ vector.M1,vector.M2 };
	}
	// transposes a 2x2 matrix and returns a 2x2 matrix 
	static M_2x2 Transpose(M_2x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M1.N2,matrix.M2.N2 };
	}
	// transposes a 2x3 matrix and returns a 3x2 matrix 
	static M_3x2 Transpose(M_2x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M1.N2,matrix.M2.N2,matrix.M1.N3,matrix.M2.N3 };
	}
	// transposes a 2x4 matrix and returns a 4x2 matrix 
	static M_4x2 Transpose(M_2x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M1.N2,matrix.M2.N2,matrix.M1.N3,matrix.M2.N3,matrix.M1.N4,matrix.M2.N4 };
	}
	// transposes a 2x5 matrix and returns a 5x2 matrix 
	static M_5x2 Transpose(M_2x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M1.N2,matrix.M2.N2,matrix.M1.N3,matrix.M2.N3,matrix.M1.N4,matrix.M2.N4,matrix.M1.N5,matrix.M2.N5 };
	}
	// transposes a 2x6 matrix and returns a 6x2 matrix 
	static M_6x2 Transpose(M_2x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M1.N2,matrix.M2.N2,matrix.M1.N3,matrix.M2.N3,matrix.M1.N4,matrix.M2.N4,matrix.M1.N5,matrix.M2.N5,matrix.M1.N6,matrix.M2.N6 };
	}
	// transposes a 2x7 matrix and returns a 7x2 matrix 
	static M_7x2 Transpose(M_2x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M1.N2,matrix.M2.N2,matrix.M1.N3,matrix.M2.N3,matrix.M1.N4,matrix.M2.N4,matrix.M1.N5,matrix.M2.N5,matrix.M1.N6,matrix.M2.N6,matrix.M1.N7,matrix.M2.N7 };
	}
	// transposes a 2x8 matrix and returns a 8x2 matrix 
	static M_8x2 Transpose(M_2x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M1.N2,matrix.M2.N2,matrix.M1.N3,matrix.M2.N3,matrix.M1.N4,matrix.M2.N4,matrix.M1.N5,matrix.M2.N5,matrix.M1.N6,matrix.M2.N6,matrix.M1.N7,matrix.M2.N7,matrix.M1.N8,matrix.M2.N8 };
	}
	// transposes a 2x9 matrix and returns a 9x2 matrix 
	static M_9x2 Transpose(M_2x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M1.N2,matrix.M2.N2,matrix.M1.N3,matrix.M2.N3,matrix.M1.N4,matrix.M2.N4,matrix.M1.N5,matrix.M2.N5,matrix.M1.N6,matrix.M2.N6,matrix.M1.N7,matrix.M2.N7,matrix.M1.N8,matrix.M2.N8,matrix.M1.N9,matrix.M2.N9 };
	}
	// transposes a 3 row vector to column 3 size column vector
	static CV_3 Transpose(RV_3 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3 };
	}
	// transposes a 3 column vector and returns a 3 size row vector
	static RV_3 Transpose(CV_3 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3 };
	}
	// transposes a 3x2 matrix and returns a 2x3 matrix 
	static M_2x3 Transpose(M_3x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2 };
	}
	// transposes a 3x3 matrix and returns a 3x3 matrix 
	static M_3x3 Transpose(M_3x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3 };
	}
	// transposes a 3x4 matrix and returns a 4x3 matrix 
	static M_4x3 Transpose(M_3x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4 };
	}
	// transposes a 3x5 matrix and returns a 5x3 matrix 
	static M_5x3 Transpose(M_3x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5 };
	}
	// transposes a 3x6 matrix and returns a 6x3 matrix 
	static M_6x3 Transpose(M_3x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6 };
	}
	// transposes a 3x7 matrix and returns a 7x3 matrix 
	static M_7x3 Transpose(M_3x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7 };
	}
	// transposes a 3x8 matrix and returns a 8x3 matrix 
	static M_8x3 Transpose(M_3x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8 };
	}
	// transposes a 3x9 matrix and returns a 9x3 matrix 
	static M_9x3 Transpose(M_3x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M1.N9,matrix.M2.N9,matrix.M3.N9 };
	}
	// transposes a 4 row vector to column 4 size column vector
	static CV_4 Transpose(RV_4 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4 };
	}
	// transposes a 4 column vector and returns a 4 size row vector
	static RV_4 Transpose(CV_4 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4 };
	}
	// transposes a 4x2 matrix and returns a 2x4 matrix 
	static M_2x4 Transpose(M_4x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2 };
	}
	// transposes a 4x3 matrix and returns a 3x4 matrix 
	static M_3x4 Transpose(M_4x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3 };
	}
	// transposes a 4x4 matrix and returns a 4x4 matrix 
	static M_4x4 Transpose(M_4x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4 };
	}
	// transposes a 4x5 matrix and returns a 5x4 matrix 
	static M_5x4 Transpose(M_4x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5 };
	}
	// transposes a 4x6 matrix and returns a 6x4 matrix 
	static M_6x4 Transpose(M_4x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6 };
	}
	// transposes a 4x7 matrix and returns a 7x4 matrix 
	static M_7x4 Transpose(M_4x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7 };
	}
	// transposes a 4x8 matrix and returns a 8x4 matrix 
	static M_8x4 Transpose(M_4x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8 };
	}
	// transposes a 4x9 matrix and returns a 9x4 matrix 
	static M_9x4 Transpose(M_4x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M1.N9,matrix.M2.N9,matrix.M3.N9,matrix.M4.N9 };
	}
	// transposes a 5 row vector to column 5 size column vector
	static CV_5 Transpose(RV_5 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5 };
	}
	// transposes a 5 column vector and returns a 5 size row vector
	static RV_5 Transpose(CV_5 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5 };
	}
	// transposes a 5x2 matrix and returns a 2x5 matrix 
	static M_2x5 Transpose(M_5x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2 };
	}
	// transposes a 5x3 matrix and returns a 3x5 matrix 
	static M_3x5 Transpose(M_5x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3 };
	}
	// transposes a 5x4 matrix and returns a 4x5 matrix 
	static M_4x5 Transpose(M_5x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4 };
	}
	// transposes a 5x5 matrix and returns a 5x5 matrix 
	static M_5x5 Transpose(M_5x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5 };
	}
	// transposes a 5x6 matrix and returns a 6x5 matrix 
	static M_6x5 Transpose(M_5x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6 };
	}
	// transposes a 5x7 matrix and returns a 7x5 matrix 
	static M_7x5 Transpose(M_5x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7 };
	}
	// transposes a 5x8 matrix and returns a 8x5 matrix 
	static M_8x5 Transpose(M_5x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8 };
	}
	// transposes a 5x9 matrix and returns a 9x5 matrix 
	static M_9x5 Transpose(M_5x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M1.N9,matrix.M2.N9,matrix.M3.N9,matrix.M4.N9,matrix.M5.N9 };
	}
	// transposes a 6 row vector to column 6 size column vector
	static CV_6 Transpose(RV_6 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5,vector.N6 };
	}
	// transposes a 6 column vector and returns a 6 size row vector
	static RV_6 Transpose(CV_6 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5,vector.M6 };
	}
	// transposes a 6x2 matrix and returns a 2x6 matrix 
	static M_2x6 Transpose(M_6x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2 };
	}
	// transposes a 6x3 matrix and returns a 3x6 matrix 
	static M_3x6 Transpose(M_6x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3 };
	}
	// transposes a 6x4 matrix and returns a 4x6 matrix 
	static M_4x6 Transpose(M_6x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4 };
	}
	// transposes a 6x5 matrix and returns a 5x6 matrix 
	static M_5x6 Transpose(M_6x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5 };
	}
	// transposes a 6x6 matrix and returns a 6x6 matrix 
	static M_6x6 Transpose(M_6x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6 };
	}
	// transposes a 6x7 matrix and returns a 7x6 matrix 
	static M_7x6 Transpose(M_6x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7 };
	}
	// transposes a 6x8 matrix and returns a 8x6 matrix 
	static M_8x6 Transpose(M_6x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M6.N8 };
	}
	// transposes a 6x9 matrix and returns a 9x6 matrix 
	static M_9x6 Transpose(M_6x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M6.N8,matrix.M1.N9,matrix.M2.N9,matrix.M3.N9,matrix.M4.N9,matrix.M5.N9,matrix.M6.N9 };
	}
	// transposes a 7 row vector to column 7 size column vector
	static CV_7 Transpose(RV_7 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5,vector.N6,vector.N7 };
	}
	// transposes a 7 column vector and returns a 7 size row vector
	static RV_7 Transpose(CV_7 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5,vector.M6,vector.M7 };
	}
	// transposes a 7x2 matrix and returns a 2x7 matrix 
	static M_2x7 Transpose(M_7x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2 };
	}
	// transposes a 7x3 matrix and returns a 3x7 matrix 
	static M_3x7 Transpose(M_7x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3 };
	}
	// transposes a 7x4 matrix and returns a 4x7 matrix 
	static M_4x7 Transpose(M_7x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4 };
	}
	// transposes a 7x5 matrix and returns a 5x7 matrix 
	static M_5x7 Transpose(M_7x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5 };
	}
	// transposes a 7x6 matrix and returns a 6x7 matrix 
	static M_6x7 Transpose(M_7x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6 };
	}
	// transposes a 7x7 matrix and returns a 7x7 matrix 
	static M_7x7 Transpose(M_7x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7 };
	}
	// transposes a 7x8 matrix and returns a 8x7 matrix 
	static M_8x7 Transpose(M_7x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M6.N8,matrix.M7.N8 };
	}
	// transposes a 7x9 matrix and returns a 9x7 matrix 
	static M_9x7 Transpose(M_7x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M6.N8,matrix.M7.N8,matrix.M1.N9,matrix.M2.N9,matrix.M3.N9,matrix.M4.N9,matrix.M5.N9,matrix.M6.N9,matrix.M7.N9 };
	}
	// transposes a 8 row vector to column 8 size column vector
	static CV_8 Transpose(RV_8 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5,vector.N6,vector.N7,vector.N8 };
	}
	// transposes a 8 column vector and returns a 8 size row vector
	static RV_8 Transpose(CV_8 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5,vector.M6,vector.M7,vector.M8 };
	}
	// transposes a 8x2 matrix and returns a 2x8 matrix 
	static M_2x8 Transpose(M_8x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2 };
	}
	// transposes a 8x3 matrix and returns a 3x8 matrix 
	static M_3x8 Transpose(M_8x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3 };
	}
	// transposes a 8x4 matrix and returns a 4x8 matrix 
	static M_4x8 Transpose(M_8x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4 };
	}
	// transposes a 8x5 matrix and returns a 5x8 matrix 
	static M_5x8 Transpose(M_8x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5 };
	}
	// transposes a 8x6 matrix and returns a 6x8 matrix 
	static M_6x8 Transpose(M_8x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M8.N6 };
	}
	// transposes a 8x7 matrix and returns a 7x8 matrix 
	static M_7x8 Transpose(M_8x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M8.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7,matrix.M8.N7 };
	}
	// transposes a 8x8 matrix and returns a 8x8 matrix 
	static M_8x8 Transpose(M_8x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M8.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7,matrix.M8.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M6.N8,matrix.M7.N8,matrix.M8.N8 };
	}
	// transposes a 8x9 matrix and returns a 9x8 matrix 
	static M_9x8 Transpose(M_8x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M8.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7,matrix.M8.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M6.N8,matrix.M7.N8,matrix.M8.N8,matrix.M1.N9,matrix.M2.N9,matrix.M3.N9,matrix.M4.N9,matrix.M5.N9,matrix.M6.N9,matrix.M7.N9,matrix.M8.N9 };
	}
	// transposes a 9 row vector to column 9 size column vector
	static CV_9 Transpose(RV_9 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5,vector.N6,vector.N7,vector.N8,vector.N9 };
	}
	// transposes a 9 column vector and returns a 9 size row vector
	static RV_9 Transpose(CV_9 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5,vector.M6,vector.M7,vector.M8,vector.M9 };
	}
	// transposes a 9x2 matrix and returns a 2x9 matrix 
	static M_2x9 Transpose(M_9x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M9.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M9.N2 };
	}
	// transposes a 9x3 matrix and returns a 3x9 matrix 
	static M_3x9 Transpose(M_9x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M9.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M9.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M9.N3 };
	}
	// transposes a 9x4 matrix and returns a 4x9 matrix 
	static M_4x9 Transpose(M_9x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M9.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M9.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M9.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M9.N4 };
	}
	// transposes a 9x5 matrix and returns a 5x9 matrix 
	static M_5x9 Transpose(M_9x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M9.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M9.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M9.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M9.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M9.N5 };
	}
	// transposes a 9x6 matrix and returns a 6x9 matrix 
	static M_6x9 Transpose(M_9x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M9.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M9.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M9.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M9.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M9.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M8.N6,matrix.M9.N6 };
	}
	// transposes a 9x7 matrix and returns a 7x9 matrix 
	static M_7x9 Transpose(M_9x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M9.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M9.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M9.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M9.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M9.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M8.N6,matrix.M9.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7,matrix.M8.N7,matrix.M9.N7 };
	}
	// transposes a 9x8 matrix and returns a 8x9 matrix 
	static M_8x9 Transpose(M_9x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M9.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M9.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M9.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M9.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M9.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M8.N6,matrix.M9.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7,matrix.M8.N7,matrix.M9.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M6.N8,matrix.M7.N8,matrix.M8.N8,matrix.M9.N8 };
	}
	// transposes a 9x9 matrix and returns a 9x9 matrix 
	static M_9x9 Transpose(M_9x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M2.N1,matrix.M3.N1,matrix.M4.N1,matrix.M5.N1,matrix.M6.N1,matrix.M7.N1,matrix.M8.N1,matrix.M9.N1,matrix.M1.N2,matrix.M2.N2,matrix.M3.N2,matrix.M4.N2,matrix.M5.N2,matrix.M6.N2,matrix.M7.N2,matrix.M8.N2,matrix.M9.N2,matrix.M1.N3,matrix.M2.N3,matrix.M3.N3,matrix.M4.N3,matrix.M5.N3,matrix.M6.N3,matrix.M7.N3,matrix.M8.N3,matrix.M9.N3,matrix.M1.N4,matrix.M2.N4,matrix.M3.N4,matrix.M4.N4,matrix.M5.N4,matrix.M6.N4,matrix.M7.N4,matrix.M8.N4,matrix.M9.N4,matrix.M1.N5,matrix.M2.N5,matrix.M3.N5,matrix.M4.N5,matrix.M5.N5,matrix.M6.N5,matrix.M7.N5,matrix.M8.N5,matrix.M9.N5,matrix.M1.N6,matrix.M2.N6,matrix.M3.N6,matrix.M4.N6,matrix.M5.N6,matrix.M6.N6,matrix.M7.N6,matrix.M8.N6,matrix.M9.N6,matrix.M1.N7,matrix.M2.N7,matrix.M3.N7,matrix.M4.N7,matrix.M5.N7,matrix.M6.N7,matrix.M7.N7,matrix.M8.N7,matrix.M9.N7,matrix.M1.N8,matrix.M2.N8,matrix.M3.N8,matrix.M4.N8,matrix.M5.N8,matrix.M6.N8,matrix.M7.N8,matrix.M8.N8,matrix.M9.N8,matrix.M1.N9,matrix.M2.N9,matrix.M3.N9,matrix.M4.N9,matrix.M5.N9,matrix.M6.N9,matrix.M7.N9,matrix.M8.N9,matrix.M9.N9 };
	}

	// flips a 2 column vector over the horizontal axis and returns a 2 size column vector
	static CV_2 ReflectHorizontal(CV_2 vector)
	{
		return 	{ vector.M2,vector.M1 };
	}
	// flips a 2 row vector over the horizontal axis and returns a 2 size row vector
	static RV_2 ReflectHorizontal(RV_2 vector)
	{
		return 	{ vector.N1,vector.N2 };
	}
	// flips a 2x2 matrix over the horizontal axis and returns a 2x2 matrix
	static M_2x2 ReflectHorizontal(M_2x2 matrix)
	{
		return 	{ matrix.M2.N1,matrix.M2.N2,matrix.M1.N1,matrix.M1.N2 };
	}
	// flips a 2x3 matrix over the horizontal axis and returns a 2x3 matrix
	static M_2x3 ReflectHorizontal(M_2x3 matrix)
	{
		return 	{ matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3 };
	}
	// flips a 2x4 matrix over the horizontal axis and returns a 2x4 matrix
	static M_2x4 ReflectHorizontal(M_2x4 matrix)
	{
		return 	{ matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4 };
	}
	// flips a 2x5 matrix over the horizontal axis and returns a 2x5 matrix
	static M_2x5 ReflectHorizontal(M_2x5 matrix)
	{
		return 	{ matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5 };
	}
	// flips a 2x6 matrix over the horizontal axis and returns a 2x6 matrix
	static M_2x6 ReflectHorizontal(M_2x6 matrix)
	{
		return 	{ matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6 };
	}
	// flips a 2x7 matrix over the horizontal axis and returns a 2x7 matrix
	static M_2x7 ReflectHorizontal(M_2x7 matrix)
	{
		return 	{ matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7 };
	}
	// flips a 2x8 matrix over the horizontal axis and returns a 2x8 matrix
	static M_2x8 ReflectHorizontal(M_2x8 matrix)
	{
		return 	{ matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8 };
	}
	// flips a 2x9 matrix over the horizontal axis and returns a 2x9 matrix
	static M_2x9 ReflectHorizontal(M_2x9 matrix)
	{
		return 	{ matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9 };
	}
	// flips a 3 column vector over the horizontal axis and returns a 3 size column vector
	static CV_3 ReflectHorizontal(CV_3 vector)
	{
		return 	{ vector.M3,vector.M2,vector.M1 };
	}
	// flips a 3 row vector over the horizontal axis and returns a 3 size row vector
	static RV_3 ReflectHorizontal(RV_3 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3 };
	}
	// flips a 3x2 matrix over the horizontal axis and returns a 3x2 matrix
	static M_3x2 ReflectHorizontal(M_3x2 matrix)
	{
		return 	{ matrix.M3.N1,matrix.M3.N2,matrix.M2.N1,matrix.M2.N2,matrix.M1.N1,matrix.M1.N2 };
	}
	// flips a 3x3 matrix over the horizontal axis and returns a 3x3 matrix
	static M_3x3 ReflectHorizontal(M_3x3 matrix)
	{
		return 	{ matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3 };
	}
	// flips a 3x4 matrix over the horizontal axis and returns a 3x4 matrix
	static M_3x4 ReflectHorizontal(M_3x4 matrix)
	{
		return 	{ matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4 };
	}
	// flips a 3x5 matrix over the horizontal axis and returns a 3x5 matrix
	static M_3x5 ReflectHorizontal(M_3x5 matrix)
	{
		return 	{ matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5 };
	}
	// flips a 3x6 matrix over the horizontal axis and returns a 3x6 matrix
	static M_3x6 ReflectHorizontal(M_3x6 matrix)
	{
		return 	{ matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6 };
	}
	// flips a 3x7 matrix over the horizontal axis and returns a 3x7 matrix
	static M_3x7 ReflectHorizontal(M_3x7 matrix)
	{
		return 	{ matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7 };
	}
	// flips a 3x8 matrix over the horizontal axis and returns a 3x8 matrix
	static M_3x8 ReflectHorizontal(M_3x8 matrix)
	{
		return 	{ matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8 };
	}
	// flips a 3x9 matrix over the horizontal axis and returns a 3x9 matrix
	static M_3x9 ReflectHorizontal(M_3x9 matrix)
	{
		return 	{ matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9 };
	}
	// flips a 4 column vector over the horizontal axis and returns a 4 size column vector
	static CV_4 ReflectHorizontal(CV_4 vector)
	{
		return 	{ vector.M4,vector.M3,vector.M2,vector.M1 };
	}
	// flips a 4 row vector over the horizontal axis and returns a 4 size row vector
	static RV_4 ReflectHorizontal(RV_4 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4 };
	}
	// flips a 4x2 matrix over the horizontal axis and returns a 4x2 matrix
	static M_4x2 ReflectHorizontal(M_4x2 matrix)
	{
		return 	{ matrix.M4.N1,matrix.M4.N2,matrix.M3.N1,matrix.M3.N2,matrix.M2.N1,matrix.M2.N2,matrix.M1.N1,matrix.M1.N2 };
	}
	// flips a 4x3 matrix over the horizontal axis and returns a 4x3 matrix
	static M_4x3 ReflectHorizontal(M_4x3 matrix)
	{
		return 	{ matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3 };
	}
	// flips a 4x4 matrix over the horizontal axis and returns a 4x4 matrix
	static M_4x4 ReflectHorizontal(M_4x4 matrix)
	{
		return 	{ matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4 };
	}
	// flips a 4x5 matrix over the horizontal axis and returns a 4x5 matrix
	static M_4x5 ReflectHorizontal(M_4x5 matrix)
	{
		return 	{ matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5 };
	}
	// flips a 4x6 matrix over the horizontal axis and returns a 4x6 matrix
	static M_4x6 ReflectHorizontal(M_4x6 matrix)
	{
		return 	{ matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6 };
	}
	// flips a 4x7 matrix over the horizontal axis and returns a 4x7 matrix
	static M_4x7 ReflectHorizontal(M_4x7 matrix)
	{
		return 	{ matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7 };
	}
	// flips a 4x8 matrix over the horizontal axis and returns a 4x8 matrix
	static M_4x8 ReflectHorizontal(M_4x8 matrix)
	{
		return 	{ matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8 };
	}
	// flips a 4x9 matrix over the horizontal axis and returns a 4x9 matrix
	static M_4x9 ReflectHorizontal(M_4x9 matrix)
	{
		return 	{ matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9 };
	}
	// flips a 5 column vector over the horizontal axis and returns a 5 size column vector
	static CV_5 ReflectHorizontal(CV_5 vector)
	{
		return 	{ vector.M5,vector.M4,vector.M3,vector.M2,vector.M1 };
	}
	// flips a 5 row vector over the horizontal axis and returns a 5 size row vector
	static RV_5 ReflectHorizontal(RV_5 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5 };
	}
	// flips a 5x2 matrix over the horizontal axis and returns a 5x2 matrix
	static M_5x2 ReflectHorizontal(M_5x2 matrix)
	{
		return 	{ matrix.M5.N1,matrix.M5.N2,matrix.M4.N1,matrix.M4.N2,matrix.M3.N1,matrix.M3.N2,matrix.M2.N1,matrix.M2.N2,matrix.M1.N1,matrix.M1.N2 };
	}
	// flips a 5x3 matrix over the horizontal axis and returns a 5x3 matrix
	static M_5x3 ReflectHorizontal(M_5x3 matrix)
	{
		return 	{ matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3 };
	}
	// flips a 5x4 matrix over the horizontal axis and returns a 5x4 matrix
	static M_5x4 ReflectHorizontal(M_5x4 matrix)
	{
		return 	{ matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4 };
	}
	// flips a 5x5 matrix over the horizontal axis and returns a 5x5 matrix
	static M_5x5 ReflectHorizontal(M_5x5 matrix)
	{
		return 	{ matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5 };
	}
	// flips a 5x6 matrix over the horizontal axis and returns a 5x6 matrix
	static M_5x6 ReflectHorizontal(M_5x6 matrix)
	{
		return 	{ matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6 };
	}
	// flips a 5x7 matrix over the horizontal axis and returns a 5x7 matrix
	static M_5x7 ReflectHorizontal(M_5x7 matrix)
	{
		return 	{ matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7 };
	}
	// flips a 5x8 matrix over the horizontal axis and returns a 5x8 matrix
	static M_5x8 ReflectHorizontal(M_5x8 matrix)
	{
		return 	{ matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8 };
	}
	// flips a 5x9 matrix over the horizontal axis and returns a 5x9 matrix
	static M_5x9 ReflectHorizontal(M_5x9 matrix)
	{
		return 	{ matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9 };
	}
	// flips a 6 column vector over the horizontal axis and returns a 6 size column vector
	static CV_6 ReflectHorizontal(CV_6 vector)
	{
		return 	{ vector.M6,vector.M5,vector.M4,vector.M3,vector.M2,vector.M1 };
	}
	// flips a 6 row vector over the horizontal axis and returns a 6 size row vector
	static RV_6 ReflectHorizontal(RV_6 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5,vector.N6 };
	}
	// flips a 6x2 matrix over the horizontal axis and returns a 6x2 matrix
	static M_6x2 ReflectHorizontal(M_6x2 matrix)
	{
		return 	{ matrix.M6.N1,matrix.M6.N2,matrix.M5.N1,matrix.M5.N2,matrix.M4.N1,matrix.M4.N2,matrix.M3.N1,matrix.M3.N2,matrix.M2.N1,matrix.M2.N2,matrix.M1.N1,matrix.M1.N2 };
	}
	// flips a 6x3 matrix over the horizontal axis and returns a 6x3 matrix
	static M_6x3 ReflectHorizontal(M_6x3 matrix)
	{
		return 	{ matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3 };
	}
	// flips a 6x4 matrix over the horizontal axis and returns a 6x4 matrix
	static M_6x4 ReflectHorizontal(M_6x4 matrix)
	{
		return 	{ matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4 };
	}
	// flips a 6x5 matrix over the horizontal axis and returns a 6x5 matrix
	static M_6x5 ReflectHorizontal(M_6x5 matrix)
	{
		return 	{ matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5 };
	}
	// flips a 6x6 matrix over the horizontal axis and returns a 6x6 matrix
	static M_6x6 ReflectHorizontal(M_6x6 matrix)
	{
		return 	{ matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6 };
	}
	// flips a 6x7 matrix over the horizontal axis and returns a 6x7 matrix
	static M_6x7 ReflectHorizontal(M_6x7 matrix)
	{
		return 	{ matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7 };
	}
	// flips a 6x8 matrix over the horizontal axis and returns a 6x8 matrix
	static M_6x8 ReflectHorizontal(M_6x8 matrix)
	{
		return 	{ matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8 };
	}
	// flips a 6x9 matrix over the horizontal axis and returns a 6x9 matrix
	static M_6x9 ReflectHorizontal(M_6x9 matrix)
	{
		return 	{ matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M6.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9 };
	}
	// flips a 7 column vector over the horizontal axis and returns a 7 size column vector
	static CV_7 ReflectHorizontal(CV_7 vector)
	{
		return 	{ vector.M7,vector.M6,vector.M5,vector.M4,vector.M3,vector.M2,vector.M1 };
	}
	// flips a 7 row vector over the horizontal axis and returns a 7 size row vector
	static RV_7 ReflectHorizontal(RV_7 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5,vector.N6,vector.N7 };
	}
	// flips a 7x2 matrix over the horizontal axis and returns a 7x2 matrix
	static M_7x2 ReflectHorizontal(M_7x2 matrix)
	{
		return 	{ matrix.M7.N1,matrix.M7.N2,matrix.M6.N1,matrix.M6.N2,matrix.M5.N1,matrix.M5.N2,matrix.M4.N1,matrix.M4.N2,matrix.M3.N1,matrix.M3.N2,matrix.M2.N1,matrix.M2.N2,matrix.M1.N1,matrix.M1.N2 };
	}
	// flips a 7x3 matrix over the horizontal axis and returns a 7x3 matrix
	static M_7x3 ReflectHorizontal(M_7x3 matrix)
	{
		return 	{ matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3 };
	}
	// flips a 7x4 matrix over the horizontal axis and returns a 7x4 matrix
	static M_7x4 ReflectHorizontal(M_7x4 matrix)
	{
		return 	{ matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4 };
	}
	// flips a 7x5 matrix over the horizontal axis and returns a 7x5 matrix
	static M_7x5 ReflectHorizontal(M_7x5 matrix)
	{
		return 	{ matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5 };
	}
	// flips a 7x6 matrix over the horizontal axis and returns a 7x6 matrix
	static M_7x6 ReflectHorizontal(M_7x6 matrix)
	{
		return 	{ matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6 };
	}
	// flips a 7x7 matrix over the horizontal axis and returns a 7x7 matrix
	static M_7x7 ReflectHorizontal(M_7x7 matrix)
	{
		return 	{ matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7 };
	}
	// flips a 7x8 matrix over the horizontal axis and returns a 7x8 matrix
	static M_7x8 ReflectHorizontal(M_7x8 matrix)
	{
		return 	{ matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8 };
	}
	// flips a 7x9 matrix over the horizontal axis and returns a 7x9 matrix
	static M_7x9 ReflectHorizontal(M_7x9 matrix)
	{
		return 	{ matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M7.N9,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M6.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9 };
	}
	// flips a 8 column vector over the horizontal axis and returns a 8 size column vector
	static CV_8 ReflectHorizontal(CV_8 vector)
	{
		return 	{ vector.M8,vector.M7,vector.M6,vector.M5,vector.M4,vector.M3,vector.M2,vector.M1 };
	}
	// flips a 8 row vector over the horizontal axis and returns a 8 size row vector
	static RV_8 ReflectHorizontal(RV_8 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5,vector.N6,vector.N7,vector.N8 };
	}
	// flips a 8x2 matrix over the horizontal axis and returns a 8x2 matrix
	static M_8x2 ReflectHorizontal(M_8x2 matrix)
	{
		return 	{ matrix.M8.N1,matrix.M8.N2,matrix.M7.N1,matrix.M7.N2,matrix.M6.N1,matrix.M6.N2,matrix.M5.N1,matrix.M5.N2,matrix.M4.N1,matrix.M4.N2,matrix.M3.N1,matrix.M3.N2,matrix.M2.N1,matrix.M2.N2,matrix.M1.N1,matrix.M1.N2 };
	}
	// flips a 8x3 matrix over the horizontal axis and returns a 8x3 matrix
	static M_8x3 ReflectHorizontal(M_8x3 matrix)
	{
		return 	{ matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3 };
	}
	// flips a 8x4 matrix over the horizontal axis and returns a 8x4 matrix
	static M_8x4 ReflectHorizontal(M_8x4 matrix)
	{
		return 	{ matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4 };
	}
	// flips a 8x5 matrix over the horizontal axis and returns a 8x5 matrix
	static M_8x5 ReflectHorizontal(M_8x5 matrix)
	{
		return 	{ matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5 };
	}
	// flips a 8x6 matrix over the horizontal axis and returns a 8x6 matrix
	static M_8x6 ReflectHorizontal(M_8x6 matrix)
	{
		return 	{ matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6 };
	}
	// flips a 8x7 matrix over the horizontal axis and returns a 8x7 matrix
	static M_8x7 ReflectHorizontal(M_8x7 matrix)
	{
		return 	{ matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7 };
	}
	// flips a 8x8 matrix over the horizontal axis and returns a 8x8 matrix
	static M_8x8 ReflectHorizontal(M_8x8 matrix)
	{
		return 	{ matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M8.N8,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8 };
	}
	// flips a 8x9 matrix over the horizontal axis and returns a 8x9 matrix
	static M_8x9 ReflectHorizontal(M_8x9 matrix)
	{
		return 	{ matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M8.N8,matrix.M8.N9,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M7.N9,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M6.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9 };
	}
	// flips a 9 column vector over the horizontal axis and returns a 9 size column vector
	static CV_9 ReflectHorizontal(CV_9 vector)
	{
		return 	{ vector.M9,vector.M8,vector.M7,vector.M6,vector.M5,vector.M4,vector.M3,vector.M2,vector.M1 };
	}
	// flips a 9 row vector over the horizontal axis and returns a 9 size row vector
	static RV_9 ReflectHorizontal(RV_9 vector)
	{
		return 	{ vector.N1,vector.N2,vector.N3,vector.N4,vector.N5,vector.N6,vector.N7,vector.N8,vector.N9 };
	}
	// flips a 9x2 matrix over the horizontal axis and returns a 9x2 matrix
	static M_9x2 ReflectHorizontal(M_9x2 matrix)
	{
		return 	{ matrix.M9.N1,matrix.M9.N2,matrix.M8.N1,matrix.M8.N2,matrix.M7.N1,matrix.M7.N2,matrix.M6.N1,matrix.M6.N2,matrix.M5.N1,matrix.M5.N2,matrix.M4.N1,matrix.M4.N2,matrix.M3.N1,matrix.M3.N2,matrix.M2.N1,matrix.M2.N2,matrix.M1.N1,matrix.M1.N2 };
	}
	// flips a 9x3 matrix over the horizontal axis and returns a 9x3 matrix
	static M_9x3 ReflectHorizontal(M_9x3 matrix)
	{
		return 	{ matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3 };
	}
	// flips a 9x4 matrix over the horizontal axis and returns a 9x4 matrix
	static M_9x4 ReflectHorizontal(M_9x4 matrix)
	{
		return 	{ matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4 };
	}
	// flips a 9x5 matrix over the horizontal axis and returns a 9x5 matrix
	static M_9x5 ReflectHorizontal(M_9x5 matrix)
	{
		return 	{ matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5 };
	}
	// flips a 9x6 matrix over the horizontal axis and returns a 9x6 matrix
	static M_9x6 ReflectHorizontal(M_9x6 matrix)
	{
		return 	{ matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M9.N6,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6 };
	}
	// flips a 9x7 matrix over the horizontal axis and returns a 9x7 matrix
	static M_9x7 ReflectHorizontal(M_9x7 matrix)
	{
		return 	{ matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M9.N6,matrix.M9.N7,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7 };
	}
	// flips a 9x8 matrix over the horizontal axis and returns a 9x8 matrix
	static M_9x8 ReflectHorizontal(M_9x8 matrix)
	{
		return 	{ matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M9.N6,matrix.M9.N7,matrix.M9.N8,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M8.N8,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8 };
	}
	// flips a 9x9 matrix over the horizontal axis and returns a 9x9 matrix
	static M_9x9 ReflectHorizontal(M_9x9 matrix)
	{
		return 	{ matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M9.N6,matrix.M9.N7,matrix.M9.N8,matrix.M9.N9,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M8.N8,matrix.M8.N9,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M7.N9,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M6.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9 };
	}

	// flips a 2 row vector over the vertical axis and returns a 2 size row vector
	static RV_2 ReflectVertical(RV_2 vector)
	{
		return 	{ vector.N2,vector.N1 };
	}
	// flips a 2 column vector over the vertical axis and returns a 2 size column vector
	static CV_2 ReflectVertical(CV_2 vector)
	{
		return 	{ vector.M1,vector.M2 };
	}
	// flips a 2x2 matrix over the vertical axis and returns a 2x2 matrix
	static M_2x2 ReflectVertical(M_2x2 matrix)
	{
		return 	{ matrix.M1.N2,matrix.M1.N1,matrix.M2.N2,matrix.M2.N1 };
	}
	// flips a 2x3 matrix over the vertical axis and returns a 2x3 matrix
	static M_2x3 ReflectVertical(M_2x3 matrix)
	{
		return 	{ matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1 };
	}
	// flips a 2x4 matrix over the vertical axis and returns a 2x4 matrix
	static M_2x4 ReflectVertical(M_2x4 matrix)
	{
		return 	{ matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1 };
	}
	// flips a 2x5 matrix over the vertical axis and returns a 2x5 matrix
	static M_2x5 ReflectVertical(M_2x5 matrix)
	{
		return 	{ matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1 };
	}
	// flips a 2x6 matrix over the vertical axis and returns a 2x6 matrix
	static M_2x6 ReflectVertical(M_2x6 matrix)
	{
		return 	{ matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1 };
	}
	// flips a 2x7 matrix over the vertical axis and returns a 2x7 matrix
	static M_2x7 ReflectVertical(M_2x7 matrix)
	{
		return 	{ matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1 };
	}
	// flips a 2x8 matrix over the vertical axis and returns a 2x8 matrix
	static M_2x8 ReflectVertical(M_2x8 matrix)
	{
		return 	{ matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1 };
	}
	// flips a 2x9 matrix over the vertical axis and returns a 2x9 matrix
	static M_2x9 ReflectVertical(M_2x9 matrix)
	{
		return 	{ matrix.M1.N9,matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N9,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1 };
	}
	// flips a 3 row vector over the vertical axis and returns a 3 size row vector
	static RV_3 ReflectVertical(RV_3 vector)
	{
		return 	{ vector.N3,vector.N2,vector.N1 };
	}
	// flips a 3 column vector over the vertical axis and returns a 3 size column vector
	static CV_3 ReflectVertical(CV_3 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3 };
	}
	// flips a 3x2 matrix over the vertical axis and returns a 3x2 matrix
	static M_3x2 ReflectVertical(M_3x2 matrix)
	{
		return 	{ matrix.M1.N2,matrix.M1.N1,matrix.M2.N2,matrix.M2.N1,matrix.M3.N2,matrix.M3.N1 };
	}
	// flips a 3x3 matrix over the vertical axis and returns a 3x3 matrix
	static M_3x3 ReflectVertical(M_3x3 matrix)
	{
		return 	{ matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1 };
	}
	// flips a 3x4 matrix over the vertical axis and returns a 3x4 matrix
	static M_3x4 ReflectVertical(M_3x4 matrix)
	{
		return 	{ matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1 };
	}
	// flips a 3x5 matrix over the vertical axis and returns a 3x5 matrix
	static M_3x5 ReflectVertical(M_3x5 matrix)
	{
		return 	{ matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1 };
	}
	// flips a 3x6 matrix over the vertical axis and returns a 3x6 matrix
	static M_3x6 ReflectVertical(M_3x6 matrix)
	{
		return 	{ matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1 };
	}
	// flips a 3x7 matrix over the vertical axis and returns a 3x7 matrix
	static M_3x7 ReflectVertical(M_3x7 matrix)
	{
		return 	{ matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1 };
	}
	// flips a 3x8 matrix over the vertical axis and returns a 3x8 matrix
	static M_3x8 ReflectVertical(M_3x8 matrix)
	{
		return 	{ matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1 };
	}
	// flips a 3x9 matrix over the vertical axis and returns a 3x9 matrix
	static M_3x9 ReflectVertical(M_3x9 matrix)
	{
		return 	{ matrix.M1.N9,matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N9,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N9,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1 };
	}
	// flips a 4 row vector over the vertical axis and returns a 4 size row vector
	static RV_4 ReflectVertical(RV_4 vector)
	{
		return 	{ vector.N4,vector.N3,vector.N2,vector.N1 };
	}
	// flips a 4 column vector over the vertical axis and returns a 4 size column vector
	static CV_4 ReflectVertical(CV_4 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4 };
	}
	// flips a 4x2 matrix over the vertical axis and returns a 4x2 matrix
	static M_4x2 ReflectVertical(M_4x2 matrix)
	{
		return 	{ matrix.M1.N2,matrix.M1.N1,matrix.M2.N2,matrix.M2.N1,matrix.M3.N2,matrix.M3.N1,matrix.M4.N2,matrix.M4.N1 };
	}
	// flips a 4x3 matrix over the vertical axis and returns a 4x3 matrix
	static M_4x3 ReflectVertical(M_4x3 matrix)
	{
		return 	{ matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1 };
	}
	// flips a 4x4 matrix over the vertical axis and returns a 4x4 matrix
	static M_4x4 ReflectVertical(M_4x4 matrix)
	{
		return 	{ matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1 };
	}
	// flips a 4x5 matrix over the vertical axis and returns a 4x5 matrix
	static M_4x5 ReflectVertical(M_4x5 matrix)
	{
		return 	{ matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1 };
	}
	// flips a 4x6 matrix over the vertical axis and returns a 4x6 matrix
	static M_4x6 ReflectVertical(M_4x6 matrix)
	{
		return 	{ matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1 };
	}
	// flips a 4x7 matrix over the vertical axis and returns a 4x7 matrix
	static M_4x7 ReflectVertical(M_4x7 matrix)
	{
		return 	{ matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1 };
	}
	// flips a 4x8 matrix over the vertical axis and returns a 4x8 matrix
	static M_4x8 ReflectVertical(M_4x8 matrix)
	{
		return 	{ matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1 };
	}
	// flips a 4x9 matrix over the vertical axis and returns a 4x9 matrix
	static M_4x9 ReflectVertical(M_4x9 matrix)
	{
		return 	{ matrix.M1.N9,matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N9,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N9,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N9,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1 };
	}
	// flips a 5 row vector over the vertical axis and returns a 5 size row vector
	static RV_5 ReflectVertical(RV_5 vector)
	{
		return 	{ vector.N5,vector.N4,vector.N3,vector.N2,vector.N1 };
	}
	// flips a 5 column vector over the vertical axis and returns a 5 size column vector
	static CV_5 ReflectVertical(CV_5 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5 };
	}
	// flips a 5x2 matrix over the vertical axis and returns a 5x2 matrix
	static M_5x2 ReflectVertical(M_5x2 matrix)
	{
		return 	{ matrix.M1.N2,matrix.M1.N1,matrix.M2.N2,matrix.M2.N1,matrix.M3.N2,matrix.M3.N1,matrix.M4.N2,matrix.M4.N1,matrix.M5.N2,matrix.M5.N1 };
	}
	// flips a 5x3 matrix over the vertical axis and returns a 5x3 matrix
	static M_5x3 ReflectVertical(M_5x3 matrix)
	{
		return 	{ matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1 };
	}
	// flips a 5x4 matrix over the vertical axis and returns a 5x4 matrix
	static M_5x4 ReflectVertical(M_5x4 matrix)
	{
		return 	{ matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1 };
	}
	// flips a 5x5 matrix over the vertical axis and returns a 5x5 matrix
	static M_5x5 ReflectVertical(M_5x5 matrix)
	{
		return 	{ matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1 };
	}
	// flips a 5x6 matrix over the vertical axis and returns a 5x6 matrix
	static M_5x6 ReflectVertical(M_5x6 matrix)
	{
		return 	{ matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1 };
	}
	// flips a 5x7 matrix over the vertical axis and returns a 5x7 matrix
	static M_5x7 ReflectVertical(M_5x7 matrix)
	{
		return 	{ matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1 };
	}
	// flips a 5x8 matrix over the vertical axis and returns a 5x8 matrix
	static M_5x8 ReflectVertical(M_5x8 matrix)
	{
		return 	{ matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1 };
	}
	// flips a 5x9 matrix over the vertical axis and returns a 5x9 matrix
	static M_5x9 ReflectVertical(M_5x9 matrix)
	{
		return 	{ matrix.M1.N9,matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N9,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N9,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N9,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N9,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1 };
	}
	// flips a 6 row vector over the vertical axis and returns a 6 size row vector
	static RV_6 ReflectVertical(RV_6 vector)
	{
		return 	{ vector.N6,vector.N5,vector.N4,vector.N3,vector.N2,vector.N1 };
	}
	// flips a 6 column vector over the vertical axis and returns a 6 size column vector
	static CV_6 ReflectVertical(CV_6 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5,vector.M6 };
	}
	// flips a 6x2 matrix over the vertical axis and returns a 6x2 matrix
	static M_6x2 ReflectVertical(M_6x2 matrix)
	{
		return 	{ matrix.M1.N2,matrix.M1.N1,matrix.M2.N2,matrix.M2.N1,matrix.M3.N2,matrix.M3.N1,matrix.M4.N2,matrix.M4.N1,matrix.M5.N2,matrix.M5.N1,matrix.M6.N2,matrix.M6.N1 };
	}
	// flips a 6x3 matrix over the vertical axis and returns a 6x3 matrix
	static M_6x3 ReflectVertical(M_6x3 matrix)
	{
		return 	{ matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1 };
	}
	// flips a 6x4 matrix over the vertical axis and returns a 6x4 matrix
	static M_6x4 ReflectVertical(M_6x4 matrix)
	{
		return 	{ matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1 };
	}
	// flips a 6x5 matrix over the vertical axis and returns a 6x5 matrix
	static M_6x5 ReflectVertical(M_6x5 matrix)
	{
		return 	{ matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1 };
	}
	// flips a 6x6 matrix over the vertical axis and returns a 6x6 matrix
	static M_6x6 ReflectVertical(M_6x6 matrix)
	{
		return 	{ matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1 };
	}
	// flips a 6x7 matrix over the vertical axis and returns a 6x7 matrix
	static M_6x7 ReflectVertical(M_6x7 matrix)
	{
		return 	{ matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1 };
	}
	// flips a 6x8 matrix over the vertical axis and returns a 6x8 matrix
	static M_6x8 ReflectVertical(M_6x8 matrix)
	{
		return 	{ matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N8,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1 };
	}
	// flips a 6x9 matrix over the vertical axis and returns a 6x9 matrix
	static M_6x9 ReflectVertical(M_6x9 matrix)
	{
		return 	{ matrix.M1.N9,matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N9,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N9,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N9,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N9,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N9,matrix.M6.N8,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1 };
	}
	// flips a 7 row vector over the vertical axis and returns a 7 size row vector
	static RV_7 ReflectVertical(RV_7 vector)
	{
		return 	{ vector.N7,vector.N6,vector.N5,vector.N4,vector.N3,vector.N2,vector.N1 };
	}
	// flips a 7 column vector over the vertical axis and returns a 7 size column vector
	static CV_7 ReflectVertical(CV_7 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5,vector.M6,vector.M7 };
	}
	// flips a 7x2 matrix over the vertical axis and returns a 7x2 matrix
	static M_7x2 ReflectVertical(M_7x2 matrix)
	{
		return 	{ matrix.M1.N2,matrix.M1.N1,matrix.M2.N2,matrix.M2.N1,matrix.M3.N2,matrix.M3.N1,matrix.M4.N2,matrix.M4.N1,matrix.M5.N2,matrix.M5.N1,matrix.M6.N2,matrix.M6.N1,matrix.M7.N2,matrix.M7.N1 };
	}
	// flips a 7x3 matrix over the vertical axis and returns a 7x3 matrix
	static M_7x3 ReflectVertical(M_7x3 matrix)
	{
		return 	{ matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1 };
	}
	// flips a 7x4 matrix over the vertical axis and returns a 7x4 matrix
	static M_7x4 ReflectVertical(M_7x4 matrix)
	{
		return 	{ matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1 };
	}
	// flips a 7x5 matrix over the vertical axis and returns a 7x5 matrix
	static M_7x5 ReflectVertical(M_7x5 matrix)
	{
		return 	{ matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1 };
	}
	// flips a 7x6 matrix over the vertical axis and returns a 7x6 matrix
	static M_7x6 ReflectVertical(M_7x6 matrix)
	{
		return 	{ matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1 };
	}
	// flips a 7x7 matrix over the vertical axis and returns a 7x7 matrix
	static M_7x7 ReflectVertical(M_7x7 matrix)
	{
		return 	{ matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1 };
	}
	// flips a 7x8 matrix over the vertical axis and returns a 7x8 matrix
	static M_7x8 ReflectVertical(M_7x8 matrix)
	{
		return 	{ matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N8,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N8,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1 };
	}
	// flips a 7x9 matrix over the vertical axis and returns a 7x9 matrix
	static M_7x9 ReflectVertical(M_7x9 matrix)
	{
		return 	{ matrix.M1.N9,matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N9,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N9,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N9,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N9,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N9,matrix.M6.N8,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N9,matrix.M7.N8,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1 };
	}
	// flips a 8 row vector over the vertical axis and returns a 8 size row vector
	static RV_8 ReflectVertical(RV_8 vector)
	{
		return 	{ vector.N8,vector.N7,vector.N6,vector.N5,vector.N4,vector.N3,vector.N2,vector.N1 };
	}
	// flips a 8 column vector over the vertical axis and returns a 8 size column vector
	static CV_8 ReflectVertical(CV_8 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5,vector.M6,vector.M7,vector.M8 };
	}
	// flips a 8x2 matrix over the vertical axis and returns a 8x2 matrix
	static M_8x2 ReflectVertical(M_8x2 matrix)
	{
		return 	{ matrix.M1.N2,matrix.M1.N1,matrix.M2.N2,matrix.M2.N1,matrix.M3.N2,matrix.M3.N1,matrix.M4.N2,matrix.M4.N1,matrix.M5.N2,matrix.M5.N1,matrix.M6.N2,matrix.M6.N1,matrix.M7.N2,matrix.M7.N1,matrix.M8.N2,matrix.M8.N1 };
	}
	// flips a 8x3 matrix over the vertical axis and returns a 8x3 matrix
	static M_8x3 ReflectVertical(M_8x3 matrix)
	{
		return 	{ matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1 };
	}
	// flips a 8x4 matrix over the vertical axis and returns a 8x4 matrix
	static M_8x4 ReflectVertical(M_8x4 matrix)
	{
		return 	{ matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1 };
	}
	// flips a 8x5 matrix over the vertical axis and returns a 8x5 matrix
	static M_8x5 ReflectVertical(M_8x5 matrix)
	{
		return 	{ matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1 };
	}
	// flips a 8x6 matrix over the vertical axis and returns a 8x6 matrix
	static M_8x6 ReflectVertical(M_8x6 matrix)
	{
		return 	{ matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N6,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1 };
	}
	// flips a 8x7 matrix over the vertical axis and returns a 8x7 matrix
	static M_8x7 ReflectVertical(M_8x7 matrix)
	{
		return 	{ matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N7,matrix.M8.N6,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1 };
	}
	// flips a 8x8 matrix over the vertical axis and returns a 8x8 matrix
	static M_8x8 ReflectVertical(M_8x8 matrix)
	{
		return 	{ matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N8,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N8,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N8,matrix.M8.N7,matrix.M8.N6,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1 };
	}
	// flips a 8x9 matrix over the vertical axis and returns a 8x9 matrix
	static M_8x9 ReflectVertical(M_8x9 matrix)
	{
		return 	{ matrix.M1.N9,matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N9,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N9,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N9,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N9,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N9,matrix.M6.N8,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N9,matrix.M7.N8,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N9,matrix.M8.N8,matrix.M8.N7,matrix.M8.N6,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1 };
	}
	// flips a 9 row vector over the vertical axis and returns a 9 size row vector
	static RV_9 ReflectVertical(RV_9 vector)
	{
		return 	{ vector.N9,vector.N8,vector.N7,vector.N6,vector.N5,vector.N4,vector.N3,vector.N2,vector.N1 };
	}
	// flips a 9 column vector over the vertical axis and returns a 9 size column vector
	static CV_9 ReflectVertical(CV_9 vector)
	{
		return 	{ vector.M1,vector.M2,vector.M3,vector.M4,vector.M5,vector.M6,vector.M7,vector.M8,vector.M9 };
	}
	// flips a 9x2 matrix over the vertical axis and returns a 9x2 matrix
	static M_9x2 ReflectVertical(M_9x2 matrix)
	{
		return 	{ matrix.M1.N2,matrix.M1.N1,matrix.M2.N2,matrix.M2.N1,matrix.M3.N2,matrix.M3.N1,matrix.M4.N2,matrix.M4.N1,matrix.M5.N2,matrix.M5.N1,matrix.M6.N2,matrix.M6.N1,matrix.M7.N2,matrix.M7.N1,matrix.M8.N2,matrix.M8.N1,matrix.M9.N2,matrix.M9.N1 };
	}
	// flips a 9x3 matrix over the vertical axis and returns a 9x3 matrix
	static M_9x3 ReflectVertical(M_9x3 matrix)
	{
		return 	{ matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1,matrix.M9.N3,matrix.M9.N2,matrix.M9.N1 };
	}
	// flips a 9x4 matrix over the vertical axis and returns a 9x4 matrix
	static M_9x4 ReflectVertical(M_9x4 matrix)
	{
		return 	{ matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1,matrix.M9.N4,matrix.M9.N3,matrix.M9.N2,matrix.M9.N1 };
	}
	// flips a 9x5 matrix over the vertical axis and returns a 9x5 matrix
	static M_9x5 ReflectVertical(M_9x5 matrix)
	{
		return 	{ matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1,matrix.M9.N5,matrix.M9.N4,matrix.M9.N3,matrix.M9.N2,matrix.M9.N1 };
	}
	// flips a 9x6 matrix over the vertical axis and returns a 9x6 matrix
	static M_9x6 ReflectVertical(M_9x6 matrix)
	{
		return 	{ matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N6,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1,matrix.M9.N6,matrix.M9.N5,matrix.M9.N4,matrix.M9.N3,matrix.M9.N2,matrix.M9.N1 };
	}
	// flips a 9x7 matrix over the vertical axis and returns a 9x7 matrix
	static M_9x7 ReflectVertical(M_9x7 matrix)
	{
		return 	{ matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N7,matrix.M8.N6,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1,matrix.M9.N7,matrix.M9.N6,matrix.M9.N5,matrix.M9.N4,matrix.M9.N3,matrix.M9.N2,matrix.M9.N1 };
	}
	// flips a 9x8 matrix over the vertical axis and returns a 9x8 matrix
	static M_9x8 ReflectVertical(M_9x8 matrix)
	{
		return 	{ matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N8,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N8,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N8,matrix.M8.N7,matrix.M8.N6,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1,matrix.M9.N8,matrix.M9.N7,matrix.M9.N6,matrix.M9.N5,matrix.M9.N4,matrix.M9.N3,matrix.M9.N2,matrix.M9.N1 };
	}
	// flips a 9x9 matrix over the vertical axis and returns a 9x9 matrix
	static M_9x9 ReflectVertical(M_9x9 matrix)
	{
		return 	{ matrix.M1.N9,matrix.M1.N8,matrix.M1.N7,matrix.M1.N6,matrix.M1.N5,matrix.M1.N4,matrix.M1.N3,matrix.M1.N2,matrix.M1.N1,matrix.M2.N9,matrix.M2.N8,matrix.M2.N7,matrix.M2.N6,matrix.M2.N5,matrix.M2.N4,matrix.M2.N3,matrix.M2.N2,matrix.M2.N1,matrix.M3.N9,matrix.M3.N8,matrix.M3.N7,matrix.M3.N6,matrix.M3.N5,matrix.M3.N4,matrix.M3.N3,matrix.M3.N2,matrix.M3.N1,matrix.M4.N9,matrix.M4.N8,matrix.M4.N7,matrix.M4.N6,matrix.M4.N5,matrix.M4.N4,matrix.M4.N3,matrix.M4.N2,matrix.M4.N1,matrix.M5.N9,matrix.M5.N8,matrix.M5.N7,matrix.M5.N6,matrix.M5.N5,matrix.M5.N4,matrix.M5.N3,matrix.M5.N2,matrix.M5.N1,matrix.M6.N9,matrix.M6.N8,matrix.M6.N7,matrix.M6.N6,matrix.M6.N5,matrix.M6.N4,matrix.M6.N3,matrix.M6.N2,matrix.M6.N1,matrix.M7.N9,matrix.M7.N8,matrix.M7.N7,matrix.M7.N6,matrix.M7.N5,matrix.M7.N4,matrix.M7.N3,matrix.M7.N2,matrix.M7.N1,matrix.M8.N9,matrix.M8.N8,matrix.M8.N7,matrix.M8.N6,matrix.M8.N5,matrix.M8.N4,matrix.M8.N3,matrix.M8.N2,matrix.M8.N1,matrix.M9.N9,matrix.M9.N8,matrix.M9.N7,matrix.M9.N6,matrix.M9.N5,matrix.M9.N4,matrix.M9.N3,matrix.M9.N2,matrix.M9.N1 };
	}

	// rotates a 2 column vector  90 degrees clockwise and returns a 2 size row vector
	static RV_2 Rotate90(CV_2 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 2 row vector 90 degrees clockwise and returns a 2 size column vector
	static CV_2 Rotate90(RV_2 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 2x2 matrix 90 degrees clockwise and returns a 2x2 matrix
	static M_2x2 Rotate90(M_2x2 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 2x3 matrix 90 degrees clockwise and returns a 3x2 matrix
	static M_3x2 Rotate90(M_2x3 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 2x4 matrix 90 degrees clockwise and returns a 4x2 matrix
	static M_4x2 Rotate90(M_2x4 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 2x5 matrix 90 degrees clockwise and returns a 5x2 matrix
	static M_5x2 Rotate90(M_2x5 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 2x6 matrix 90 degrees clockwise and returns a 6x2 matrix
	static M_6x2 Rotate90(M_2x6 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 2x7 matrix 90 degrees clockwise and returns a 7x2 matrix
	static M_7x2 Rotate90(M_2x7 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 2x8 matrix 90 degrees clockwise and returns a 8x2 matrix
	static M_8x2 Rotate90(M_2x8 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 2x9 matrix 90 degrees clockwise and returns a 9x2 matrix
	static M_9x2 Rotate90(M_2x9 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 3 column vector  90 degrees clockwise and returns a 3 size row vector
	static RV_3 Rotate90(CV_3 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 3 row vector 90 degrees clockwise and returns a 3 size column vector
	static CV_3 Rotate90(RV_3 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 3x2 matrix 90 degrees clockwise and returns a 2x3 matrix
	static M_2x3 Rotate90(M_3x2 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 3x3 matrix 90 degrees clockwise and returns a 3x3 matrix
	static M_3x3 Rotate90(M_3x3 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 3x4 matrix 90 degrees clockwise and returns a 4x3 matrix
	static M_4x3 Rotate90(M_3x4 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 3x5 matrix 90 degrees clockwise and returns a 5x3 matrix
	static M_5x3 Rotate90(M_3x5 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 3x6 matrix 90 degrees clockwise and returns a 6x3 matrix
	static M_6x3 Rotate90(M_3x6 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 3x7 matrix 90 degrees clockwise and returns a 7x3 matrix
	static M_7x3 Rotate90(M_3x7 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 3x8 matrix 90 degrees clockwise and returns a 8x3 matrix
	static M_8x3 Rotate90(M_3x8 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 3x9 matrix 90 degrees clockwise and returns a 9x3 matrix
	static M_9x3 Rotate90(M_3x9 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 4 column vector  90 degrees clockwise and returns a 4 size row vector
	static RV_4 Rotate90(CV_4 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 4 row vector 90 degrees clockwise and returns a 4 size column vector
	static CV_4 Rotate90(RV_4 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 4x2 matrix 90 degrees clockwise and returns a 2x4 matrix
	static M_2x4 Rotate90(M_4x2 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 4x3 matrix 90 degrees clockwise and returns a 3x4 matrix
	static M_3x4 Rotate90(M_4x3 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 4x4 matrix 90 degrees clockwise and returns a 4x4 matrix
	static M_4x4 Rotate90(M_4x4 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 4x5 matrix 90 degrees clockwise and returns a 5x4 matrix
	static M_5x4 Rotate90(M_4x5 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 4x6 matrix 90 degrees clockwise and returns a 6x4 matrix
	static M_6x4 Rotate90(M_4x6 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 4x7 matrix 90 degrees clockwise and returns a 7x4 matrix
	static M_7x4 Rotate90(M_4x7 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 4x8 matrix 90 degrees clockwise and returns a 8x4 matrix
	static M_8x4 Rotate90(M_4x8 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 4x9 matrix 90 degrees clockwise and returns a 9x4 matrix
	static M_9x4 Rotate90(M_4x9 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 5 column vector  90 degrees clockwise and returns a 5 size row vector
	static RV_5 Rotate90(CV_5 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 5 row vector 90 degrees clockwise and returns a 5 size column vector
	static CV_5 Rotate90(RV_5 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 5x2 matrix 90 degrees clockwise and returns a 2x5 matrix
	static M_2x5 Rotate90(M_5x2 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 5x3 matrix 90 degrees clockwise and returns a 3x5 matrix
	static M_3x5 Rotate90(M_5x3 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 5x4 matrix 90 degrees clockwise and returns a 4x5 matrix
	static M_4x5 Rotate90(M_5x4 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 5x5 matrix 90 degrees clockwise and returns a 5x5 matrix
	static M_5x5 Rotate90(M_5x5 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 5x6 matrix 90 degrees clockwise and returns a 6x5 matrix
	static M_6x5 Rotate90(M_5x6 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 5x7 matrix 90 degrees clockwise and returns a 7x5 matrix
	static M_7x5 Rotate90(M_5x7 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 5x8 matrix 90 degrees clockwise and returns a 8x5 matrix
	static M_8x5 Rotate90(M_5x8 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 5x9 matrix 90 degrees clockwise and returns a 9x5 matrix
	static M_9x5 Rotate90(M_5x9 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 6 column vector  90 degrees clockwise and returns a 6 size row vector
	static RV_6 Rotate90(CV_6 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 6 row vector 90 degrees clockwise and returns a 6 size column vector
	static CV_6 Rotate90(RV_6 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 6x2 matrix 90 degrees clockwise and returns a 2x6 matrix
	static M_2x6 Rotate90(M_6x2 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 6x3 matrix 90 degrees clockwise and returns a 3x6 matrix
	static M_3x6 Rotate90(M_6x3 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 6x4 matrix 90 degrees clockwise and returns a 4x6 matrix
	static M_4x6 Rotate90(M_6x4 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 6x5 matrix 90 degrees clockwise and returns a 5x6 matrix
	static M_5x6 Rotate90(M_6x5 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 6x6 matrix 90 degrees clockwise and returns a 6x6 matrix
	static M_6x6 Rotate90(M_6x6 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 6x7 matrix 90 degrees clockwise and returns a 7x6 matrix
	static M_7x6 Rotate90(M_6x7 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 6x8 matrix 90 degrees clockwise and returns a 8x6 matrix
	static M_8x6 Rotate90(M_6x8 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 6x9 matrix 90 degrees clockwise and returns a 9x6 matrix
	static M_9x6 Rotate90(M_6x9 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 7 column vector  90 degrees clockwise and returns a 7 size row vector
	static RV_7 Rotate90(CV_7 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 7 row vector 90 degrees clockwise and returns a 7 size column vector
	static CV_7 Rotate90(RV_7 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 7x2 matrix 90 degrees clockwise and returns a 2x7 matrix
	static M_2x7 Rotate90(M_7x2 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 7x3 matrix 90 degrees clockwise and returns a 3x7 matrix
	static M_3x7 Rotate90(M_7x3 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 7x4 matrix 90 degrees clockwise and returns a 4x7 matrix
	static M_4x7 Rotate90(M_7x4 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 7x5 matrix 90 degrees clockwise and returns a 5x7 matrix
	static M_5x7 Rotate90(M_7x5 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 7x6 matrix 90 degrees clockwise and returns a 6x7 matrix
	static M_6x7 Rotate90(M_7x6 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 7x7 matrix 90 degrees clockwise and returns a 7x7 matrix
	static M_7x7 Rotate90(M_7x7 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 7x8 matrix 90 degrees clockwise and returns a 8x7 matrix
	static M_8x7 Rotate90(M_7x8 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 7x9 matrix 90 degrees clockwise and returns a 9x7 matrix
	static M_9x7 Rotate90(M_7x9 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 8 column vector  90 degrees clockwise and returns a 8 size row vector
	static RV_8 Rotate90(CV_8 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 8 row vector 90 degrees clockwise and returns a 8 size column vector
	static CV_8 Rotate90(RV_8 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 8x2 matrix 90 degrees clockwise and returns a 2x8 matrix
	static M_2x8 Rotate90(M_8x2 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 8x3 matrix 90 degrees clockwise and returns a 3x8 matrix
	static M_3x8 Rotate90(M_8x3 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 8x4 matrix 90 degrees clockwise and returns a 4x8 matrix
	static M_4x8 Rotate90(M_8x4 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 8x5 matrix 90 degrees clockwise and returns a 5x8 matrix
	static M_5x8 Rotate90(M_8x5 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 8x6 matrix 90 degrees clockwise and returns a 6x8 matrix
	static M_6x8 Rotate90(M_8x6 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 8x7 matrix 90 degrees clockwise and returns a 7x8 matrix
	static M_7x8 Rotate90(M_8x7 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 8x8 matrix 90 degrees clockwise and returns a 8x8 matrix
	static M_8x8 Rotate90(M_8x8 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 8x9 matrix 90 degrees clockwise and returns a 9x8 matrix
	static M_9x8 Rotate90(M_8x9 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 9 column vector  90 degrees clockwise and returns a 9 size row vector
	static RV_9 Rotate90(CV_9 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 9 row vector 90 degrees clockwise and returns a 9 size column vector
	static CV_9 Rotate90(RV_9 vector)
	{
		return 	ReflectHorizontal(Transpose(vector));
	}
	// rotates a 9x2 matrix 90 degrees clockwise and returns a 2x9 matrix
	static M_2x9 Rotate90(M_9x2 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 9x3 matrix 90 degrees clockwise and returns a 3x9 matrix
	static M_3x9 Rotate90(M_9x3 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 9x4 matrix 90 degrees clockwise and returns a 4x9 matrix
	static M_4x9 Rotate90(M_9x4 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 9x5 matrix 90 degrees clockwise and returns a 5x9 matrix
	static M_5x9 Rotate90(M_9x5 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 9x6 matrix 90 degrees clockwise and returns a 6x9 matrix
	static M_6x9 Rotate90(M_9x6 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 9x7 matrix 90 degrees clockwise and returns a 7x9 matrix
	static M_7x9 Rotate90(M_9x7 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 9x8 matrix 90 degrees clockwise and returns a 8x9 matrix
	static M_8x9 Rotate90(M_9x8 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}

	// rotates a 9x9 matrix 90 degrees clockwise and returns a 9x9 matrix
	static M_9x9 Rotate90(M_9x9 matrix)
	{
		return 	ReflectHorizontal(Transpose(matrix));
	}


	// rotates a 2 column vector  180 degrees clockwise and returns a 2 size column vector
	static CV_2 Rotate180(CV_2 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 2 row vector 180 degrees clockwise and returns a 2 size row vector
	static RV_2 Rotate180(RV_2 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 2x2 matrix 180 degrees clockwise and returns a 2x2 matrix
	static M_2x2 Rotate180(M_2x2 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 2x3 matrix 180 degrees clockwise and returns a 2x3 matrix
	static M_2x3 Rotate180(M_2x3 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 2x4 matrix 180 degrees clockwise and returns a 2x4 matrix
	static M_2x4 Rotate180(M_2x4 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 2x5 matrix 180 degrees clockwise and returns a 2x5 matrix
	static M_2x5 Rotate180(M_2x5 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 2x6 matrix 180 degrees clockwise and returns a 2x6 matrix
	static M_2x6 Rotate180(M_2x6 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 2x7 matrix 180 degrees clockwise and returns a 2x7 matrix
	static M_2x7 Rotate180(M_2x7 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 2x8 matrix 180 degrees clockwise and returns a 2x8 matrix
	static M_2x8 Rotate180(M_2x8 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 2x9 matrix 180 degrees clockwise and returns a 2x9 matrix
	static M_2x9 Rotate180(M_2x9 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 3 column vector  180 degrees clockwise and returns a 3 size column vector
	static CV_3 Rotate180(CV_3 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 3 row vector 180 degrees clockwise and returns a 3 size row vector
	static RV_3 Rotate180(RV_3 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 3x2 matrix 180 degrees clockwise and returns a 3x2 matrix
	static M_3x2 Rotate180(M_3x2 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 3x3 matrix 180 degrees clockwise and returns a 3x3 matrix
	static M_3x3 Rotate180(M_3x3 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 3x4 matrix 180 degrees clockwise and returns a 3x4 matrix
	static M_3x4 Rotate180(M_3x4 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 3x5 matrix 180 degrees clockwise and returns a 3x5 matrix
	static M_3x5 Rotate180(M_3x5 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 3x6 matrix 180 degrees clockwise and returns a 3x6 matrix
	static M_3x6 Rotate180(M_3x6 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 3x7 matrix 180 degrees clockwise and returns a 3x7 matrix
	static M_3x7 Rotate180(M_3x7 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 3x8 matrix 180 degrees clockwise and returns a 3x8 matrix
	static M_3x8 Rotate180(M_3x8 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 3x9 matrix 180 degrees clockwise and returns a 3x9 matrix
	static M_3x9 Rotate180(M_3x9 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 4 column vector  180 degrees clockwise and returns a 4 size column vector
	static CV_4 Rotate180(CV_4 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 4 row vector 180 degrees clockwise and returns a 4 size row vector
	static RV_4 Rotate180(RV_4 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 4x2 matrix 180 degrees clockwise and returns a 4x2 matrix
	static M_4x2 Rotate180(M_4x2 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 4x3 matrix 180 degrees clockwise and returns a 4x3 matrix
	static M_4x3 Rotate180(M_4x3 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 4x4 matrix 180 degrees clockwise and returns a 4x4 matrix
	static M_4x4 Rotate180(M_4x4 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 4x5 matrix 180 degrees clockwise and returns a 4x5 matrix
	static M_4x5 Rotate180(M_4x5 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 4x6 matrix 180 degrees clockwise and returns a 4x6 matrix
	static M_4x6 Rotate180(M_4x6 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 4x7 matrix 180 degrees clockwise and returns a 4x7 matrix
	static M_4x7 Rotate180(M_4x7 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 4x8 matrix 180 degrees clockwise and returns a 4x8 matrix
	static M_4x8 Rotate180(M_4x8 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 4x9 matrix 180 degrees clockwise and returns a 4x9 matrix
	static M_4x9 Rotate180(M_4x9 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 5 column vector  180 degrees clockwise and returns a 5 size column vector
	static CV_5 Rotate180(CV_5 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 5 row vector 180 degrees clockwise and returns a 5 size row vector
	static RV_5 Rotate180(RV_5 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 5x2 matrix 180 degrees clockwise and returns a 5x2 matrix
	static M_5x2 Rotate180(M_5x2 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 5x3 matrix 180 degrees clockwise and returns a 5x3 matrix
	static M_5x3 Rotate180(M_5x3 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 5x4 matrix 180 degrees clockwise and returns a 5x4 matrix
	static M_5x4 Rotate180(M_5x4 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 5x5 matrix 180 degrees clockwise and returns a 5x5 matrix
	static M_5x5 Rotate180(M_5x5 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 5x6 matrix 180 degrees clockwise and returns a 5x6 matrix
	static M_5x6 Rotate180(M_5x6 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 5x7 matrix 180 degrees clockwise and returns a 5x7 matrix
	static M_5x7 Rotate180(M_5x7 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 5x8 matrix 180 degrees clockwise and returns a 5x8 matrix
	static M_5x8 Rotate180(M_5x8 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 5x9 matrix 180 degrees clockwise and returns a 5x9 matrix
	static M_5x9 Rotate180(M_5x9 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 6 column vector  180 degrees clockwise and returns a 6 size column vector
	static CV_6 Rotate180(CV_6 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 6 row vector 180 degrees clockwise and returns a 6 size row vector
	static RV_6 Rotate180(RV_6 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 6x2 matrix 180 degrees clockwise and returns a 6x2 matrix
	static M_6x2 Rotate180(M_6x2 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 6x3 matrix 180 degrees clockwise and returns a 6x3 matrix
	static M_6x3 Rotate180(M_6x3 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 6x4 matrix 180 degrees clockwise and returns a 6x4 matrix
	static M_6x4 Rotate180(M_6x4 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 6x5 matrix 180 degrees clockwise and returns a 6x5 matrix
	static M_6x5 Rotate180(M_6x5 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 6x6 matrix 180 degrees clockwise and returns a 6x6 matrix
	static M_6x6 Rotate180(M_6x6 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 6x7 matrix 180 degrees clockwise and returns a 6x7 matrix
	static M_6x7 Rotate180(M_6x7 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 6x8 matrix 180 degrees clockwise and returns a 6x8 matrix
	static M_6x8 Rotate180(M_6x8 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 6x9 matrix 180 degrees clockwise and returns a 6x9 matrix
	static M_6x9 Rotate180(M_6x9 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 7 column vector  180 degrees clockwise and returns a 7 size column vector
	static CV_7 Rotate180(CV_7 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 7 row vector 180 degrees clockwise and returns a 7 size row vector
	static RV_7 Rotate180(RV_7 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 7x2 matrix 180 degrees clockwise and returns a 7x2 matrix
	static M_7x2 Rotate180(M_7x2 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 7x3 matrix 180 degrees clockwise and returns a 7x3 matrix
	static M_7x3 Rotate180(M_7x3 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 7x4 matrix 180 degrees clockwise and returns a 7x4 matrix
	static M_7x4 Rotate180(M_7x4 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 7x5 matrix 180 degrees clockwise and returns a 7x5 matrix
	static M_7x5 Rotate180(M_7x5 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 7x6 matrix 180 degrees clockwise and returns a 7x6 matrix
	static M_7x6 Rotate180(M_7x6 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 7x7 matrix 180 degrees clockwise and returns a 7x7 matrix
	static M_7x7 Rotate180(M_7x7 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 7x8 matrix 180 degrees clockwise and returns a 7x8 matrix
	static M_7x8 Rotate180(M_7x8 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 7x9 matrix 180 degrees clockwise and returns a 7x9 matrix
	static M_7x9 Rotate180(M_7x9 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 8 column vector  180 degrees clockwise and returns a 8 size column vector
	static CV_8 Rotate180(CV_8 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 8 row vector 180 degrees clockwise and returns a 8 size row vector
	static RV_8 Rotate180(RV_8 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 8x2 matrix 180 degrees clockwise and returns a 8x2 matrix
	static M_8x2 Rotate180(M_8x2 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 8x3 matrix 180 degrees clockwise and returns a 8x3 matrix
	static M_8x3 Rotate180(M_8x3 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 8x4 matrix 180 degrees clockwise and returns a 8x4 matrix
	static M_8x4 Rotate180(M_8x4 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 8x5 matrix 180 degrees clockwise and returns a 8x5 matrix
	static M_8x5 Rotate180(M_8x5 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 8x6 matrix 180 degrees clockwise and returns a 8x6 matrix
	static M_8x6 Rotate180(M_8x6 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 8x7 matrix 180 degrees clockwise and returns a 8x7 matrix
	static M_8x7 Rotate180(M_8x7 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 8x8 matrix 180 degrees clockwise and returns a 8x8 matrix
	static M_8x8 Rotate180(M_8x8 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 8x9 matrix 180 degrees clockwise and returns a 8x9 matrix
	static M_8x9 Rotate180(M_8x9 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 9 column vector  180 degrees clockwise and returns a 9 size column vector
	static CV_9 Rotate180(CV_9 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 9 row vector 180 degrees clockwise and returns a 9 size row vector
	static RV_9 Rotate180(RV_9 vector)
	{
		return 	ReflectVertical(ReflectHorizontal(vector));
	}
	// rotates a 9x2 matrix 180 degrees clockwise and returns a 9x2 matrix
	static M_9x2 Rotate180(M_9x2 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 9x3 matrix 180 degrees clockwise and returns a 9x3 matrix
	static M_9x3 Rotate180(M_9x3 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 9x4 matrix 180 degrees clockwise and returns a 9x4 matrix
	static M_9x4 Rotate180(M_9x4 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 9x5 matrix 180 degrees clockwise and returns a 9x5 matrix
	static M_9x5 Rotate180(M_9x5 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 9x6 matrix 180 degrees clockwise and returns a 9x6 matrix
	static M_9x6 Rotate180(M_9x6 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 9x7 matrix 180 degrees clockwise and returns a 9x7 matrix
	static M_9x7 Rotate180(M_9x7 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 9x8 matrix 180 degrees clockwise and returns a 9x8 matrix
	static M_9x8 Rotate180(M_9x8 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}

	// rotates a 9x9 matrix 180 degrees clockwise and returns a 9x9 matrix
	static M_9x9 Rotate180(M_9x9 matrix)
	{
		return 	ReflectVertical(ReflectHorizontal(matrix));
	}


	// rotates a 2 column vector 270 degrees clockwise and returns a 2 size row vector
	static RV_2 Rotate270(CV_2 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 2 row vector 270 degrees clockwise and returns a 2 size column vector
	static CV_2 Rotate270(RV_2 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 2x2 matrix 270 degrees clockwise and returns a 2x2 matrix
	static M_2x2 Rotate270(M_2x2 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 2x3 matrix 270 degrees clockwise and returns a 3x2 matrix
	static M_3x2 Rotate270(M_2x3 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 2x4 matrix 270 degrees clockwise and returns a 4x2 matrix
	static M_4x2 Rotate270(M_2x4 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 2x5 matrix 270 degrees clockwise and returns a 5x2 matrix
	static M_5x2 Rotate270(M_2x5 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 2x6 matrix 270 degrees clockwise and returns a 6x2 matrix
	static M_6x2 Rotate270(M_2x6 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 2x7 matrix 270 degrees clockwise and returns a 7x2 matrix
	static M_7x2 Rotate270(M_2x7 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 2x8 matrix 270 degrees clockwise and returns a 8x2 matrix
	static M_8x2 Rotate270(M_2x8 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 2x9 matrix 270 degrees clockwise and returns a 9x2 matrix
	static M_9x2 Rotate270(M_2x9 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 3 column vector 270 degrees clockwise and returns a 3 size row vector
	static RV_3 Rotate270(CV_3 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 3 row vector 270 degrees clockwise and returns a 3 size column vector
	static CV_3 Rotate270(RV_3 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 3x2 matrix 270 degrees clockwise and returns a 2x3 matrix
	static M_2x3 Rotate270(M_3x2 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 3x3 matrix 270 degrees clockwise and returns a 3x3 matrix
	static M_3x3 Rotate270(M_3x3 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 3x4 matrix 270 degrees clockwise and returns a 4x3 matrix
	static M_4x3 Rotate270(M_3x4 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 3x5 matrix 270 degrees clockwise and returns a 5x3 matrix
	static M_5x3 Rotate270(M_3x5 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 3x6 matrix 270 degrees clockwise and returns a 6x3 matrix
	static M_6x3 Rotate270(M_3x6 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 3x7 matrix 270 degrees clockwise and returns a 7x3 matrix
	static M_7x3 Rotate270(M_3x7 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 3x8 matrix 270 degrees clockwise and returns a 8x3 matrix
	static M_8x3 Rotate270(M_3x8 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 3x9 matrix 270 degrees clockwise and returns a 9x3 matrix
	static M_9x3 Rotate270(M_3x9 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 4 column vector 270 degrees clockwise and returns a 4 size row vector
	static RV_4 Rotate270(CV_4 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 4 row vector 270 degrees clockwise and returns a 4 size column vector
	static CV_4 Rotate270(RV_4 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 4x2 matrix 270 degrees clockwise and returns a 2x4 matrix
	static M_2x4 Rotate270(M_4x2 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 4x3 matrix 270 degrees clockwise and returns a 3x4 matrix
	static M_3x4 Rotate270(M_4x3 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 4x4 matrix 270 degrees clockwise and returns a 4x4 matrix
	static M_4x4 Rotate270(M_4x4 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 4x5 matrix 270 degrees clockwise and returns a 5x4 matrix
	static M_5x4 Rotate270(M_4x5 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 4x6 matrix 270 degrees clockwise and returns a 6x4 matrix
	static M_6x4 Rotate270(M_4x6 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 4x7 matrix 270 degrees clockwise and returns a 7x4 matrix
	static M_7x4 Rotate270(M_4x7 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 4x8 matrix 270 degrees clockwise and returns a 8x4 matrix
	static M_8x4 Rotate270(M_4x8 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 4x9 matrix 270 degrees clockwise and returns a 9x4 matrix
	static M_9x4 Rotate270(M_4x9 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 5 column vector 270 degrees clockwise and returns a 5 size row vector
	static RV_5 Rotate270(CV_5 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 5 row vector 270 degrees clockwise and returns a 5 size column vector
	static CV_5 Rotate270(RV_5 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 5x2 matrix 270 degrees clockwise and returns a 2x5 matrix
	static M_2x5 Rotate270(M_5x2 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 5x3 matrix 270 degrees clockwise and returns a 3x5 matrix
	static M_3x5 Rotate270(M_5x3 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 5x4 matrix 270 degrees clockwise and returns a 4x5 matrix
	static M_4x5 Rotate270(M_5x4 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 5x5 matrix 270 degrees clockwise and returns a 5x5 matrix
	static M_5x5 Rotate270(M_5x5 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 5x6 matrix 270 degrees clockwise and returns a 6x5 matrix
	static M_6x5 Rotate270(M_5x6 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 5x7 matrix 270 degrees clockwise and returns a 7x5 matrix
	static M_7x5 Rotate270(M_5x7 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 5x8 matrix 270 degrees clockwise and returns a 8x5 matrix
	static M_8x5 Rotate270(M_5x8 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 5x9 matrix 270 degrees clockwise and returns a 9x5 matrix
	static M_9x5 Rotate270(M_5x9 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 6 column vector 270 degrees clockwise and returns a 6 size row vector
	static RV_6 Rotate270(CV_6 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 6 row vector 270 degrees clockwise and returns a 6 size column vector
	static CV_6 Rotate270(RV_6 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 6x2 matrix 270 degrees clockwise and returns a 2x6 matrix
	static M_2x6 Rotate270(M_6x2 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 6x3 matrix 270 degrees clockwise and returns a 3x6 matrix
	static M_3x6 Rotate270(M_6x3 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 6x4 matrix 270 degrees clockwise and returns a 4x6 matrix
	static M_4x6 Rotate270(M_6x4 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 6x5 matrix 270 degrees clockwise and returns a 5x6 matrix
	static M_5x6 Rotate270(M_6x5 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 6x6 matrix 270 degrees clockwise and returns a 6x6 matrix
	static M_6x6 Rotate270(M_6x6 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 6x7 matrix 270 degrees clockwise and returns a 7x6 matrix
	static M_7x6 Rotate270(M_6x7 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 6x8 matrix 270 degrees clockwise and returns a 8x6 matrix
	static M_8x6 Rotate270(M_6x8 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 6x9 matrix 270 degrees clockwise and returns a 9x6 matrix
	static M_9x6 Rotate270(M_6x9 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 7 column vector 270 degrees clockwise and returns a 7 size row vector
	static RV_7 Rotate270(CV_7 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 7 row vector 270 degrees clockwise and returns a 7 size column vector
	static CV_7 Rotate270(RV_7 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 7x2 matrix 270 degrees clockwise and returns a 2x7 matrix
	static M_2x7 Rotate270(M_7x2 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 7x3 matrix 270 degrees clockwise and returns a 3x7 matrix
	static M_3x7 Rotate270(M_7x3 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 7x4 matrix 270 degrees clockwise and returns a 4x7 matrix
	static M_4x7 Rotate270(M_7x4 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 7x5 matrix 270 degrees clockwise and returns a 5x7 matrix
	static M_5x7 Rotate270(M_7x5 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 7x6 matrix 270 degrees clockwise and returns a 6x7 matrix
	static M_6x7 Rotate270(M_7x6 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 7x7 matrix 270 degrees clockwise and returns a 7x7 matrix
	static M_7x7 Rotate270(M_7x7 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 7x8 matrix 270 degrees clockwise and returns a 8x7 matrix
	static M_8x7 Rotate270(M_7x8 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 7x9 matrix 270 degrees clockwise and returns a 9x7 matrix
	static M_9x7 Rotate270(M_7x9 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 8 column vector 270 degrees clockwise and returns a 8 size row vector
	static RV_8 Rotate270(CV_8 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 8 row vector 270 degrees clockwise and returns a 8 size column vector
	static CV_8 Rotate270(RV_8 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 8x2 matrix 270 degrees clockwise and returns a 2x8 matrix
	static M_2x8 Rotate270(M_8x2 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 8x3 matrix 270 degrees clockwise and returns a 3x8 matrix
	static M_3x8 Rotate270(M_8x3 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 8x4 matrix 270 degrees clockwise and returns a 4x8 matrix
	static M_4x8 Rotate270(M_8x4 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 8x5 matrix 270 degrees clockwise and returns a 5x8 matrix
	static M_5x8 Rotate270(M_8x5 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 8x6 matrix 270 degrees clockwise and returns a 6x8 matrix
	static M_6x8 Rotate270(M_8x6 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 8x7 matrix 270 degrees clockwise and returns a 7x8 matrix
	static M_7x8 Rotate270(M_8x7 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 8x8 matrix 270 degrees clockwise and returns a 8x8 matrix
	static M_8x8 Rotate270(M_8x8 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 8x9 matrix 270 degrees clockwise and returns a 9x8 matrix
	static M_9x8 Rotate270(M_8x9 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 9 column vector 270 degrees clockwise and returns a 9 size row vector
	static RV_9 Rotate270(CV_9 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 9 row vector 270 degrees clockwise and returns a 9 size column vector
	static CV_9 Rotate270(RV_9 vector)
	{
		return 	ReflectVertical(Transpose(vector));
	}
	// rotates a 9x2 matrix 270 degrees clockwise and returns a 2x9 matrix
	static M_2x9 Rotate270(M_9x2 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 9x3 matrix 270 degrees clockwise and returns a 3x9 matrix
	static M_3x9 Rotate270(M_9x3 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 9x4 matrix 270 degrees clockwise and returns a 4x9 matrix
	static M_4x9 Rotate270(M_9x4 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 9x5 matrix 270 degrees clockwise and returns a 5x9 matrix
	static M_5x9 Rotate270(M_9x5 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 9x6 matrix 270 degrees clockwise and returns a 6x9 matrix
	static M_6x9 Rotate270(M_9x6 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 9x7 matrix 270 degrees clockwise and returns a 7x9 matrix
	static M_7x9 Rotate270(M_9x7 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 9x8 matrix 270 degrees clockwise and returns a 8x9 matrix
	static M_8x9 Rotate270(M_9x8 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}

	// rotates a 9x9 matrix 270 degrees clockwise and returns a 9x9 matrix
	static M_9x9 Rotate270(M_9x9 matrix)
	{
		return 	ReflectVertical(Transpose(matrix));
	}


	// duplicates a 2x2 matrix and returns a 2x2 matrix (for testing purposes only!)
	static M_2x2 Clone(M_2x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M2.N1,matrix.M2.N2 };
	}
	// duplicates a 2x3 matrix and returns a 2x3 matrix (for testing purposes only!)
	static M_2x3 Clone(M_2x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3 };
	}
	// duplicates a 2x4 matrix and returns a 2x4 matrix (for testing purposes only!)
	static M_2x4 Clone(M_2x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4 };
	}
	// duplicates a 2x5 matrix and returns a 2x5 matrix (for testing purposes only!)
	static M_2x5 Clone(M_2x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5 };
	}
	// duplicates a 2x6 matrix and returns a 2x6 matrix (for testing purposes only!)
	static M_2x6 Clone(M_2x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6 };
	}
	// duplicates a 2x7 matrix and returns a 2x7 matrix (for testing purposes only!)
	static M_2x7 Clone(M_2x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7 };
	}
	// duplicates a 2x8 matrix and returns a 2x8 matrix (for testing purposes only!)
	static M_2x8 Clone(M_2x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8 };
	}
	// duplicates a 2x9 matrix and returns a 2x9 matrix (for testing purposes only!)
	static M_2x9 Clone(M_2x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9 };
	}
	// duplicates a 3x2 matrix and returns a 3x2 matrix (for testing purposes only!)
	static M_3x2 Clone(M_3x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M2.N1,matrix.M2.N2,matrix.M3.N1,matrix.M3.N2 };
	}
	// duplicates a 3x3 matrix and returns a 3x3 matrix (for testing purposes only!)
	static M_3x3 Clone(M_3x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3 };
	}
	// duplicates a 3x4 matrix and returns a 3x4 matrix (for testing purposes only!)
	static M_3x4 Clone(M_3x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4 };
	}
	// duplicates a 3x5 matrix and returns a 3x5 matrix (for testing purposes only!)
	static M_3x5 Clone(M_3x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5 };
	}
	// duplicates a 3x6 matrix and returns a 3x6 matrix (for testing purposes only!)
	static M_3x6 Clone(M_3x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6 };
	}
	// duplicates a 3x7 matrix and returns a 3x7 matrix (for testing purposes only!)
	static M_3x7 Clone(M_3x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7 };
	}
	// duplicates a 3x8 matrix and returns a 3x8 matrix (for testing purposes only!)
	static M_3x8 Clone(M_3x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8 };
	}
	// duplicates a 3x9 matrix and returns a 3x9 matrix (for testing purposes only!)
	static M_3x9 Clone(M_3x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9 };
	}
	// duplicates a 4x2 matrix and returns a 4x2 matrix (for testing purposes only!)
	static M_4x2 Clone(M_4x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M2.N1,matrix.M2.N2,matrix.M3.N1,matrix.M3.N2,matrix.M4.N1,matrix.M4.N2 };
	}
	// duplicates a 4x3 matrix and returns a 4x3 matrix (for testing purposes only!)
	static M_4x3 Clone(M_4x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3 };
	}
	// duplicates a 4x4 matrix and returns a 4x4 matrix (for testing purposes only!)
	static M_4x4 Clone(M_4x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4 };
	}
	// duplicates a 4x5 matrix and returns a 4x5 matrix (for testing purposes only!)
	static M_4x5 Clone(M_4x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5 };
	}
	// duplicates a 4x6 matrix and returns a 4x6 matrix (for testing purposes only!)
	static M_4x6 Clone(M_4x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6 };
	}
	// duplicates a 4x7 matrix and returns a 4x7 matrix (for testing purposes only!)
	static M_4x7 Clone(M_4x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7 };
	}
	// duplicates a 4x8 matrix and returns a 4x8 matrix (for testing purposes only!)
	static M_4x8 Clone(M_4x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8 };
	}
	// duplicates a 4x9 matrix and returns a 4x9 matrix (for testing purposes only!)
	static M_4x9 Clone(M_4x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9 };
	}
	// duplicates a 5x2 matrix and returns a 5x2 matrix (for testing purposes only!)
	static M_5x2 Clone(M_5x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M2.N1,matrix.M2.N2,matrix.M3.N1,matrix.M3.N2,matrix.M4.N1,matrix.M4.N2,matrix.M5.N1,matrix.M5.N2 };
	}
	// duplicates a 5x3 matrix and returns a 5x3 matrix (for testing purposes only!)
	static M_5x3 Clone(M_5x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3 };
	}
	// duplicates a 5x4 matrix and returns a 5x4 matrix (for testing purposes only!)
	static M_5x4 Clone(M_5x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4 };
	}
	// duplicates a 5x5 matrix and returns a 5x5 matrix (for testing purposes only!)
	static M_5x5 Clone(M_5x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5 };
	}
	// duplicates a 5x6 matrix and returns a 5x6 matrix (for testing purposes only!)
	static M_5x6 Clone(M_5x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6 };
	}
	// duplicates a 5x7 matrix and returns a 5x7 matrix (for testing purposes only!)
	static M_5x7 Clone(M_5x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7 };
	}
	// duplicates a 5x8 matrix and returns a 5x8 matrix (for testing purposes only!)
	static M_5x8 Clone(M_5x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8 };
	}
	// duplicates a 5x9 matrix and returns a 5x9 matrix (for testing purposes only!)
	static M_5x9 Clone(M_5x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9 };
	}
	// duplicates a 6x2 matrix and returns a 6x2 matrix (for testing purposes only!)
	static M_6x2 Clone(M_6x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M2.N1,matrix.M2.N2,matrix.M3.N1,matrix.M3.N2,matrix.M4.N1,matrix.M4.N2,matrix.M5.N1,matrix.M5.N2,matrix.M6.N1,matrix.M6.N2 };
	}
	// duplicates a 6x3 matrix and returns a 6x3 matrix (for testing purposes only!)
	static M_6x3 Clone(M_6x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3 };
	}
	// duplicates a 6x4 matrix and returns a 6x4 matrix (for testing purposes only!)
	static M_6x4 Clone(M_6x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4 };
	}
	// duplicates a 6x5 matrix and returns a 6x5 matrix (for testing purposes only!)
	static M_6x5 Clone(M_6x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5 };
	}
	// duplicates a 6x6 matrix and returns a 6x6 matrix (for testing purposes only!)
	static M_6x6 Clone(M_6x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6 };
	}
	// duplicates a 6x7 matrix and returns a 6x7 matrix (for testing purposes only!)
	static M_6x7 Clone(M_6x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7 };
	}
	// duplicates a 6x8 matrix and returns a 6x8 matrix (for testing purposes only!)
	static M_6x8 Clone(M_6x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8 };
	}
	// duplicates a 6x9 matrix and returns a 6x9 matrix (for testing purposes only!)
	static M_6x9 Clone(M_6x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M6.N9 };
	}
	// duplicates a 7x2 matrix and returns a 7x2 matrix (for testing purposes only!)
	static M_7x2 Clone(M_7x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M2.N1,matrix.M2.N2,matrix.M3.N1,matrix.M3.N2,matrix.M4.N1,matrix.M4.N2,matrix.M5.N1,matrix.M5.N2,matrix.M6.N1,matrix.M6.N2,matrix.M7.N1,matrix.M7.N2 };
	}
	// duplicates a 7x3 matrix and returns a 7x3 matrix (for testing purposes only!)
	static M_7x3 Clone(M_7x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3 };
	}
	// duplicates a 7x4 matrix and returns a 7x4 matrix (for testing purposes only!)
	static M_7x4 Clone(M_7x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4 };
	}
	// duplicates a 7x5 matrix and returns a 7x5 matrix (for testing purposes only!)
	static M_7x5 Clone(M_7x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5 };
	}
	// duplicates a 7x6 matrix and returns a 7x6 matrix (for testing purposes only!)
	static M_7x6 Clone(M_7x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6 };
	}
	// duplicates a 7x7 matrix and returns a 7x7 matrix (for testing purposes only!)
	static M_7x7 Clone(M_7x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7 };
	}
	// duplicates a 7x8 matrix and returns a 7x8 matrix (for testing purposes only!)
	static M_7x8 Clone(M_7x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8 };
	}
	// duplicates a 7x9 matrix and returns a 7x9 matrix (for testing purposes only!)
	static M_7x9 Clone(M_7x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M6.N9,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M7.N9 };
	}
	// duplicates a 8x2 matrix and returns a 8x2 matrix (for testing purposes only!)
	static M_8x2 Clone(M_8x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M2.N1,matrix.M2.N2,matrix.M3.N1,matrix.M3.N2,matrix.M4.N1,matrix.M4.N2,matrix.M5.N1,matrix.M5.N2,matrix.M6.N1,matrix.M6.N2,matrix.M7.N1,matrix.M7.N2,matrix.M8.N1,matrix.M8.N2 };
	}
	// duplicates a 8x3 matrix and returns a 8x3 matrix (for testing purposes only!)
	static M_8x3 Clone(M_8x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3 };
	}
	// duplicates a 8x4 matrix and returns a 8x4 matrix (for testing purposes only!)
	static M_8x4 Clone(M_8x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4 };
	}
	// duplicates a 8x5 matrix and returns a 8x5 matrix (for testing purposes only!)
	static M_8x5 Clone(M_8x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5 };
	}
	// duplicates a 8x6 matrix and returns a 8x6 matrix (for testing purposes only!)
	static M_8x6 Clone(M_8x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6 };
	}
	// duplicates a 8x7 matrix and returns a 8x7 matrix (for testing purposes only!)
	static M_8x7 Clone(M_8x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7 };
	}
	// duplicates a 8x8 matrix and returns a 8x8 matrix (for testing purposes only!)
	static M_8x8 Clone(M_8x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M8.N8 };
	}
	// duplicates a 8x9 matrix and returns a 8x9 matrix (for testing purposes only!)
	static M_8x9 Clone(M_8x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M6.N9,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M7.N9,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M8.N8,matrix.M8.N9 };
	}
	// duplicates a 9x2 matrix and returns a 9x2 matrix (for testing purposes only!)
	static M_9x2 Clone(M_9x2 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M2.N1,matrix.M2.N2,matrix.M3.N1,matrix.M3.N2,matrix.M4.N1,matrix.M4.N2,matrix.M5.N1,matrix.M5.N2,matrix.M6.N1,matrix.M6.N2,matrix.M7.N1,matrix.M7.N2,matrix.M8.N1,matrix.M8.N2,matrix.M9.N1,matrix.M9.N2 };
	}
	// duplicates a 9x3 matrix and returns a 9x3 matrix (for testing purposes only!)
	static M_9x3 Clone(M_9x3 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M9.N1,matrix.M9.N2,matrix.M9.N3 };
	}
	// duplicates a 9x4 matrix and returns a 9x4 matrix (for testing purposes only!)
	static M_9x4 Clone(M_9x4 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4 };
	}
	// duplicates a 9x5 matrix and returns a 9x5 matrix (for testing purposes only!)
	static M_9x5 Clone(M_9x5 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5 };
	}
	// duplicates a 9x6 matrix and returns a 9x6 matrix (for testing purposes only!)
	static M_9x6 Clone(M_9x6 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M9.N6 };
	}
	// duplicates a 9x7 matrix and returns a 9x7 matrix (for testing purposes only!)
	static M_9x7 Clone(M_9x7 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M9.N6,matrix.M9.N7 };
	}
	// duplicates a 9x8 matrix and returns a 9x8 matrix (for testing purposes only!)
	static M_9x8 Clone(M_9x8 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M8.N8,matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M9.N6,matrix.M9.N7,matrix.M9.N8 };
	}
	// duplicates a 9x9 matrix and returns a 9x9 matrix (for testing purposes only!)
	static M_9x9 Clone(M_9x9 matrix)
	{
		return 	{ matrix.M1.N1,matrix.M1.N2,matrix.M1.N3,matrix.M1.N4,matrix.M1.N5,matrix.M1.N6,matrix.M1.N7,matrix.M1.N8,matrix.M1.N9,matrix.M2.N1,matrix.M2.N2,matrix.M2.N3,matrix.M2.N4,matrix.M2.N5,matrix.M2.N6,matrix.M2.N7,matrix.M2.N8,matrix.M2.N9,matrix.M3.N1,matrix.M3.N2,matrix.M3.N3,matrix.M3.N4,matrix.M3.N5,matrix.M3.N6,matrix.M3.N7,matrix.M3.N8,matrix.M3.N9,matrix.M4.N1,matrix.M4.N2,matrix.M4.N3,matrix.M4.N4,matrix.M4.N5,matrix.M4.N6,matrix.M4.N7,matrix.M4.N8,matrix.M4.N9,matrix.M5.N1,matrix.M5.N2,matrix.M5.N3,matrix.M5.N4,matrix.M5.N5,matrix.M5.N6,matrix.M5.N7,matrix.M5.N8,matrix.M5.N9,matrix.M6.N1,matrix.M6.N2,matrix.M6.N3,matrix.M6.N4,matrix.M6.N5,matrix.M6.N6,matrix.M6.N7,matrix.M6.N8,matrix.M6.N9,matrix.M7.N1,matrix.M7.N2,matrix.M7.N3,matrix.M7.N4,matrix.M7.N5,matrix.M7.N6,matrix.M7.N7,matrix.M7.N8,matrix.M7.N9,matrix.M8.N1,matrix.M8.N2,matrix.M8.N3,matrix.M8.N4,matrix.M8.N5,matrix.M8.N6,matrix.M8.N7,matrix.M8.N8,matrix.M8.N9,matrix.M9.N1,matrix.M9.N2,matrix.M9.N3,matrix.M9.N4,matrix.M9.N5,matrix.M9.N6,matrix.M9.N7,matrix.M9.N8,matrix.M9.N9 };
	}

	// transposes a 2 row vector to column 2 size column vector
	static RV_2 MultiplyScalar(double value, RV_2 vector)
	{
		return 	{ vector.N1 * value,vector.N2 * value };
	}
	// transposes a 2 column vector and returns a 2 size row vector
	static CV_2 MultiplyScalar(double value, CV_2 vector)
	{
		return 	{ vector.M1 * value,vector.M2 * value };
	}
	// multiplies all values in a 2x2 matrix by a single value once, and returns a 2x2 matrix 
	static M_2x2 MultiplyScalar(double value, M_2x2 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M2.N1 * value,matrix.M2.N2 * value };
	}
	// multiplies all values in a 2x3 matrix by a single value once, and returns a 2x3 matrix 
	static M_2x3 MultiplyScalar(double value, M_2x3 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value };
	}
	// multiplies all values in a 2x4 matrix by a single value once, and returns a 2x4 matrix 
	static M_2x4 MultiplyScalar(double value, M_2x4 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value };
	}
	// multiplies all values in a 2x5 matrix by a single value once, and returns a 2x5 matrix 
	static M_2x5 MultiplyScalar(double value, M_2x5 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value };
	}
	// multiplies all values in a 2x6 matrix by a single value once, and returns a 2x6 matrix 
	static M_2x6 MultiplyScalar(double value, M_2x6 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value };
	}
	// multiplies all values in a 2x7 matrix by a single value once, and returns a 2x7 matrix 
	static M_2x7 MultiplyScalar(double value, M_2x7 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value };
	}
	// multiplies all values in a 2x8 matrix by a single value once, and returns a 2x8 matrix 
	static M_2x8 MultiplyScalar(double value, M_2x8 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value };
	}
	// multiplies all values in a 2x9 matrix by a single value once, and returns a 2x9 matrix 
	static M_2x9 MultiplyScalar(double value, M_2x9 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M1.N9 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M2.N9 * value };
	}
	// transposes a 3 row vector to column 3 size column vector
	static RV_3 MultiplyScalar(double value, RV_3 vector)
	{
		return 	{ vector.N1 * value,vector.N2 * value,vector.N3 * value };
	}
	// transposes a 3 column vector and returns a 3 size row vector
	static CV_3 MultiplyScalar(double value, CV_3 vector)
	{
		return 	{ vector.M1 * value,vector.M2 * value,vector.M3 * value };
	}
	// multiplies all values in a 3x2 matrix by a single value once, and returns a 3x2 matrix 
	static M_3x2 MultiplyScalar(double value, M_3x2 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M3.N1 * value,matrix.M3.N2 * value };
	}
	// multiplies all values in a 3x3 matrix by a single value once, and returns a 3x3 matrix 
	static M_3x3 MultiplyScalar(double value, M_3x3 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value };
	}
	// multiplies all values in a 3x4 matrix by a single value once, and returns a 3x4 matrix 
	static M_3x4 MultiplyScalar(double value, M_3x4 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value };
	}
	// multiplies all values in a 3x5 matrix by a single value once, and returns a 3x5 matrix 
	static M_3x5 MultiplyScalar(double value, M_3x5 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value };
	}
	// multiplies all values in a 3x6 matrix by a single value once, and returns a 3x6 matrix 
	static M_3x6 MultiplyScalar(double value, M_3x6 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value };
	}
	// multiplies all values in a 3x7 matrix by a single value once, and returns a 3x7 matrix 
	static M_3x7 MultiplyScalar(double value, M_3x7 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value };
	}
	// multiplies all values in a 3x8 matrix by a single value once, and returns a 3x8 matrix 
	static M_3x8 MultiplyScalar(double value, M_3x8 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value };
	}
	// multiplies all values in a 3x9 matrix by a single value once, and returns a 3x9 matrix 
	static M_3x9 MultiplyScalar(double value, M_3x9 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M1.N9 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M2.N9 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M3.N9 * value };
	}
	// transposes a 4 row vector to column 4 size column vector
	static RV_4 MultiplyScalar(double value, RV_4 vector)
	{
		return 	{ vector.N1 * value,vector.N2 * value,vector.N3 * value,vector.N4 * value };
	}
	// transposes a 4 column vector and returns a 4 size row vector
	static CV_4 MultiplyScalar(double value, CV_4 vector)
	{
		return 	{ vector.M1 * value,vector.M2 * value,vector.M3 * value,vector.M4 * value };
	}
	// multiplies all values in a 4x2 matrix by a single value once, and returns a 4x2 matrix 
	static M_4x2 MultiplyScalar(double value, M_4x2 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M4.N1 * value,matrix.M4.N2 * value };
	}
	// multiplies all values in a 4x3 matrix by a single value once, and returns a 4x3 matrix 
	static M_4x3 MultiplyScalar(double value, M_4x3 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value };
	}
	// multiplies all values in a 4x4 matrix by a single value once, and returns a 4x4 matrix 
	static M_4x4 MultiplyScalar(double value, M_4x4 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value };
	}
	// multiplies all values in a 4x5 matrix by a single value once, and returns a 4x5 matrix 
	static M_4x5 MultiplyScalar(double value, M_4x5 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value };
	}
	// multiplies all values in a 4x6 matrix by a single value once, and returns a 4x6 matrix 
	static M_4x6 MultiplyScalar(double value, M_4x6 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value };
	}
	// multiplies all values in a 4x7 matrix by a single value once, and returns a 4x7 matrix 
	static M_4x7 MultiplyScalar(double value, M_4x7 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value };
	}
	// multiplies all values in a 4x8 matrix by a single value once, and returns a 4x8 matrix 
	static M_4x8 MultiplyScalar(double value, M_4x8 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value };
	}
	// multiplies all values in a 4x9 matrix by a single value once, and returns a 4x9 matrix 
	static M_4x9 MultiplyScalar(double value, M_4x9 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M1.N9 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M2.N9 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M3.N9 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M4.N9 * value };
	}
	// transposes a 5 row vector to column 5 size column vector
	static RV_5 MultiplyScalar(double value, RV_5 vector)
	{
		return 	{ vector.N1 * value,vector.N2 * value,vector.N3 * value,vector.N4 * value,vector.N5 * value };
	}
	// transposes a 5 column vector and returns a 5 size row vector
	static CV_5 MultiplyScalar(double value, CV_5 vector)
	{
		return 	{ vector.M1 * value,vector.M2 * value,vector.M3 * value,vector.M4 * value,vector.M5 * value };
	}
	// multiplies all values in a 5x2 matrix by a single value once, and returns a 5x2 matrix 
	static M_5x2 MultiplyScalar(double value, M_5x2 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M5.N1 * value,matrix.M5.N2 * value };
	}
	// multiplies all values in a 5x3 matrix by a single value once, and returns a 5x3 matrix 
	static M_5x3 MultiplyScalar(double value, M_5x3 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value };
	}
	// multiplies all values in a 5x4 matrix by a single value once, and returns a 5x4 matrix 
	static M_5x4 MultiplyScalar(double value, M_5x4 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value };
	}
	// multiplies all values in a 5x5 matrix by a single value once, and returns a 5x5 matrix 
	static M_5x5 MultiplyScalar(double value, M_5x5 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value };
	}
	// multiplies all values in a 5x6 matrix by a single value once, and returns a 5x6 matrix 
	static M_5x6 MultiplyScalar(double value, M_5x6 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value };
	}
	// multiplies all values in a 5x7 matrix by a single value once, and returns a 5x7 matrix 
	static M_5x7 MultiplyScalar(double value, M_5x7 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value };
	}
	// multiplies all values in a 5x8 matrix by a single value once, and returns a 5x8 matrix 
	static M_5x8 MultiplyScalar(double value, M_5x8 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value };
	}
	// multiplies all values in a 5x9 matrix by a single value once, and returns a 5x9 matrix 
	static M_5x9 MultiplyScalar(double value, M_5x9 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M1.N9 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M2.N9 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M3.N9 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M4.N9 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M5.N9 * value };
	}
	// transposes a 6 row vector to column 6 size column vector
	static RV_6 MultiplyScalar(double value, RV_6 vector)
	{
		return 	{ vector.N1 * value,vector.N2 * value,vector.N3 * value,vector.N4 * value,vector.N5 * value,vector.N6 * value };
	}
	// transposes a 6 column vector and returns a 6 size row vector
	static CV_6 MultiplyScalar(double value, CV_6 vector)
	{
		return 	{ vector.M1 * value,vector.M2 * value,vector.M3 * value,vector.M4 * value,vector.M5 * value,vector.M6 * value };
	}
	// multiplies all values in a 6x2 matrix by a single value once, and returns a 6x2 matrix 
	static M_6x2 MultiplyScalar(double value, M_6x2 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M6.N1 * value,matrix.M6.N2 * value };
	}
	// multiplies all values in a 6x3 matrix by a single value once, and returns a 6x3 matrix 
	static M_6x3 MultiplyScalar(double value, M_6x3 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value };
	}
	// multiplies all values in a 6x4 matrix by a single value once, and returns a 6x4 matrix 
	static M_6x4 MultiplyScalar(double value, M_6x4 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value };
	}
	// multiplies all values in a 6x5 matrix by a single value once, and returns a 6x5 matrix 
	static M_6x5 MultiplyScalar(double value, M_6x5 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value };
	}
	// multiplies all values in a 6x6 matrix by a single value once, and returns a 6x6 matrix 
	static M_6x6 MultiplyScalar(double value, M_6x6 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value };
	}
	// multiplies all values in a 6x7 matrix by a single value once, and returns a 6x7 matrix 
	static M_6x7 MultiplyScalar(double value, M_6x7 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value };
	}
	// multiplies all values in a 6x8 matrix by a single value once, and returns a 6x8 matrix 
	static M_6x8 MultiplyScalar(double value, M_6x8 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M6.N8 * value };
	}
	// multiplies all values in a 6x9 matrix by a single value once, and returns a 6x9 matrix 
	static M_6x9 MultiplyScalar(double value, M_6x9 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M1.N9 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M2.N9 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M3.N9 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M4.N9 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M5.N9 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M6.N8 * value,matrix.M6.N9 * value };
	}
	// transposes a 7 row vector to column 7 size column vector
	static RV_7 MultiplyScalar(double value, RV_7 vector)
	{
		return 	{ vector.N1 * value,vector.N2 * value,vector.N3 * value,vector.N4 * value,vector.N5 * value,vector.N6 * value,vector.N7 * value };
	}
	// transposes a 7 column vector and returns a 7 size row vector
	static CV_7 MultiplyScalar(double value, CV_7 vector)
	{
		return 	{ vector.M1 * value,vector.M2 * value,vector.M3 * value,vector.M4 * value,vector.M5 * value,vector.M6 * value,vector.M7 * value };
	}
	// multiplies all values in a 7x2 matrix by a single value once, and returns a 7x2 matrix 
	static M_7x2 MultiplyScalar(double value, M_7x2 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M7.N1 * value,matrix.M7.N2 * value };
	}
	// multiplies all values in a 7x3 matrix by a single value once, and returns a 7x3 matrix 
	static M_7x3 MultiplyScalar(double value, M_7x3 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value };
	}
	// multiplies all values in a 7x4 matrix by a single value once, and returns a 7x4 matrix 
	static M_7x4 MultiplyScalar(double value, M_7x4 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value };
	}
	// multiplies all values in a 7x5 matrix by a single value once, and returns a 7x5 matrix 
	static M_7x5 MultiplyScalar(double value, M_7x5 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value };
	}
	// multiplies all values in a 7x6 matrix by a single value once, and returns a 7x6 matrix 
	static M_7x6 MultiplyScalar(double value, M_7x6 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value };
	}
	// multiplies all values in a 7x7 matrix by a single value once, and returns a 7x7 matrix 
	static M_7x7 MultiplyScalar(double value, M_7x7 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value };
	}
	// multiplies all values in a 7x8 matrix by a single value once, and returns a 7x8 matrix 
	static M_7x8 MultiplyScalar(double value, M_7x8 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M6.N8 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value,matrix.M7.N8 * value };
	}
	// multiplies all values in a 7x9 matrix by a single value once, and returns a 7x9 matrix 
	static M_7x9 MultiplyScalar(double value, M_7x9 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M1.N9 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M2.N9 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M3.N9 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M4.N9 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M5.N9 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M6.N8 * value,matrix.M6.N9 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value,matrix.M7.N8 * value,matrix.M7.N9 * value };
	}
	// transposes a 8 row vector to column 8 size column vector
	static RV_8 MultiplyScalar(double value, RV_8 vector)
	{
		return 	{ vector.N1 * value,vector.N2 * value,vector.N3 * value,vector.N4 * value,vector.N5 * value,vector.N6 * value,vector.N7 * value,vector.N8 * value };
	}
	// transposes a 8 column vector and returns a 8 size row vector
	static CV_8 MultiplyScalar(double value, CV_8 vector)
	{
		return 	{ vector.M1 * value,vector.M2 * value,vector.M3 * value,vector.M4 * value,vector.M5 * value,vector.M6 * value,vector.M7 * value,vector.M8 * value };
	}
	// multiplies all values in a 8x2 matrix by a single value once, and returns a 8x2 matrix 
	static M_8x2 MultiplyScalar(double value, M_8x2 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M8.N1 * value,matrix.M8.N2 * value };
	}
	// multiplies all values in a 8x3 matrix by a single value once, and returns a 8x3 matrix 
	static M_8x3 MultiplyScalar(double value, M_8x3 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value };
	}
	// multiplies all values in a 8x4 matrix by a single value once, and returns a 8x4 matrix 
	static M_8x4 MultiplyScalar(double value, M_8x4 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value };
	}
	// multiplies all values in a 8x5 matrix by a single value once, and returns a 8x5 matrix 
	static M_8x5 MultiplyScalar(double value, M_8x5 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value };
	}
	// multiplies all values in a 8x6 matrix by a single value once, and returns a 8x6 matrix 
	static M_8x6 MultiplyScalar(double value, M_8x6 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M8.N6 * value };
	}
	// multiplies all values in a 8x7 matrix by a single value once, and returns a 8x7 matrix 
	static M_8x7 MultiplyScalar(double value, M_8x7 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M8.N6 * value,matrix.M8.N7 * value };
	}
	// multiplies all values in a 8x8 matrix by a single value once, and returns a 8x8 matrix 
	static M_8x8 MultiplyScalar(double value, M_8x8 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M6.N8 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value,matrix.M7.N8 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M8.N6 * value,matrix.M8.N7 * value,matrix.M8.N8 * value };
	}
	// multiplies all values in a 8x9 matrix by a single value once, and returns a 8x9 matrix 
	static M_8x9 MultiplyScalar(double value, M_8x9 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M1.N9 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M2.N9 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M3.N9 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M4.N9 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M5.N9 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M6.N8 * value,matrix.M6.N9 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value,matrix.M7.N8 * value,matrix.M7.N9 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M8.N6 * value,matrix.M8.N7 * value,matrix.M8.N8 * value,matrix.M8.N9 * value };
	}
	// transposes a 9 row vector to column 9 size column vector
	static RV_9 MultiplyScalar(double value, RV_9 vector)
	{
		return 	{ vector.N1 * value,vector.N2 * value,vector.N3 * value,vector.N4 * value,vector.N5 * value,vector.N6 * value,vector.N7 * value,vector.N8 * value,vector.N9 * value };
	}
	// transposes a 9 column vector and returns a 9 size row vector
	static CV_9 MultiplyScalar(double value, CV_9 vector)
	{
		return 	{ vector.M1 * value,vector.M2 * value,vector.M3 * value,vector.M4 * value,vector.M5 * value,vector.M6 * value,vector.M7 * value,vector.M8 * value,vector.M9 * value };
	}
	// multiplies all values in a 9x2 matrix by a single value once, and returns a 9x2 matrix 
	static M_9x2 MultiplyScalar(double value, M_9x2 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M9.N1 * value,matrix.M9.N2 * value };
	}
	// multiplies all values in a 9x3 matrix by a single value once, and returns a 9x3 matrix 
	static M_9x3 MultiplyScalar(double value, M_9x3 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M9.N1 * value,matrix.M9.N2 * value,matrix.M9.N3 * value };
	}
	// multiplies all values in a 9x4 matrix by a single value once, and returns a 9x4 matrix 
	static M_9x4 MultiplyScalar(double value, M_9x4 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M9.N1 * value,matrix.M9.N2 * value,matrix.M9.N3 * value,matrix.M9.N4 * value };
	}
	// multiplies all values in a 9x5 matrix by a single value once, and returns a 9x5 matrix 
	static M_9x5 MultiplyScalar(double value, M_9x5 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M9.N1 * value,matrix.M9.N2 * value,matrix.M9.N3 * value,matrix.M9.N4 * value,matrix.M9.N5 * value };
	}
	// multiplies all values in a 9x6 matrix by a single value once, and returns a 9x6 matrix 
	static M_9x6 MultiplyScalar(double value, M_9x6 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M8.N6 * value,matrix.M9.N1 * value,matrix.M9.N2 * value,matrix.M9.N3 * value,matrix.M9.N4 * value,matrix.M9.N5 * value,matrix.M9.N6 * value };
	}
	// multiplies all values in a 9x7 matrix by a single value once, and returns a 9x7 matrix 
	static M_9x7 MultiplyScalar(double value, M_9x7 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M8.N6 * value,matrix.M8.N7 * value,matrix.M9.N1 * value,matrix.M9.N2 * value,matrix.M9.N3 * value,matrix.M9.N4 * value,matrix.M9.N5 * value,matrix.M9.N6 * value,matrix.M9.N7 * value };
	}
	// multiplies all values in a 9x8 matrix by a single value once, and returns a 9x8 matrix 
	static M_9x8 MultiplyScalar(double value, M_9x8 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M6.N8 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value,matrix.M7.N8 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M8.N6 * value,matrix.M8.N7 * value,matrix.M8.N8 * value,matrix.M9.N1 * value,matrix.M9.N2 * value,matrix.M9.N3 * value,matrix.M9.N4 * value,matrix.M9.N5 * value,matrix.M9.N6 * value,matrix.M9.N7 * value,matrix.M9.N8 * value };
	}
	// multiplies all values in a 9x9 matrix by a single value once, and returns a 9x9 matrix 
	static M_9x9 MultiplyScalar(double value, M_9x9 matrix)
	{
		return 	{ matrix.M1.N1 * value,matrix.M1.N2 * value,matrix.M1.N3 * value,matrix.M1.N4 * value,matrix.M1.N5 * value,matrix.M1.N6 * value,matrix.M1.N7 * value,matrix.M1.N8 * value,matrix.M1.N9 * value,matrix.M2.N1 * value,matrix.M2.N2 * value,matrix.M2.N3 * value,matrix.M2.N4 * value,matrix.M2.N5 * value,matrix.M2.N6 * value,matrix.M2.N7 * value,matrix.M2.N8 * value,matrix.M2.N9 * value,matrix.M3.N1 * value,matrix.M3.N2 * value,matrix.M3.N3 * value,matrix.M3.N4 * value,matrix.M3.N5 * value,matrix.M3.N6 * value,matrix.M3.N7 * value,matrix.M3.N8 * value,matrix.M3.N9 * value,matrix.M4.N1 * value,matrix.M4.N2 * value,matrix.M4.N3 * value,matrix.M4.N4 * value,matrix.M4.N5 * value,matrix.M4.N6 * value,matrix.M4.N7 * value,matrix.M4.N8 * value,matrix.M4.N9 * value,matrix.M5.N1 * value,matrix.M5.N2 * value,matrix.M5.N3 * value,matrix.M5.N4 * value,matrix.M5.N5 * value,matrix.M5.N6 * value,matrix.M5.N7 * value,matrix.M5.N8 * value,matrix.M5.N9 * value,matrix.M6.N1 * value,matrix.M6.N2 * value,matrix.M6.N3 * value,matrix.M6.N4 * value,matrix.M6.N5 * value,matrix.M6.N6 * value,matrix.M6.N7 * value,matrix.M6.N8 * value,matrix.M6.N9 * value,matrix.M7.N1 * value,matrix.M7.N2 * value,matrix.M7.N3 * value,matrix.M7.N4 * value,matrix.M7.N5 * value,matrix.M7.N6 * value,matrix.M7.N7 * value,matrix.M7.N8 * value,matrix.M7.N9 * value,matrix.M8.N1 * value,matrix.M8.N2 * value,matrix.M8.N3 * value,matrix.M8.N4 * value,matrix.M8.N5 * value,matrix.M8.N6 * value,matrix.M8.N7 * value,matrix.M8.N8 * value,matrix.M8.N9 * value,matrix.M9.N1 * value,matrix.M9.N2 * value,matrix.M9.N3 * value,matrix.M9.N4 * value,matrix.M9.N5 * value,matrix.M9.N6 * value,matrix.M9.N7 * value,matrix.M9.N8 * value,matrix.M9.N9 * value };
	}



	// calculates the dot product of a 2(left) row vector and a 2(right) row vector, and returns a double
	static double DotProduct(RV_2 left, RV_2 right)
	{
		return left.N1 * right.N1 + left.N2 * right.N2;
	}



	// calculates the dot product of a 2(left) column vector and a 2(right) column vector, and returns a double
	static double DotProduct(CV_2 left, CV_2 right)
	{
		return left.M1 * right.M1 + left.M2 * right.M2;
	}



	// calculates the dot product of a 2(left) row vector and a 2(right) column vector, and returns a double
	static double DotProduct(RV_2 left, CV_2 right)
	{
		return left.N1 * right.M1 + left.N2 * right.M2;
	}


	// calculates the dot product of a 2x2(left) matrix and a 2x2(right) matrix, and returns a 2x2 matrix 
	static M_2x2 DotProduct(M_2x2 left, M_2x2 right)
	{

		M_2x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2) };
	}


	// calculates the dot product of a 2x2(left) matrix and a 2x3(right) matrix, and returns a 2x3 matrix 
	static M_2x3 DotProduct(M_2x2 left, M_2x3 right)
	{

		M_3x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3) };
	}


	// calculates the dot product of a 2x2(left) matrix and a 2x4(right) matrix, and returns a 2x4 matrix 
	static M_2x4 DotProduct(M_2x2 left, M_2x4 right)
	{

		M_4x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4) };
	}


	// calculates the dot product of a 2x2(left) matrix and a 2x5(right) matrix, and returns a 2x5 matrix 
	static M_2x5 DotProduct(M_2x2 left, M_2x5 right)
	{

		M_5x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5) };
	}


	// calculates the dot product of a 2x2(left) matrix and a 2x6(right) matrix, and returns a 2x6 matrix 
	static M_2x6 DotProduct(M_2x2 left, M_2x6 right)
	{

		M_6x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6) };
	}


	// calculates the dot product of a 2x2(left) matrix and a 2x7(right) matrix, and returns a 2x7 matrix 
	static M_2x7 DotProduct(M_2x2 left, M_2x7 right)
	{

		M_7x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7) };
	}


	// calculates the dot product of a 2x2(left) matrix and a 2x8(right) matrix, and returns a 2x8 matrix 
	static M_2x8 DotProduct(M_2x2 left, M_2x8 right)
	{

		M_8x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8) };
	}


	// calculates the dot product of a 2x2(left) matrix and a 2x9(right) matrix, and returns a 2x9 matrix 
	static M_2x9 DotProduct(M_2x2 left, M_2x9 right)
	{

		M_9x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9) };
	}


	// calculates the dot product of a 2x3(left) matrix and a 3x2(right) matrix, and returns a 2x2 matrix 
	static M_2x2 DotProduct(M_2x3 left, M_3x2 right)
	{

		M_2x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2) };
	}


	// calculates the dot product of a 2x3(left) matrix and a 3x3(right) matrix, and returns a 2x3 matrix 
	static M_2x3 DotProduct(M_2x3 left, M_3x3 right)
	{

		M_3x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3) };
	}


	// calculates the dot product of a 2x3(left) matrix and a 3x4(right) matrix, and returns a 2x4 matrix 
	static M_2x4 DotProduct(M_2x3 left, M_3x4 right)
	{

		M_4x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4) };
	}


	// calculates the dot product of a 2x3(left) matrix and a 3x5(right) matrix, and returns a 2x5 matrix 
	static M_2x5 DotProduct(M_2x3 left, M_3x5 right)
	{

		M_5x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5) };
	}


	// calculates the dot product of a 2x3(left) matrix and a 3x6(right) matrix, and returns a 2x6 matrix 
	static M_2x6 DotProduct(M_2x3 left, M_3x6 right)
	{

		M_6x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6) };
	}


	// calculates the dot product of a 2x3(left) matrix and a 3x7(right) matrix, and returns a 2x7 matrix 
	static M_2x7 DotProduct(M_2x3 left, M_3x7 right)
	{

		M_7x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7) };
	}


	// calculates the dot product of a 2x3(left) matrix and a 3x8(right) matrix, and returns a 2x8 matrix 
	static M_2x8 DotProduct(M_2x3 left, M_3x8 right)
	{

		M_8x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8) };
	}


	// calculates the dot product of a 2x3(left) matrix and a 3x9(right) matrix, and returns a 2x9 matrix 
	static M_2x9 DotProduct(M_2x3 left, M_3x9 right)
	{

		M_9x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9) };
	}


	// calculates the dot product of a 2x4(left) matrix and a 4x2(right) matrix, and returns a 2x2 matrix 
	static M_2x2 DotProduct(M_2x4 left, M_4x2 right)
	{

		M_2x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2) };
	}


	// calculates the dot product of a 2x4(left) matrix and a 4x3(right) matrix, and returns a 2x3 matrix 
	static M_2x3 DotProduct(M_2x4 left, M_4x3 right)
	{

		M_3x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3) };
	}


	// calculates the dot product of a 2x4(left) matrix and a 4x4(right) matrix, and returns a 2x4 matrix 
	static M_2x4 DotProduct(M_2x4 left, M_4x4 right)
	{

		M_4x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4) };
	}


	// calculates the dot product of a 2x4(left) matrix and a 4x5(right) matrix, and returns a 2x5 matrix 
	static M_2x5 DotProduct(M_2x4 left, M_4x5 right)
	{

		M_5x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5) };
	}


	// calculates the dot product of a 2x4(left) matrix and a 4x6(right) matrix, and returns a 2x6 matrix 
	static M_2x6 DotProduct(M_2x4 left, M_4x6 right)
	{

		M_6x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6) };
	}


	// calculates the dot product of a 2x4(left) matrix and a 4x7(right) matrix, and returns a 2x7 matrix 
	static M_2x7 DotProduct(M_2x4 left, M_4x7 right)
	{

		M_7x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7) };
	}


	// calculates the dot product of a 2x4(left) matrix and a 4x8(right) matrix, and returns a 2x8 matrix 
	static M_2x8 DotProduct(M_2x4 left, M_4x8 right)
	{

		M_8x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8) };
	}


	// calculates the dot product of a 2x4(left) matrix and a 4x9(right) matrix, and returns a 2x9 matrix 
	static M_2x9 DotProduct(M_2x4 left, M_4x9 right)
	{

		M_9x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9) };
	}


	// calculates the dot product of a 2x5(left) matrix and a 5x2(right) matrix, and returns a 2x2 matrix 
	static M_2x2 DotProduct(M_2x5 left, M_5x2 right)
	{

		M_2x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2) };
	}


	// calculates the dot product of a 2x5(left) matrix and a 5x3(right) matrix, and returns a 2x3 matrix 
	static M_2x3 DotProduct(M_2x5 left, M_5x3 right)
	{

		M_3x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3) };
	}


	// calculates the dot product of a 2x5(left) matrix and a 5x4(right) matrix, and returns a 2x4 matrix 
	static M_2x4 DotProduct(M_2x5 left, M_5x4 right)
	{

		M_4x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4) };
	}


	// calculates the dot product of a 2x5(left) matrix and a 5x5(right) matrix, and returns a 2x5 matrix 
	static M_2x5 DotProduct(M_2x5 left, M_5x5 right)
	{

		M_5x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5) };
	}


	// calculates the dot product of a 2x5(left) matrix and a 5x6(right) matrix, and returns a 2x6 matrix 
	static M_2x6 DotProduct(M_2x5 left, M_5x6 right)
	{

		M_6x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6) };
	}


	// calculates the dot product of a 2x5(left) matrix and a 5x7(right) matrix, and returns a 2x7 matrix 
	static M_2x7 DotProduct(M_2x5 left, M_5x7 right)
	{

		M_7x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7) };
	}


	// calculates the dot product of a 2x5(left) matrix and a 5x8(right) matrix, and returns a 2x8 matrix 
	static M_2x8 DotProduct(M_2x5 left, M_5x8 right)
	{

		M_8x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8) };
	}


	// calculates the dot product of a 2x5(left) matrix and a 5x9(right) matrix, and returns a 2x9 matrix 
	static M_2x9 DotProduct(M_2x5 left, M_5x9 right)
	{

		M_9x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9) };
	}


	// calculates the dot product of a 2x6(left) matrix and a 6x2(right) matrix, and returns a 2x2 matrix 
	static M_2x2 DotProduct(M_2x6 left, M_6x2 right)
	{

		M_2x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2) };
	}


	// calculates the dot product of a 2x6(left) matrix and a 6x3(right) matrix, and returns a 2x3 matrix 
	static M_2x3 DotProduct(M_2x6 left, M_6x3 right)
	{

		M_3x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3) };
	}


	// calculates the dot product of a 2x6(left) matrix and a 6x4(right) matrix, and returns a 2x4 matrix 
	static M_2x4 DotProduct(M_2x6 left, M_6x4 right)
	{

		M_4x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4) };
	}


	// calculates the dot product of a 2x6(left) matrix and a 6x5(right) matrix, and returns a 2x5 matrix 
	static M_2x5 DotProduct(M_2x6 left, M_6x5 right)
	{

		M_5x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5) };
	}


	// calculates the dot product of a 2x6(left) matrix and a 6x6(right) matrix, and returns a 2x6 matrix 
	static M_2x6 DotProduct(M_2x6 left, M_6x6 right)
	{

		M_6x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6) };
	}


	// calculates the dot product of a 2x6(left) matrix and a 6x7(right) matrix, and returns a 2x7 matrix 
	static M_2x7 DotProduct(M_2x6 left, M_6x7 right)
	{

		M_7x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7) };
	}


	// calculates the dot product of a 2x6(left) matrix and a 6x8(right) matrix, and returns a 2x8 matrix 
	static M_2x8 DotProduct(M_2x6 left, M_6x8 right)
	{

		M_8x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8) };
	}


	// calculates the dot product of a 2x6(left) matrix and a 6x9(right) matrix, and returns a 2x9 matrix 
	static M_2x9 DotProduct(M_2x6 left, M_6x9 right)
	{

		M_9x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9) };
	}


	// calculates the dot product of a 2x7(left) matrix and a 7x2(right) matrix, and returns a 2x2 matrix 
	static M_2x2 DotProduct(M_2x7 left, M_7x2 right)
	{

		M_2x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2) };
	}


	// calculates the dot product of a 2x7(left) matrix and a 7x3(right) matrix, and returns a 2x3 matrix 
	static M_2x3 DotProduct(M_2x7 left, M_7x3 right)
	{

		M_3x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3) };
	}


	// calculates the dot product of a 2x7(left) matrix and a 7x4(right) matrix, and returns a 2x4 matrix 
	static M_2x4 DotProduct(M_2x7 left, M_7x4 right)
	{

		M_4x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4) };
	}


	// calculates the dot product of a 2x7(left) matrix and a 7x5(right) matrix, and returns a 2x5 matrix 
	static M_2x5 DotProduct(M_2x7 left, M_7x5 right)
	{

		M_5x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5) };
	}


	// calculates the dot product of a 2x7(left) matrix and a 7x6(right) matrix, and returns a 2x6 matrix 
	static M_2x6 DotProduct(M_2x7 left, M_7x6 right)
	{

		M_6x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6) };
	}


	// calculates the dot product of a 2x7(left) matrix and a 7x7(right) matrix, and returns a 2x7 matrix 
	static M_2x7 DotProduct(M_2x7 left, M_7x7 right)
	{

		M_7x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7) };
	}


	// calculates the dot product of a 2x7(left) matrix and a 7x8(right) matrix, and returns a 2x8 matrix 
	static M_2x8 DotProduct(M_2x7 left, M_7x8 right)
	{

		M_8x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8) };
	}


	// calculates the dot product of a 2x7(left) matrix and a 7x9(right) matrix, and returns a 2x9 matrix 
	static M_2x9 DotProduct(M_2x7 left, M_7x9 right)
	{

		M_9x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9) };
	}


	// calculates the dot product of a 2x8(left) matrix and a 8x2(right) matrix, and returns a 2x2 matrix 
	static M_2x2 DotProduct(M_2x8 left, M_8x2 right)
	{

		M_2x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2) };
	}


	// calculates the dot product of a 2x8(left) matrix and a 8x3(right) matrix, and returns a 2x3 matrix 
	static M_2x3 DotProduct(M_2x8 left, M_8x3 right)
	{

		M_3x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3) };
	}


	// calculates the dot product of a 2x8(left) matrix and a 8x4(right) matrix, and returns a 2x4 matrix 
	static M_2x4 DotProduct(M_2x8 left, M_8x4 right)
	{

		M_4x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4) };
	}


	// calculates the dot product of a 2x8(left) matrix and a 8x5(right) matrix, and returns a 2x5 matrix 
	static M_2x5 DotProduct(M_2x8 left, M_8x5 right)
	{

		M_5x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5) };
	}


	// calculates the dot product of a 2x8(left) matrix and a 8x6(right) matrix, and returns a 2x6 matrix 
	static M_2x6 DotProduct(M_2x8 left, M_8x6 right)
	{

		M_6x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6) };
	}


	// calculates the dot product of a 2x8(left) matrix and a 8x7(right) matrix, and returns a 2x7 matrix 
	static M_2x7 DotProduct(M_2x8 left, M_8x7 right)
	{

		M_7x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7) };
	}


	// calculates the dot product of a 2x8(left) matrix and a 8x8(right) matrix, and returns a 2x8 matrix 
	static M_2x8 DotProduct(M_2x8 left, M_8x8 right)
	{

		M_8x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8) };
	}


	// calculates the dot product of a 2x8(left) matrix and a 8x9(right) matrix, and returns a 2x9 matrix 
	static M_2x9 DotProduct(M_2x8 left, M_8x9 right)
	{

		M_9x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9) };
	}


	// calculates the dot product of a 2x9(left) matrix and a 9x2(right) matrix, and returns a 2x2 matrix 
	static M_2x2 DotProduct(M_2x9 left, M_9x2 right)
	{

		M_2x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2) };
	}


	// calculates the dot product of a 2x9(left) matrix and a 9x3(right) matrix, and returns a 2x3 matrix 
	static M_2x3 DotProduct(M_2x9 left, M_9x3 right)
	{

		M_3x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3) };
	}


	// calculates the dot product of a 2x9(left) matrix and a 9x4(right) matrix, and returns a 2x4 matrix 
	static M_2x4 DotProduct(M_2x9 left, M_9x4 right)
	{

		M_4x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4) };
	}


	// calculates the dot product of a 2x9(left) matrix and a 9x5(right) matrix, and returns a 2x5 matrix 
	static M_2x5 DotProduct(M_2x9 left, M_9x5 right)
	{

		M_5x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5) };
	}


	// calculates the dot product of a 2x9(left) matrix and a 9x6(right) matrix, and returns a 2x6 matrix 
	static M_2x6 DotProduct(M_2x9 left, M_9x6 right)
	{

		M_6x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6) };
	}


	// calculates the dot product of a 2x9(left) matrix and a 9x7(right) matrix, and returns a 2x7 matrix 
	static M_2x7 DotProduct(M_2x9 left, M_9x7 right)
	{

		M_7x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7) };
	}


	// calculates the dot product of a 2x9(left) matrix and a 9x8(right) matrix, and returns a 2x8 matrix 
	static M_2x8 DotProduct(M_2x9 left, M_9x8 right)
	{

		M_8x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8) };
	}


	// calculates the dot product of a 2x9(left) matrix and a 9x9(right) matrix, and returns a 2x9 matrix 
	static M_2x9 DotProduct(M_2x9 left, M_9x9 right)
	{

		M_9x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9) };
	}


	// calculates the dot product of a 3(left) row vector and a 3(right) row vector, and returns a double
	static double DotProduct(RV_3 left, RV_3 right)
	{
		return left.N1 * right.N1 + left.N2 * right.N2 + left.N3 * right.N3;
	}



	// calculates the dot product of a 3(left) column vector and a 3(right) column vector, and returns a double
	static double DotProduct(CV_3 left, CV_3 right)
	{
		return left.M1 * right.M1 + left.M2 * right.M2 + left.M3 * right.M3;
	}



	// calculates the dot product of a 3(left) row vector and a 3(right) column vector, and returns a double
	static double DotProduct(RV_3 left, CV_3 right)
	{
		return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3;
	}


	// calculates the dot product of a 3x2(left) matrix and a 2x2(right) matrix, and returns a 3x2 matrix 
	static M_3x2 DotProduct(M_3x2 left, M_2x2 right)
	{

		M_2x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2) };
	}


	// calculates the dot product of a 3x2(left) matrix and a 2x3(right) matrix, and returns a 3x3 matrix 
	static M_3x3 DotProduct(M_3x2 left, M_2x3 right)
	{

		M_3x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3) };
	}


	// calculates the dot product of a 3x2(left) matrix and a 2x4(right) matrix, and returns a 3x4 matrix 
	static M_3x4 DotProduct(M_3x2 left, M_2x4 right)
	{

		M_4x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4) };
	}


	// calculates the dot product of a 3x2(left) matrix and a 2x5(right) matrix, and returns a 3x5 matrix 
	static M_3x5 DotProduct(M_3x2 left, M_2x5 right)
	{

		M_5x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5) };
	}


	// calculates the dot product of a 3x2(left) matrix and a 2x6(right) matrix, and returns a 3x6 matrix 
	static M_3x6 DotProduct(M_3x2 left, M_2x6 right)
	{

		M_6x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6) };
	}


	// calculates the dot product of a 3x2(left) matrix and a 2x7(right) matrix, and returns a 3x7 matrix 
	static M_3x7 DotProduct(M_3x2 left, M_2x7 right)
	{

		M_7x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7) };
	}


	// calculates the dot product of a 3x2(left) matrix and a 2x8(right) matrix, and returns a 3x8 matrix 
	static M_3x8 DotProduct(M_3x2 left, M_2x8 right)
	{

		M_8x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8) };
	}


	// calculates the dot product of a 3x2(left) matrix and a 2x9(right) matrix, and returns a 3x9 matrix 
	static M_3x9 DotProduct(M_3x2 left, M_2x9 right)
	{

		M_9x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9) };
	}


	// calculates the dot product of a 3x3(left) matrix and a 3x2(right) matrix, and returns a 3x2 matrix 
	static M_3x2 DotProduct(M_3x3 left, M_3x2 right)
	{

		M_2x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2) };
	}


	// calculates the dot product of a 3x3(left) matrix and a 3x3(right) matrix, and returns a 3x3 matrix 
	static M_3x3 DotProduct(M_3x3 left, M_3x3 right)
	{

		M_3x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3) };
	}


	// calculates the dot product of a 3x3(left) matrix and a 3x4(right) matrix, and returns a 3x4 matrix 
	static M_3x4 DotProduct(M_3x3 left, M_3x4 right)
	{

		M_4x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4) };
	}


	// calculates the dot product of a 3x3(left) matrix and a 3x5(right) matrix, and returns a 3x5 matrix 
	static M_3x5 DotProduct(M_3x3 left, M_3x5 right)
	{

		M_5x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5) };
	}


	// calculates the dot product of a 3x3(left) matrix and a 3x6(right) matrix, and returns a 3x6 matrix 
	static M_3x6 DotProduct(M_3x3 left, M_3x6 right)
	{

		M_6x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6) };
	}


	// calculates the dot product of a 3x3(left) matrix and a 3x7(right) matrix, and returns a 3x7 matrix 
	static M_3x7 DotProduct(M_3x3 left, M_3x7 right)
	{

		M_7x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7) };
	}


	// calculates the dot product of a 3x3(left) matrix and a 3x8(right) matrix, and returns a 3x8 matrix 
	static M_3x8 DotProduct(M_3x3 left, M_3x8 right)
	{

		M_8x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8) };
	}


	// calculates the dot product of a 3x3(left) matrix and a 3x9(right) matrix, and returns a 3x9 matrix 
	static M_3x9 DotProduct(M_3x3 left, M_3x9 right)
	{

		M_9x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9) };
	}


	// calculates the dot product of a 3x4(left) matrix and a 4x2(right) matrix, and returns a 3x2 matrix 
	static M_3x2 DotProduct(M_3x4 left, M_4x2 right)
	{

		M_2x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2) };
	}


	// calculates the dot product of a 3x4(left) matrix and a 4x3(right) matrix, and returns a 3x3 matrix 
	static M_3x3 DotProduct(M_3x4 left, M_4x3 right)
	{

		M_3x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3) };
	}


	// calculates the dot product of a 3x4(left) matrix and a 4x4(right) matrix, and returns a 3x4 matrix 
	static M_3x4 DotProduct(M_3x4 left, M_4x4 right)
	{

		M_4x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4) };
	}


	// calculates the dot product of a 3x4(left) matrix and a 4x5(right) matrix, and returns a 3x5 matrix 
	static M_3x5 DotProduct(M_3x4 left, M_4x5 right)
	{

		M_5x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5) };
	}


	// calculates the dot product of a 3x4(left) matrix and a 4x6(right) matrix, and returns a 3x6 matrix 
	static M_3x6 DotProduct(M_3x4 left, M_4x6 right)
	{

		M_6x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6) };
	}


	// calculates the dot product of a 3x4(left) matrix and a 4x7(right) matrix, and returns a 3x7 matrix 
	static M_3x7 DotProduct(M_3x4 left, M_4x7 right)
	{

		M_7x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7) };
	}


	// calculates the dot product of a 3x4(left) matrix and a 4x8(right) matrix, and returns a 3x8 matrix 
	static M_3x8 DotProduct(M_3x4 left, M_4x8 right)
	{

		M_8x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8) };
	}


	// calculates the dot product of a 3x4(left) matrix and a 4x9(right) matrix, and returns a 3x9 matrix 
	static M_3x9 DotProduct(M_3x4 left, M_4x9 right)
	{

		M_9x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9) };
	}


	// calculates the dot product of a 3x5(left) matrix and a 5x2(right) matrix, and returns a 3x2 matrix 
	static M_3x2 DotProduct(M_3x5 left, M_5x2 right)
	{

		M_2x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2) };
	}


	// calculates the dot product of a 3x5(left) matrix and a 5x3(right) matrix, and returns a 3x3 matrix 
	static M_3x3 DotProduct(M_3x5 left, M_5x3 right)
	{

		M_3x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3) };
	}


	// calculates the dot product of a 3x5(left) matrix and a 5x4(right) matrix, and returns a 3x4 matrix 
	static M_3x4 DotProduct(M_3x5 left, M_5x4 right)
	{

		M_4x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4) };
	}


	// calculates the dot product of a 3x5(left) matrix and a 5x5(right) matrix, and returns a 3x5 matrix 
	static M_3x5 DotProduct(M_3x5 left, M_5x5 right)
	{

		M_5x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5) };
	}


	// calculates the dot product of a 3x5(left) matrix and a 5x6(right) matrix, and returns a 3x6 matrix 
	static M_3x6 DotProduct(M_3x5 left, M_5x6 right)
	{

		M_6x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6) };
	}


	// calculates the dot product of a 3x5(left) matrix and a 5x7(right) matrix, and returns a 3x7 matrix 
	static M_3x7 DotProduct(M_3x5 left, M_5x7 right)
	{

		M_7x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7) };
	}


	// calculates the dot product of a 3x5(left) matrix and a 5x8(right) matrix, and returns a 3x8 matrix 
	static M_3x8 DotProduct(M_3x5 left, M_5x8 right)
	{

		M_8x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8) };
	}


	// calculates the dot product of a 3x5(left) matrix and a 5x9(right) matrix, and returns a 3x9 matrix 
	static M_3x9 DotProduct(M_3x5 left, M_5x9 right)
	{

		M_9x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9) };
	}


	// calculates the dot product of a 3x6(left) matrix and a 6x2(right) matrix, and returns a 3x2 matrix 
	static M_3x2 DotProduct(M_3x6 left, M_6x2 right)
	{

		M_2x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2) };
	}


	// calculates the dot product of a 3x6(left) matrix and a 6x3(right) matrix, and returns a 3x3 matrix 
	static M_3x3 DotProduct(M_3x6 left, M_6x3 right)
	{

		M_3x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3) };
	}


	// calculates the dot product of a 3x6(left) matrix and a 6x4(right) matrix, and returns a 3x4 matrix 
	static M_3x4 DotProduct(M_3x6 left, M_6x4 right)
	{

		M_4x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4) };
	}


	// calculates the dot product of a 3x6(left) matrix and a 6x5(right) matrix, and returns a 3x5 matrix 
	static M_3x5 DotProduct(M_3x6 left, M_6x5 right)
	{

		M_5x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5) };
	}


	// calculates the dot product of a 3x6(left) matrix and a 6x6(right) matrix, and returns a 3x6 matrix 
	static M_3x6 DotProduct(M_3x6 left, M_6x6 right)
	{

		M_6x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6) };
	}


	// calculates the dot product of a 3x6(left) matrix and a 6x7(right) matrix, and returns a 3x7 matrix 
	static M_3x7 DotProduct(M_3x6 left, M_6x7 right)
	{

		M_7x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7) };
	}


	// calculates the dot product of a 3x6(left) matrix and a 6x8(right) matrix, and returns a 3x8 matrix 
	static M_3x8 DotProduct(M_3x6 left, M_6x8 right)
	{

		M_8x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8) };
	}


	// calculates the dot product of a 3x6(left) matrix and a 6x9(right) matrix, and returns a 3x9 matrix 
	static M_3x9 DotProduct(M_3x6 left, M_6x9 right)
	{

		M_9x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9) };
	}


	// calculates the dot product of a 3x7(left) matrix and a 7x2(right) matrix, and returns a 3x2 matrix 
	static M_3x2 DotProduct(M_3x7 left, M_7x2 right)
	{

		M_2x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2) };
	}


	// calculates the dot product of a 3x7(left) matrix and a 7x3(right) matrix, and returns a 3x3 matrix 
	static M_3x3 DotProduct(M_3x7 left, M_7x3 right)
	{

		M_3x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3) };
	}


	// calculates the dot product of a 3x7(left) matrix and a 7x4(right) matrix, and returns a 3x4 matrix 
	static M_3x4 DotProduct(M_3x7 left, M_7x4 right)
	{

		M_4x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4) };
	}


	// calculates the dot product of a 3x7(left) matrix and a 7x5(right) matrix, and returns a 3x5 matrix 
	static M_3x5 DotProduct(M_3x7 left, M_7x5 right)
	{

		M_5x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5) };
	}


	// calculates the dot product of a 3x7(left) matrix and a 7x6(right) matrix, and returns a 3x6 matrix 
	static M_3x6 DotProduct(M_3x7 left, M_7x6 right)
	{

		M_6x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6) };
	}


	// calculates the dot product of a 3x7(left) matrix and a 7x7(right) matrix, and returns a 3x7 matrix 
	static M_3x7 DotProduct(M_3x7 left, M_7x7 right)
	{

		M_7x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7) };
	}


	// calculates the dot product of a 3x7(left) matrix and a 7x8(right) matrix, and returns a 3x8 matrix 
	static M_3x8 DotProduct(M_3x7 left, M_7x8 right)
	{

		M_8x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8) };
	}


	// calculates the dot product of a 3x7(left) matrix and a 7x9(right) matrix, and returns a 3x9 matrix 
	static M_3x9 DotProduct(M_3x7 left, M_7x9 right)
	{

		M_9x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9) };
	}


	// calculates the dot product of a 3x8(left) matrix and a 8x2(right) matrix, and returns a 3x2 matrix 
	static M_3x2 DotProduct(M_3x8 left, M_8x2 right)
	{

		M_2x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2) };
	}


	// calculates the dot product of a 3x8(left) matrix and a 8x3(right) matrix, and returns a 3x3 matrix 
	static M_3x3 DotProduct(M_3x8 left, M_8x3 right)
	{

		M_3x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3) };
	}


	// calculates the dot product of a 3x8(left) matrix and a 8x4(right) matrix, and returns a 3x4 matrix 
	static M_3x4 DotProduct(M_3x8 left, M_8x4 right)
	{

		M_4x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4) };
	}


	// calculates the dot product of a 3x8(left) matrix and a 8x5(right) matrix, and returns a 3x5 matrix 
	static M_3x5 DotProduct(M_3x8 left, M_8x5 right)
	{

		M_5x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5) };
	}


	// calculates the dot product of a 3x8(left) matrix and a 8x6(right) matrix, and returns a 3x6 matrix 
	static M_3x6 DotProduct(M_3x8 left, M_8x6 right)
	{

		M_6x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6) };
	}


	// calculates the dot product of a 3x8(left) matrix and a 8x7(right) matrix, and returns a 3x7 matrix 
	static M_3x7 DotProduct(M_3x8 left, M_8x7 right)
	{

		M_7x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7) };
	}


	// calculates the dot product of a 3x8(left) matrix and a 8x8(right) matrix, and returns a 3x8 matrix 
	static M_3x8 DotProduct(M_3x8 left, M_8x8 right)
	{

		M_8x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8) };
	}


	// calculates the dot product of a 3x8(left) matrix and a 8x9(right) matrix, and returns a 3x9 matrix 
	static M_3x9 DotProduct(M_3x8 left, M_8x9 right)
	{

		M_9x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9) };
	}


	// calculates the dot product of a 3x9(left) matrix and a 9x2(right) matrix, and returns a 3x2 matrix 
	static M_3x2 DotProduct(M_3x9 left, M_9x2 right)
	{

		M_2x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2) };
	}


	// calculates the dot product of a 3x9(left) matrix and a 9x3(right) matrix, and returns a 3x3 matrix 
	static M_3x3 DotProduct(M_3x9 left, M_9x3 right)
	{

		M_3x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3) };
	}


	// calculates the dot product of a 3x9(left) matrix and a 9x4(right) matrix, and returns a 3x4 matrix 
	static M_3x4 DotProduct(M_3x9 left, M_9x4 right)
	{

		M_4x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4) };
	}


	// calculates the dot product of a 3x9(left) matrix and a 9x5(right) matrix, and returns a 3x5 matrix 
	static M_3x5 DotProduct(M_3x9 left, M_9x5 right)
	{

		M_5x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5) };
	}


	// calculates the dot product of a 3x9(left) matrix and a 9x6(right) matrix, and returns a 3x6 matrix 
	static M_3x6 DotProduct(M_3x9 left, M_9x6 right)
	{

		M_6x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6) };
	}


	// calculates the dot product of a 3x9(left) matrix and a 9x7(right) matrix, and returns a 3x7 matrix 
	static M_3x7 DotProduct(M_3x9 left, M_9x7 right)
	{

		M_7x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7) };
	}


	// calculates the dot product of a 3x9(left) matrix and a 9x8(right) matrix, and returns a 3x8 matrix 
	static M_3x8 DotProduct(M_3x9 left, M_9x8 right)
	{

		M_8x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8) };
	}


	// calculates the dot product of a 3x9(left) matrix and a 9x9(right) matrix, and returns a 3x9 matrix 
	static M_3x9 DotProduct(M_3x9 left, M_9x9 right)
	{

		M_9x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9) };
	}


	// calculates the dot product of a 4(left) row vector and a 4(right) row vector, and returns a double
	static double DotProduct(RV_4 left, RV_4 right)
	{
		return left.N1 * right.N1 + left.N2 * right.N2 + left.N3 * right.N3 + left.N4 * right.N4;
	}



	// calculates the dot product of a 4(left) column vector and a 4(right) column vector, and returns a double
	static double DotProduct(CV_4 left, CV_4 right)
	{
		return left.M1 * right.M1 + left.M2 * right.M2 + left.M3 * right.M3 + left.M4 * right.M4;
	}



	// calculates the dot product of a 4(left) row vector and a 4(right) column vector, and returns a double
	static double DotProduct(RV_4 left, CV_4 right)
	{
		return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4;
	}


	// calculates the dot product of a 4x2(left) matrix and a 2x2(right) matrix, and returns a 4x2 matrix 
	static M_4x2 DotProduct(M_4x2 left, M_2x2 right)
	{

		M_2x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2) };
	}


	// calculates the dot product of a 4x2(left) matrix and a 2x3(right) matrix, and returns a 4x3 matrix 
	static M_4x3 DotProduct(M_4x2 left, M_2x3 right)
	{

		M_3x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3) };
	}


	// calculates the dot product of a 4x2(left) matrix and a 2x4(right) matrix, and returns a 4x4 matrix 
	static M_4x4 DotProduct(M_4x2 left, M_2x4 right)
	{

		M_4x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4) };
	}


	// calculates the dot product of a 4x2(left) matrix and a 2x5(right) matrix, and returns a 4x5 matrix 
	static M_4x5 DotProduct(M_4x2 left, M_2x5 right)
	{

		M_5x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5) };
	}


	// calculates the dot product of a 4x2(left) matrix and a 2x6(right) matrix, and returns a 4x6 matrix 
	static M_4x6 DotProduct(M_4x2 left, M_2x6 right)
	{

		M_6x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6) };
	}


	// calculates the dot product of a 4x2(left) matrix and a 2x7(right) matrix, and returns a 4x7 matrix 
	static M_4x7 DotProduct(M_4x2 left, M_2x7 right)
	{

		M_7x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7) };
	}


	// calculates the dot product of a 4x2(left) matrix and a 2x8(right) matrix, and returns a 4x8 matrix 
	static M_4x8 DotProduct(M_4x2 left, M_2x8 right)
	{

		M_8x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8) };
	}


	// calculates the dot product of a 4x2(left) matrix and a 2x9(right) matrix, and returns a 4x9 matrix 
	static M_4x9 DotProduct(M_4x2 left, M_2x9 right)
	{

		M_9x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9) };
	}


	// calculates the dot product of a 4x3(left) matrix and a 3x2(right) matrix, and returns a 4x2 matrix 
	static M_4x2 DotProduct(M_4x3 left, M_3x2 right)
	{

		M_2x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2) };
	}


	// calculates the dot product of a 4x3(left) matrix and a 3x3(right) matrix, and returns a 4x3 matrix 
	static M_4x3 DotProduct(M_4x3 left, M_3x3 right)
	{

		M_3x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3) };
	}


	// calculates the dot product of a 4x3(left) matrix and a 3x4(right) matrix, and returns a 4x4 matrix 
	static M_4x4 DotProduct(M_4x3 left, M_3x4 right)
	{

		M_4x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4) };
	}


	// calculates the dot product of a 4x3(left) matrix and a 3x5(right) matrix, and returns a 4x5 matrix 
	static M_4x5 DotProduct(M_4x3 left, M_3x5 right)
	{

		M_5x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5) };
	}


	// calculates the dot product of a 4x3(left) matrix and a 3x6(right) matrix, and returns a 4x6 matrix 
	static M_4x6 DotProduct(M_4x3 left, M_3x6 right)
	{

		M_6x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6) };
	}


	// calculates the dot product of a 4x3(left) matrix and a 3x7(right) matrix, and returns a 4x7 matrix 
	static M_4x7 DotProduct(M_4x3 left, M_3x7 right)
	{

		M_7x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7) };
	}


	// calculates the dot product of a 4x3(left) matrix and a 3x8(right) matrix, and returns a 4x8 matrix 
	static M_4x8 DotProduct(M_4x3 left, M_3x8 right)
	{

		M_8x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8) };
	}


	// calculates the dot product of a 4x3(left) matrix and a 3x9(right) matrix, and returns a 4x9 matrix 
	static M_4x9 DotProduct(M_4x3 left, M_3x9 right)
	{

		M_9x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9) };
	}


	// calculates the dot product of a 4x4(left) matrix and a 4x2(right) matrix, and returns a 4x2 matrix 
	static M_4x2 DotProduct(M_4x4 left, M_4x2 right)
	{

		M_2x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2) };
	}


	// calculates the dot product of a 4x4(left) matrix and a 4x3(right) matrix, and returns a 4x3 matrix 
	static M_4x3 DotProduct(M_4x4 left, M_4x3 right)
	{

		M_3x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3) };
	}


	// calculates the dot product of a 4x4(left) matrix and a 4x4(right) matrix, and returns a 4x4 matrix 
	static M_4x4 DotProduct(M_4x4 left, M_4x4 right)
	{

		M_4x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4) };
	}


	// calculates the dot product of a 4x4(left) matrix and a 4x5(right) matrix, and returns a 4x5 matrix 
	static M_4x5 DotProduct(M_4x4 left, M_4x5 right)
	{

		M_5x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5) };
	}


	// calculates the dot product of a 4x4(left) matrix and a 4x6(right) matrix, and returns a 4x6 matrix 
	static M_4x6 DotProduct(M_4x4 left, M_4x6 right)
	{

		M_6x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6) };
	}


	// calculates the dot product of a 4x4(left) matrix and a 4x7(right) matrix, and returns a 4x7 matrix 
	static M_4x7 DotProduct(M_4x4 left, M_4x7 right)
	{

		M_7x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7) };
	}


	// calculates the dot product of a 4x4(left) matrix and a 4x8(right) matrix, and returns a 4x8 matrix 
	static M_4x8 DotProduct(M_4x4 left, M_4x8 right)
	{

		M_8x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8) };
	}


	// calculates the dot product of a 4x4(left) matrix and a 4x9(right) matrix, and returns a 4x9 matrix 
	static M_4x9 DotProduct(M_4x4 left, M_4x9 right)
	{

		M_9x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9) };
	}


	// calculates the dot product of a 4x5(left) matrix and a 5x2(right) matrix, and returns a 4x2 matrix 
	static M_4x2 DotProduct(M_4x5 left, M_5x2 right)
	{

		M_2x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2) };
	}


	// calculates the dot product of a 4x5(left) matrix and a 5x3(right) matrix, and returns a 4x3 matrix 
	static M_4x3 DotProduct(M_4x5 left, M_5x3 right)
	{

		M_3x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3) };
	}


	// calculates the dot product of a 4x5(left) matrix and a 5x4(right) matrix, and returns a 4x4 matrix 
	static M_4x4 DotProduct(M_4x5 left, M_5x4 right)
	{

		M_4x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4) };
	}


	// calculates the dot product of a 4x5(left) matrix and a 5x5(right) matrix, and returns a 4x5 matrix 
	static M_4x5 DotProduct(M_4x5 left, M_5x5 right)
	{

		M_5x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5) };
	}


	// calculates the dot product of a 4x5(left) matrix and a 5x6(right) matrix, and returns a 4x6 matrix 
	static M_4x6 DotProduct(M_4x5 left, M_5x6 right)
	{

		M_6x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6) };
	}


	// calculates the dot product of a 4x5(left) matrix and a 5x7(right) matrix, and returns a 4x7 matrix 
	static M_4x7 DotProduct(M_4x5 left, M_5x7 right)
	{

		M_7x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7) };
	}


	// calculates the dot product of a 4x5(left) matrix and a 5x8(right) matrix, and returns a 4x8 matrix 
	static M_4x8 DotProduct(M_4x5 left, M_5x8 right)
	{

		M_8x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8) };
	}


	// calculates the dot product of a 4x5(left) matrix and a 5x9(right) matrix, and returns a 4x9 matrix 
	static M_4x9 DotProduct(M_4x5 left, M_5x9 right)
	{

		M_9x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9) };
	}


	// calculates the dot product of a 4x6(left) matrix and a 6x2(right) matrix, and returns a 4x2 matrix 
	static M_4x2 DotProduct(M_4x6 left, M_6x2 right)
	{

		M_2x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2) };
	}


	// calculates the dot product of a 4x6(left) matrix and a 6x3(right) matrix, and returns a 4x3 matrix 
	static M_4x3 DotProduct(M_4x6 left, M_6x3 right)
	{

		M_3x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3) };
	}


	// calculates the dot product of a 4x6(left) matrix and a 6x4(right) matrix, and returns a 4x4 matrix 
	static M_4x4 DotProduct(M_4x6 left, M_6x4 right)
	{

		M_4x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4) };
	}


	// calculates the dot product of a 4x6(left) matrix and a 6x5(right) matrix, and returns a 4x5 matrix 
	static M_4x5 DotProduct(M_4x6 left, M_6x5 right)
	{

		M_5x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5) };
	}


	// calculates the dot product of a 4x6(left) matrix and a 6x6(right) matrix, and returns a 4x6 matrix 
	static M_4x6 DotProduct(M_4x6 left, M_6x6 right)
	{

		M_6x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6) };
	}


	// calculates the dot product of a 4x6(left) matrix and a 6x7(right) matrix, and returns a 4x7 matrix 
	static M_4x7 DotProduct(M_4x6 left, M_6x7 right)
	{

		M_7x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7) };
	}


	// calculates the dot product of a 4x6(left) matrix and a 6x8(right) matrix, and returns a 4x8 matrix 
	static M_4x8 DotProduct(M_4x6 left, M_6x8 right)
	{

		M_8x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8) };
	}


	// calculates the dot product of a 4x6(left) matrix and a 6x9(right) matrix, and returns a 4x9 matrix 
	static M_4x9 DotProduct(M_4x6 left, M_6x9 right)
	{

		M_9x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9) };
	}


	// calculates the dot product of a 4x7(left) matrix and a 7x2(right) matrix, and returns a 4x2 matrix 
	static M_4x2 DotProduct(M_4x7 left, M_7x2 right)
	{

		M_2x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2) };
	}


	// calculates the dot product of a 4x7(left) matrix and a 7x3(right) matrix, and returns a 4x3 matrix 
	static M_4x3 DotProduct(M_4x7 left, M_7x3 right)
	{

		M_3x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3) };
	}


	// calculates the dot product of a 4x7(left) matrix and a 7x4(right) matrix, and returns a 4x4 matrix 
	static M_4x4 DotProduct(M_4x7 left, M_7x4 right)
	{

		M_4x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4) };
	}


	// calculates the dot product of a 4x7(left) matrix and a 7x5(right) matrix, and returns a 4x5 matrix 
	static M_4x5 DotProduct(M_4x7 left, M_7x5 right)
	{

		M_5x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5) };
	}


	// calculates the dot product of a 4x7(left) matrix and a 7x6(right) matrix, and returns a 4x6 matrix 
	static M_4x6 DotProduct(M_4x7 left, M_7x6 right)
	{

		M_6x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6) };
	}


	// calculates the dot product of a 4x7(left) matrix and a 7x7(right) matrix, and returns a 4x7 matrix 
	static M_4x7 DotProduct(M_4x7 left, M_7x7 right)
	{

		M_7x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7) };
	}


	// calculates the dot product of a 4x7(left) matrix and a 7x8(right) matrix, and returns a 4x8 matrix 
	static M_4x8 DotProduct(M_4x7 left, M_7x8 right)
	{

		M_8x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8) };
	}


	// calculates the dot product of a 4x7(left) matrix and a 7x9(right) matrix, and returns a 4x9 matrix 
	static M_4x9 DotProduct(M_4x7 left, M_7x9 right)
	{

		M_9x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9) };
	}


	// calculates the dot product of a 4x8(left) matrix and a 8x2(right) matrix, and returns a 4x2 matrix 
	static M_4x2 DotProduct(M_4x8 left, M_8x2 right)
	{

		M_2x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2) };
	}


	// calculates the dot product of a 4x8(left) matrix and a 8x3(right) matrix, and returns a 4x3 matrix 
	static M_4x3 DotProduct(M_4x8 left, M_8x3 right)
	{

		M_3x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3) };
	}


	// calculates the dot product of a 4x8(left) matrix and a 8x4(right) matrix, and returns a 4x4 matrix 
	static M_4x4 DotProduct(M_4x8 left, M_8x4 right)
	{

		M_4x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4) };
	}


	// calculates the dot product of a 4x8(left) matrix and a 8x5(right) matrix, and returns a 4x5 matrix 
	static M_4x5 DotProduct(M_4x8 left, M_8x5 right)
	{

		M_5x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5) };
	}


	// calculates the dot product of a 4x8(left) matrix and a 8x6(right) matrix, and returns a 4x6 matrix 
	static M_4x6 DotProduct(M_4x8 left, M_8x6 right)
	{

		M_6x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6) };
	}


	// calculates the dot product of a 4x8(left) matrix and a 8x7(right) matrix, and returns a 4x7 matrix 
	static M_4x7 DotProduct(M_4x8 left, M_8x7 right)
	{

		M_7x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7) };
	}


	// calculates the dot product of a 4x8(left) matrix and a 8x8(right) matrix, and returns a 4x8 matrix 
	static M_4x8 DotProduct(M_4x8 left, M_8x8 right)
	{

		M_8x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8) };
	}


	// calculates the dot product of a 4x8(left) matrix and a 8x9(right) matrix, and returns a 4x9 matrix 
	static M_4x9 DotProduct(M_4x8 left, M_8x9 right)
	{

		M_9x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9) };
	}


	// calculates the dot product of a 4x9(left) matrix and a 9x2(right) matrix, and returns a 4x2 matrix 
	static M_4x2 DotProduct(M_4x9 left, M_9x2 right)
	{

		M_2x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2) };
	}


	// calculates the dot product of a 4x9(left) matrix and a 9x3(right) matrix, and returns a 4x3 matrix 
	static M_4x3 DotProduct(M_4x9 left, M_9x3 right)
	{

		M_3x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3) };
	}


	// calculates the dot product of a 4x9(left) matrix and a 9x4(right) matrix, and returns a 4x4 matrix 
	static M_4x4 DotProduct(M_4x9 left, M_9x4 right)
	{

		M_4x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4) };
	}


	// calculates the dot product of a 4x9(left) matrix and a 9x5(right) matrix, and returns a 4x5 matrix 
	static M_4x5 DotProduct(M_4x9 left, M_9x5 right)
	{

		M_5x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5) };
	}


	// calculates the dot product of a 4x9(left) matrix and a 9x6(right) matrix, and returns a 4x6 matrix 
	static M_4x6 DotProduct(M_4x9 left, M_9x6 right)
	{

		M_6x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6) };
	}


	// calculates the dot product of a 4x9(left) matrix and a 9x7(right) matrix, and returns a 4x7 matrix 
	static M_4x7 DotProduct(M_4x9 left, M_9x7 right)
	{

		M_7x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7) };
	}


	// calculates the dot product of a 4x9(left) matrix and a 9x8(right) matrix, and returns a 4x8 matrix 
	static M_4x8 DotProduct(M_4x9 left, M_9x8 right)
	{

		M_8x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8) };
	}


	// calculates the dot product of a 4x9(left) matrix and a 9x9(right) matrix, and returns a 4x9 matrix 
	static M_4x9 DotProduct(M_4x9 left, M_9x9 right)
	{

		M_9x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9) };
	}


	// calculates the dot product of a 5(left) row vector and a 5(right) row vector, and returns a double
	static double DotProduct(RV_5 left, RV_5 right)
	{
		return left.N1 * right.N1 + left.N2 * right.N2 + left.N3 * right.N3 + left.N4 * right.N4 + left.N5 * right.N5;
	}



	// calculates the dot product of a 5(left) column vector and a 5(right) column vector, and returns a double
	static double DotProduct(CV_5 left, CV_5 right)
	{
		return left.M1 * right.M1 + left.M2 * right.M2 + left.M3 * right.M3 + left.M4 * right.M4 + left.M5 * right.M5;
	}



	// calculates the dot product of a 5(left) row vector and a 5(right) column vector, and returns a double
	static double DotProduct(RV_5 left, CV_5 right)
	{
		return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5;
	}


	// calculates the dot product of a 5x2(left) matrix and a 2x2(right) matrix, and returns a 5x2 matrix 
	static M_5x2 DotProduct(M_5x2 left, M_2x2 right)
	{

		M_2x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2) };
	}


	// calculates the dot product of a 5x2(left) matrix and a 2x3(right) matrix, and returns a 5x3 matrix 
	static M_5x3 DotProduct(M_5x2 left, M_2x3 right)
	{

		M_3x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3) };
	}


	// calculates the dot product of a 5x2(left) matrix and a 2x4(right) matrix, and returns a 5x4 matrix 
	static M_5x4 DotProduct(M_5x2 left, M_2x4 right)
	{

		M_4x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4) };
	}


	// calculates the dot product of a 5x2(left) matrix and a 2x5(right) matrix, and returns a 5x5 matrix 
	static M_5x5 DotProduct(M_5x2 left, M_2x5 right)
	{

		M_5x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5) };
	}


	// calculates the dot product of a 5x2(left) matrix and a 2x6(right) matrix, and returns a 5x6 matrix 
	static M_5x6 DotProduct(M_5x2 left, M_2x6 right)
	{

		M_6x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6) };
	}


	// calculates the dot product of a 5x2(left) matrix and a 2x7(right) matrix, and returns a 5x7 matrix 
	static M_5x7 DotProduct(M_5x2 left, M_2x7 right)
	{

		M_7x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7) };
	}


	// calculates the dot product of a 5x2(left) matrix and a 2x8(right) matrix, and returns a 5x8 matrix 
	static M_5x8 DotProduct(M_5x2 left, M_2x8 right)
	{

		M_8x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8) };
	}


	// calculates the dot product of a 5x2(left) matrix and a 2x9(right) matrix, and returns a 5x9 matrix 
	static M_5x9 DotProduct(M_5x2 left, M_2x9 right)
	{

		M_9x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9) };
	}


	// calculates the dot product of a 5x3(left) matrix and a 3x2(right) matrix, and returns a 5x2 matrix 
	static M_5x2 DotProduct(M_5x3 left, M_3x2 right)
	{

		M_2x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2) };
	}


	// calculates the dot product of a 5x3(left) matrix and a 3x3(right) matrix, and returns a 5x3 matrix 
	static M_5x3 DotProduct(M_5x3 left, M_3x3 right)
	{

		M_3x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3) };
	}


	// calculates the dot product of a 5x3(left) matrix and a 3x4(right) matrix, and returns a 5x4 matrix 
	static M_5x4 DotProduct(M_5x3 left, M_3x4 right)
	{

		M_4x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4) };
	}


	// calculates the dot product of a 5x3(left) matrix and a 3x5(right) matrix, and returns a 5x5 matrix 
	static M_5x5 DotProduct(M_5x3 left, M_3x5 right)
	{

		M_5x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5) };
	}


	// calculates the dot product of a 5x3(left) matrix and a 3x6(right) matrix, and returns a 5x6 matrix 
	static M_5x6 DotProduct(M_5x3 left, M_3x6 right)
	{

		M_6x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6) };
	}


	// calculates the dot product of a 5x3(left) matrix and a 3x7(right) matrix, and returns a 5x7 matrix 
	static M_5x7 DotProduct(M_5x3 left, M_3x7 right)
	{

		M_7x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7) };
	}


	// calculates the dot product of a 5x3(left) matrix and a 3x8(right) matrix, and returns a 5x8 matrix 
	static M_5x8 DotProduct(M_5x3 left, M_3x8 right)
	{

		M_8x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8) };
	}


	// calculates the dot product of a 5x3(left) matrix and a 3x9(right) matrix, and returns a 5x9 matrix 
	static M_5x9 DotProduct(M_5x3 left, M_3x9 right)
	{

		M_9x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9) };
	}


	// calculates the dot product of a 5x4(left) matrix and a 4x2(right) matrix, and returns a 5x2 matrix 
	static M_5x2 DotProduct(M_5x4 left, M_4x2 right)
	{

		M_2x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2) };
	}


	// calculates the dot product of a 5x4(left) matrix and a 4x3(right) matrix, and returns a 5x3 matrix 
	static M_5x3 DotProduct(M_5x4 left, M_4x3 right)
	{

		M_3x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3) };
	}


	// calculates the dot product of a 5x4(left) matrix and a 4x4(right) matrix, and returns a 5x4 matrix 
	static M_5x4 DotProduct(M_5x4 left, M_4x4 right)
	{

		M_4x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4) };
	}


	// calculates the dot product of a 5x4(left) matrix and a 4x5(right) matrix, and returns a 5x5 matrix 
	static M_5x5 DotProduct(M_5x4 left, M_4x5 right)
	{

		M_5x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5) };
	}


	// calculates the dot product of a 5x4(left) matrix and a 4x6(right) matrix, and returns a 5x6 matrix 
	static M_5x6 DotProduct(M_5x4 left, M_4x6 right)
	{

		M_6x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6) };
	}


	// calculates the dot product of a 5x4(left) matrix and a 4x7(right) matrix, and returns a 5x7 matrix 
	static M_5x7 DotProduct(M_5x4 left, M_4x7 right)
	{

		M_7x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7) };
	}


	// calculates the dot product of a 5x4(left) matrix and a 4x8(right) matrix, and returns a 5x8 matrix 
	static M_5x8 DotProduct(M_5x4 left, M_4x8 right)
	{

		M_8x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8) };
	}


	// calculates the dot product of a 5x4(left) matrix and a 4x9(right) matrix, and returns a 5x9 matrix 
	static M_5x9 DotProduct(M_5x4 left, M_4x9 right)
	{

		M_9x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9) };
	}


	// calculates the dot product of a 5x5(left) matrix and a 5x2(right) matrix, and returns a 5x2 matrix 
	static M_5x2 DotProduct(M_5x5 left, M_5x2 right)
	{

		M_2x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2) };
	}


	// calculates the dot product of a 5x5(left) matrix and a 5x3(right) matrix, and returns a 5x3 matrix 
	static M_5x3 DotProduct(M_5x5 left, M_5x3 right)
	{

		M_3x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3) };
	}


	// calculates the dot product of a 5x5(left) matrix and a 5x4(right) matrix, and returns a 5x4 matrix 
	static M_5x4 DotProduct(M_5x5 left, M_5x4 right)
	{

		M_4x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4) };
	}


	// calculates the dot product of a 5x5(left) matrix and a 5x5(right) matrix, and returns a 5x5 matrix 
	static M_5x5 DotProduct(M_5x5 left, M_5x5 right)
	{

		M_5x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5) };
	}


	// calculates the dot product of a 5x5(left) matrix and a 5x6(right) matrix, and returns a 5x6 matrix 
	static M_5x6 DotProduct(M_5x5 left, M_5x6 right)
	{

		M_6x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6) };
	}


	// calculates the dot product of a 5x5(left) matrix and a 5x7(right) matrix, and returns a 5x7 matrix 
	static M_5x7 DotProduct(M_5x5 left, M_5x7 right)
	{

		M_7x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7) };
	}


	// calculates the dot product of a 5x5(left) matrix and a 5x8(right) matrix, and returns a 5x8 matrix 
	static M_5x8 DotProduct(M_5x5 left, M_5x8 right)
	{

		M_8x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8) };
	}


	// calculates the dot product of a 5x5(left) matrix and a 5x9(right) matrix, and returns a 5x9 matrix 
	static M_5x9 DotProduct(M_5x5 left, M_5x9 right)
	{

		M_9x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9) };
	}


	// calculates the dot product of a 5x6(left) matrix and a 6x2(right) matrix, and returns a 5x2 matrix 
	static M_5x2 DotProduct(M_5x6 left, M_6x2 right)
	{

		M_2x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2) };
	}


	// calculates the dot product of a 5x6(left) matrix and a 6x3(right) matrix, and returns a 5x3 matrix 
	static M_5x3 DotProduct(M_5x6 left, M_6x3 right)
	{

		M_3x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3) };
	}


	// calculates the dot product of a 5x6(left) matrix and a 6x4(right) matrix, and returns a 5x4 matrix 
	static M_5x4 DotProduct(M_5x6 left, M_6x4 right)
	{

		M_4x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4) };
	}


	// calculates the dot product of a 5x6(left) matrix and a 6x5(right) matrix, and returns a 5x5 matrix 
	static M_5x5 DotProduct(M_5x6 left, M_6x5 right)
	{

		M_5x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5) };
	}


	// calculates the dot product of a 5x6(left) matrix and a 6x6(right) matrix, and returns a 5x6 matrix 
	static M_5x6 DotProduct(M_5x6 left, M_6x6 right)
	{

		M_6x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6) };
	}


	// calculates the dot product of a 5x6(left) matrix and a 6x7(right) matrix, and returns a 5x7 matrix 
	static M_5x7 DotProduct(M_5x6 left, M_6x7 right)
	{

		M_7x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7) };
	}


	// calculates the dot product of a 5x6(left) matrix and a 6x8(right) matrix, and returns a 5x8 matrix 
	static M_5x8 DotProduct(M_5x6 left, M_6x8 right)
	{

		M_8x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8) };
	}


	// calculates the dot product of a 5x6(left) matrix and a 6x9(right) matrix, and returns a 5x9 matrix 
	static M_5x9 DotProduct(M_5x6 left, M_6x9 right)
	{

		M_9x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9) };
	}


	// calculates the dot product of a 5x7(left) matrix and a 7x2(right) matrix, and returns a 5x2 matrix 
	static M_5x2 DotProduct(M_5x7 left, M_7x2 right)
	{

		M_2x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2) };
	}


	// calculates the dot product of a 5x7(left) matrix and a 7x3(right) matrix, and returns a 5x3 matrix 
	static M_5x3 DotProduct(M_5x7 left, M_7x3 right)
	{

		M_3x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3) };
	}


	// calculates the dot product of a 5x7(left) matrix and a 7x4(right) matrix, and returns a 5x4 matrix 
	static M_5x4 DotProduct(M_5x7 left, M_7x4 right)
	{

		M_4x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4) };
	}


	// calculates the dot product of a 5x7(left) matrix and a 7x5(right) matrix, and returns a 5x5 matrix 
	static M_5x5 DotProduct(M_5x7 left, M_7x5 right)
	{

		M_5x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5) };
	}


	// calculates the dot product of a 5x7(left) matrix and a 7x6(right) matrix, and returns a 5x6 matrix 
	static M_5x6 DotProduct(M_5x7 left, M_7x6 right)
	{

		M_6x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6) };
	}


	// calculates the dot product of a 5x7(left) matrix and a 7x7(right) matrix, and returns a 5x7 matrix 
	static M_5x7 DotProduct(M_5x7 left, M_7x7 right)
	{

		M_7x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7) };
	}


	// calculates the dot product of a 5x7(left) matrix and a 7x8(right) matrix, and returns a 5x8 matrix 
	static M_5x8 DotProduct(M_5x7 left, M_7x8 right)
	{

		M_8x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8) };
	}


	// calculates the dot product of a 5x7(left) matrix and a 7x9(right) matrix, and returns a 5x9 matrix 
	static M_5x9 DotProduct(M_5x7 left, M_7x9 right)
	{

		M_9x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9) };
	}


	// calculates the dot product of a 5x8(left) matrix and a 8x2(right) matrix, and returns a 5x2 matrix 
	static M_5x2 DotProduct(M_5x8 left, M_8x2 right)
	{

		M_2x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2) };
	}


	// calculates the dot product of a 5x8(left) matrix and a 8x3(right) matrix, and returns a 5x3 matrix 
	static M_5x3 DotProduct(M_5x8 left, M_8x3 right)
	{

		M_3x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3) };
	}


	// calculates the dot product of a 5x8(left) matrix and a 8x4(right) matrix, and returns a 5x4 matrix 
	static M_5x4 DotProduct(M_5x8 left, M_8x4 right)
	{

		M_4x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4) };
	}


	// calculates the dot product of a 5x8(left) matrix and a 8x5(right) matrix, and returns a 5x5 matrix 
	static M_5x5 DotProduct(M_5x8 left, M_8x5 right)
	{

		M_5x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5) };
	}


	// calculates the dot product of a 5x8(left) matrix and a 8x6(right) matrix, and returns a 5x6 matrix 
	static M_5x6 DotProduct(M_5x8 left, M_8x6 right)
	{

		M_6x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6) };
	}


	// calculates the dot product of a 5x8(left) matrix and a 8x7(right) matrix, and returns a 5x7 matrix 
	static M_5x7 DotProduct(M_5x8 left, M_8x7 right)
	{

		M_7x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7) };
	}


	// calculates the dot product of a 5x8(left) matrix and a 8x8(right) matrix, and returns a 5x8 matrix 
	static M_5x8 DotProduct(M_5x8 left, M_8x8 right)
	{

		M_8x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8) };
	}


	// calculates the dot product of a 5x8(left) matrix and a 8x9(right) matrix, and returns a 5x9 matrix 
	static M_5x9 DotProduct(M_5x8 left, M_8x9 right)
	{

		M_9x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9) };
	}


	// calculates the dot product of a 5x9(left) matrix and a 9x2(right) matrix, and returns a 5x2 matrix 
	static M_5x2 DotProduct(M_5x9 left, M_9x2 right)
	{

		M_2x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2) };
	}


	// calculates the dot product of a 5x9(left) matrix and a 9x3(right) matrix, and returns a 5x3 matrix 
	static M_5x3 DotProduct(M_5x9 left, M_9x3 right)
	{

		M_3x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3) };
	}


	// calculates the dot product of a 5x9(left) matrix and a 9x4(right) matrix, and returns a 5x4 matrix 
	static M_5x4 DotProduct(M_5x9 left, M_9x4 right)
	{

		M_4x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4) };
	}


	// calculates the dot product of a 5x9(left) matrix and a 9x5(right) matrix, and returns a 5x5 matrix 
	static M_5x5 DotProduct(M_5x9 left, M_9x5 right)
	{

		M_5x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5) };
	}


	// calculates the dot product of a 5x9(left) matrix and a 9x6(right) matrix, and returns a 5x6 matrix 
	static M_5x6 DotProduct(M_5x9 left, M_9x6 right)
	{

		M_6x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6) };
	}


	// calculates the dot product of a 5x9(left) matrix and a 9x7(right) matrix, and returns a 5x7 matrix 
	static M_5x7 DotProduct(M_5x9 left, M_9x7 right)
	{

		M_7x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7) };
	}


	// calculates the dot product of a 5x9(left) matrix and a 9x8(right) matrix, and returns a 5x8 matrix 
	static M_5x8 DotProduct(M_5x9 left, M_9x8 right)
	{

		M_8x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8) };
	}


	// calculates the dot product of a 5x9(left) matrix and a 9x9(right) matrix, and returns a 5x9 matrix 
	static M_5x9 DotProduct(M_5x9 left, M_9x9 right)
	{

		M_9x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9) };
	}


	// calculates the dot product of a 6(left) row vector and a 6(right) row vector, and returns a double
	static double DotProduct(RV_6 left, RV_6 right)
	{
		return left.N1 * right.N1 + left.N2 * right.N2 + left.N3 * right.N3 + left.N4 * right.N4 + left.N5 * right.N5 + left.N6 * right.N6;
	}



	// calculates the dot product of a 6(left) column vector and a 6(right) column vector, and returns a double
	static double DotProduct(CV_6 left, CV_6 right)
	{
		return left.M1 * right.M1 + left.M2 * right.M2 + left.M3 * right.M3 + left.M4 * right.M4 + left.M5 * right.M5 + left.M6 * right.M6;
	}



	// calculates the dot product of a 6(left) row vector and a 6(right) column vector, and returns a double
	static double DotProduct(RV_6 left, CV_6 right)
	{
		return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6;
	}


	// calculates the dot product of a 6x2(left) matrix and a 2x2(right) matrix, and returns a 6x2 matrix 
	static M_6x2 DotProduct(M_6x2 left, M_2x2 right)
	{

		M_2x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2) };
	}


	// calculates the dot product of a 6x2(left) matrix and a 2x3(right) matrix, and returns a 6x3 matrix 
	static M_6x3 DotProduct(M_6x2 left, M_2x3 right)
	{

		M_3x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3) };
	}


	// calculates the dot product of a 6x2(left) matrix and a 2x4(right) matrix, and returns a 6x4 matrix 
	static M_6x4 DotProduct(M_6x2 left, M_2x4 right)
	{

		M_4x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4) };
	}


	// calculates the dot product of a 6x2(left) matrix and a 2x5(right) matrix, and returns a 6x5 matrix 
	static M_6x5 DotProduct(M_6x2 left, M_2x5 right)
	{

		M_5x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5) };
	}


	// calculates the dot product of a 6x2(left) matrix and a 2x6(right) matrix, and returns a 6x6 matrix 
	static M_6x6 DotProduct(M_6x2 left, M_2x6 right)
	{

		M_6x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6) };
	}


	// calculates the dot product of a 6x2(left) matrix and a 2x7(right) matrix, and returns a 6x7 matrix 
	static M_6x7 DotProduct(M_6x2 left, M_2x7 right)
	{

		M_7x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7) };
	}


	// calculates the dot product of a 6x2(left) matrix and a 2x8(right) matrix, and returns a 6x8 matrix 
	static M_6x8 DotProduct(M_6x2 left, M_2x8 right)
	{

		M_8x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8) };
	}


	// calculates the dot product of a 6x2(left) matrix and a 2x9(right) matrix, and returns a 6x9 matrix 
	static M_6x9 DotProduct(M_6x2 left, M_2x9 right)
	{

		M_9x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9) };
	}


	// calculates the dot product of a 6x3(left) matrix and a 3x2(right) matrix, and returns a 6x2 matrix 
	static M_6x2 DotProduct(M_6x3 left, M_3x2 right)
	{

		M_2x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2) };
	}


	// calculates the dot product of a 6x3(left) matrix and a 3x3(right) matrix, and returns a 6x3 matrix 
	static M_6x3 DotProduct(M_6x3 left, M_3x3 right)
	{

		M_3x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3) };
	}


	// calculates the dot product of a 6x3(left) matrix and a 3x4(right) matrix, and returns a 6x4 matrix 
	static M_6x4 DotProduct(M_6x3 left, M_3x4 right)
	{

		M_4x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4) };
	}


	// calculates the dot product of a 6x3(left) matrix and a 3x5(right) matrix, and returns a 6x5 matrix 
	static M_6x5 DotProduct(M_6x3 left, M_3x5 right)
	{

		M_5x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5) };
	}


	// calculates the dot product of a 6x3(left) matrix and a 3x6(right) matrix, and returns a 6x6 matrix 
	static M_6x6 DotProduct(M_6x3 left, M_3x6 right)
	{

		M_6x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6) };
	}


	// calculates the dot product of a 6x3(left) matrix and a 3x7(right) matrix, and returns a 6x7 matrix 
	static M_6x7 DotProduct(M_6x3 left, M_3x7 right)
	{

		M_7x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7) };
	}


	// calculates the dot product of a 6x3(left) matrix and a 3x8(right) matrix, and returns a 6x8 matrix 
	static M_6x8 DotProduct(M_6x3 left, M_3x8 right)
	{

		M_8x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8) };
	}


	// calculates the dot product of a 6x3(left) matrix and a 3x9(right) matrix, and returns a 6x9 matrix 
	static M_6x9 DotProduct(M_6x3 left, M_3x9 right)
	{

		M_9x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9) };
	}


	// calculates the dot product of a 6x4(left) matrix and a 4x2(right) matrix, and returns a 6x2 matrix 
	static M_6x2 DotProduct(M_6x4 left, M_4x2 right)
	{

		M_2x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2) };
	}


	// calculates the dot product of a 6x4(left) matrix and a 4x3(right) matrix, and returns a 6x3 matrix 
	static M_6x3 DotProduct(M_6x4 left, M_4x3 right)
	{

		M_3x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3) };
	}


	// calculates the dot product of a 6x4(left) matrix and a 4x4(right) matrix, and returns a 6x4 matrix 
	static M_6x4 DotProduct(M_6x4 left, M_4x4 right)
	{

		M_4x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4) };
	}


	// calculates the dot product of a 6x4(left) matrix and a 4x5(right) matrix, and returns a 6x5 matrix 
	static M_6x5 DotProduct(M_6x4 left, M_4x5 right)
	{

		M_5x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5) };
	}


	// calculates the dot product of a 6x4(left) matrix and a 4x6(right) matrix, and returns a 6x6 matrix 
	static M_6x6 DotProduct(M_6x4 left, M_4x6 right)
	{

		M_6x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6) };
	}


	// calculates the dot product of a 6x4(left) matrix and a 4x7(right) matrix, and returns a 6x7 matrix 
	static M_6x7 DotProduct(M_6x4 left, M_4x7 right)
	{

		M_7x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7) };
	}


	// calculates the dot product of a 6x4(left) matrix and a 4x8(right) matrix, and returns a 6x8 matrix 
	static M_6x8 DotProduct(M_6x4 left, M_4x8 right)
	{

		M_8x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8) };
	}


	// calculates the dot product of a 6x4(left) matrix and a 4x9(right) matrix, and returns a 6x9 matrix 
	static M_6x9 DotProduct(M_6x4 left, M_4x9 right)
	{

		M_9x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9) };
	}


	// calculates the dot product of a 6x5(left) matrix and a 5x2(right) matrix, and returns a 6x2 matrix 
	static M_6x2 DotProduct(M_6x5 left, M_5x2 right)
	{

		M_2x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2) };
	}


	// calculates the dot product of a 6x5(left) matrix and a 5x3(right) matrix, and returns a 6x3 matrix 
	static M_6x3 DotProduct(M_6x5 left, M_5x3 right)
	{

		M_3x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3) };
	}


	// calculates the dot product of a 6x5(left) matrix and a 5x4(right) matrix, and returns a 6x4 matrix 
	static M_6x4 DotProduct(M_6x5 left, M_5x4 right)
	{

		M_4x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4) };
	}


	// calculates the dot product of a 6x5(left) matrix and a 5x5(right) matrix, and returns a 6x5 matrix 
	static M_6x5 DotProduct(M_6x5 left, M_5x5 right)
	{

		M_5x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5) };
	}


	// calculates the dot product of a 6x5(left) matrix and a 5x6(right) matrix, and returns a 6x6 matrix 
	static M_6x6 DotProduct(M_6x5 left, M_5x6 right)
	{

		M_6x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6) };
	}


	// calculates the dot product of a 6x5(left) matrix and a 5x7(right) matrix, and returns a 6x7 matrix 
	static M_6x7 DotProduct(M_6x5 left, M_5x7 right)
	{

		M_7x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7) };
	}


	// calculates the dot product of a 6x5(left) matrix and a 5x8(right) matrix, and returns a 6x8 matrix 
	static M_6x8 DotProduct(M_6x5 left, M_5x8 right)
	{

		M_8x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8) };
	}


	// calculates the dot product of a 6x5(left) matrix and a 5x9(right) matrix, and returns a 6x9 matrix 
	static M_6x9 DotProduct(M_6x5 left, M_5x9 right)
	{

		M_9x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9) };
	}


	// calculates the dot product of a 6x6(left) matrix and a 6x2(right) matrix, and returns a 6x2 matrix 
	static M_6x2 DotProduct(M_6x6 left, M_6x2 right)
	{

		M_2x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2) };
	}


	// calculates the dot product of a 6x6(left) matrix and a 6x3(right) matrix, and returns a 6x3 matrix 
	static M_6x3 DotProduct(M_6x6 left, M_6x3 right)
	{

		M_3x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3) };
	}


	// calculates the dot product of a 6x6(left) matrix and a 6x4(right) matrix, and returns a 6x4 matrix 
	static M_6x4 DotProduct(M_6x6 left, M_6x4 right)
	{

		M_4x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4) };
	}


	// calculates the dot product of a 6x6(left) matrix and a 6x5(right) matrix, and returns a 6x5 matrix 
	static M_6x5 DotProduct(M_6x6 left, M_6x5 right)
	{

		M_5x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5) };
	}


	// calculates the dot product of a 6x6(left) matrix and a 6x6(right) matrix, and returns a 6x6 matrix 
	static M_6x6 DotProduct(M_6x6 left, M_6x6 right)
	{

		M_6x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6) };
	}


	// calculates the dot product of a 6x6(left) matrix and a 6x7(right) matrix, and returns a 6x7 matrix 
	static M_6x7 DotProduct(M_6x6 left, M_6x7 right)
	{

		M_7x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7) };
	}


	// calculates the dot product of a 6x6(left) matrix and a 6x8(right) matrix, and returns a 6x8 matrix 
	static M_6x8 DotProduct(M_6x6 left, M_6x8 right)
	{

		M_8x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8) };
	}


	// calculates the dot product of a 6x6(left) matrix and a 6x9(right) matrix, and returns a 6x9 matrix 
	static M_6x9 DotProduct(M_6x6 left, M_6x9 right)
	{

		M_9x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9) };
	}


	// calculates the dot product of a 6x7(left) matrix and a 7x2(right) matrix, and returns a 6x2 matrix 
	static M_6x2 DotProduct(M_6x7 left, M_7x2 right)
	{

		M_2x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2) };
	}


	// calculates the dot product of a 6x7(left) matrix and a 7x3(right) matrix, and returns a 6x3 matrix 
	static M_6x3 DotProduct(M_6x7 left, M_7x3 right)
	{

		M_3x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3) };
	}


	// calculates the dot product of a 6x7(left) matrix and a 7x4(right) matrix, and returns a 6x4 matrix 
	static M_6x4 DotProduct(M_6x7 left, M_7x4 right)
	{

		M_4x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4) };
	}


	// calculates the dot product of a 6x7(left) matrix and a 7x5(right) matrix, and returns a 6x5 matrix 
	static M_6x5 DotProduct(M_6x7 left, M_7x5 right)
	{

		M_5x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5) };
	}


	// calculates the dot product of a 6x7(left) matrix and a 7x6(right) matrix, and returns a 6x6 matrix 
	static M_6x6 DotProduct(M_6x7 left, M_7x6 right)
	{

		M_6x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6) };
	}


	// calculates the dot product of a 6x7(left) matrix and a 7x7(right) matrix, and returns a 6x7 matrix 
	static M_6x7 DotProduct(M_6x7 left, M_7x7 right)
	{

		M_7x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7) };
	}


	// calculates the dot product of a 6x7(left) matrix and a 7x8(right) matrix, and returns a 6x8 matrix 
	static M_6x8 DotProduct(M_6x7 left, M_7x8 right)
	{

		M_8x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8) };
	}


	// calculates the dot product of a 6x7(left) matrix and a 7x9(right) matrix, and returns a 6x9 matrix 
	static M_6x9 DotProduct(M_6x7 left, M_7x9 right)
	{

		M_9x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9) };
	}


	// calculates the dot product of a 6x8(left) matrix and a 8x2(right) matrix, and returns a 6x2 matrix 
	static M_6x2 DotProduct(M_6x8 left, M_8x2 right)
	{

		M_2x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2) };
	}


	// calculates the dot product of a 6x8(left) matrix and a 8x3(right) matrix, and returns a 6x3 matrix 
	static M_6x3 DotProduct(M_6x8 left, M_8x3 right)
	{

		M_3x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3) };
	}


	// calculates the dot product of a 6x8(left) matrix and a 8x4(right) matrix, and returns a 6x4 matrix 
	static M_6x4 DotProduct(M_6x8 left, M_8x4 right)
	{

		M_4x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4) };
	}


	// calculates the dot product of a 6x8(left) matrix and a 8x5(right) matrix, and returns a 6x5 matrix 
	static M_6x5 DotProduct(M_6x8 left, M_8x5 right)
	{

		M_5x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5) };
	}


	// calculates the dot product of a 6x8(left) matrix and a 8x6(right) matrix, and returns a 6x6 matrix 
	static M_6x6 DotProduct(M_6x8 left, M_8x6 right)
	{

		M_6x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6) };
	}


	// calculates the dot product of a 6x8(left) matrix and a 8x7(right) matrix, and returns a 6x7 matrix 
	static M_6x7 DotProduct(M_6x8 left, M_8x7 right)
	{

		M_7x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7) };
	}


	// calculates the dot product of a 6x8(left) matrix and a 8x8(right) matrix, and returns a 6x8 matrix 
	static M_6x8 DotProduct(M_6x8 left, M_8x8 right)
	{

		M_8x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8) };
	}


	// calculates the dot product of a 6x8(left) matrix and a 8x9(right) matrix, and returns a 6x9 matrix 
	static M_6x9 DotProduct(M_6x8 left, M_8x9 right)
	{

		M_9x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9) };
	}


	// calculates the dot product of a 6x9(left) matrix and a 9x2(right) matrix, and returns a 6x2 matrix 
	static M_6x2 DotProduct(M_6x9 left, M_9x2 right)
	{

		M_2x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2) };
	}


	// calculates the dot product of a 6x9(left) matrix and a 9x3(right) matrix, and returns a 6x3 matrix 
	static M_6x3 DotProduct(M_6x9 left, M_9x3 right)
	{

		M_3x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3) };
	}


	// calculates the dot product of a 6x9(left) matrix and a 9x4(right) matrix, and returns a 6x4 matrix 
	static M_6x4 DotProduct(M_6x9 left, M_9x4 right)
	{

		M_4x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4) };
	}


	// calculates the dot product of a 6x9(left) matrix and a 9x5(right) matrix, and returns a 6x5 matrix 
	static M_6x5 DotProduct(M_6x9 left, M_9x5 right)
	{

		M_5x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5) };
	}


	// calculates the dot product of a 6x9(left) matrix and a 9x6(right) matrix, and returns a 6x6 matrix 
	static M_6x6 DotProduct(M_6x9 left, M_9x6 right)
	{

		M_6x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6) };
	}


	// calculates the dot product of a 6x9(left) matrix and a 9x7(right) matrix, and returns a 6x7 matrix 
	static M_6x7 DotProduct(M_6x9 left, M_9x7 right)
	{

		M_7x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7) };
	}


	// calculates the dot product of a 6x9(left) matrix and a 9x8(right) matrix, and returns a 6x8 matrix 
	static M_6x8 DotProduct(M_6x9 left, M_9x8 right)
	{

		M_8x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8) };
	}


	// calculates the dot product of a 6x9(left) matrix and a 9x9(right) matrix, and returns a 6x9 matrix 
	static M_6x9 DotProduct(M_6x9 left, M_9x9 right)
	{

		M_9x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9) };
	}


	// calculates the dot product of a 7(left) row vector and a 7(right) row vector, and returns a double
	static double DotProduct(RV_7 left, RV_7 right)
	{
		return left.N1 * right.N1 + left.N2 * right.N2 + left.N3 * right.N3 + left.N4 * right.N4 + left.N5 * right.N5 + left.N6 * right.N6 + left.N7 * right.N7;
	}



	// calculates the dot product of a 7(left) column vector and a 7(right) column vector, and returns a double
	static double DotProduct(CV_7 left, CV_7 right)
	{
		return left.M1 * right.M1 + left.M2 * right.M2 + left.M3 * right.M3 + left.M4 * right.M4 + left.M5 * right.M5 + left.M6 * right.M6 + left.M7 * right.M7;
	}



	// calculates the dot product of a 7(left) row vector and a 7(right) column vector, and returns a double
	static double DotProduct(RV_7 left, CV_7 right)
	{
		return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7;
	}


	// calculates the dot product of a 7x2(left) matrix and a 2x2(right) matrix, and returns a 7x2 matrix 
	static M_7x2 DotProduct(M_7x2 left, M_2x2 right)
	{

		M_2x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2) };
	}


	// calculates the dot product of a 7x2(left) matrix and a 2x3(right) matrix, and returns a 7x3 matrix 
	static M_7x3 DotProduct(M_7x2 left, M_2x3 right)
	{

		M_3x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3) };
	}


	// calculates the dot product of a 7x2(left) matrix and a 2x4(right) matrix, and returns a 7x4 matrix 
	static M_7x4 DotProduct(M_7x2 left, M_2x4 right)
	{

		M_4x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4) };
	}


	// calculates the dot product of a 7x2(left) matrix and a 2x5(right) matrix, and returns a 7x5 matrix 
	static M_7x5 DotProduct(M_7x2 left, M_2x5 right)
	{

		M_5x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5) };
	}


	// calculates the dot product of a 7x2(left) matrix and a 2x6(right) matrix, and returns a 7x6 matrix 
	static M_7x6 DotProduct(M_7x2 left, M_2x6 right)
	{

		M_6x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6) };
	}


	// calculates the dot product of a 7x2(left) matrix and a 2x7(right) matrix, and returns a 7x7 matrix 
	static M_7x7 DotProduct(M_7x2 left, M_2x7 right)
	{

		M_7x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7) };
	}


	// calculates the dot product of a 7x2(left) matrix and a 2x8(right) matrix, and returns a 7x8 matrix 
	static M_7x8 DotProduct(M_7x2 left, M_2x8 right)
	{

		M_8x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8) };
	}


	// calculates the dot product of a 7x2(left) matrix and a 2x9(right) matrix, and returns a 7x9 matrix 
	static M_7x9 DotProduct(M_7x2 left, M_2x9 right)
	{

		M_9x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9) };
	}


	// calculates the dot product of a 7x3(left) matrix and a 3x2(right) matrix, and returns a 7x2 matrix 
	static M_7x2 DotProduct(M_7x3 left, M_3x2 right)
	{

		M_2x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2) };
	}


	// calculates the dot product of a 7x3(left) matrix and a 3x3(right) matrix, and returns a 7x3 matrix 
	static M_7x3 DotProduct(M_7x3 left, M_3x3 right)
	{

		M_3x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3) };
	}


	// calculates the dot product of a 7x3(left) matrix and a 3x4(right) matrix, and returns a 7x4 matrix 
	static M_7x4 DotProduct(M_7x3 left, M_3x4 right)
	{

		M_4x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4) };
	}


	// calculates the dot product of a 7x3(left) matrix and a 3x5(right) matrix, and returns a 7x5 matrix 
	static M_7x5 DotProduct(M_7x3 left, M_3x5 right)
	{

		M_5x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5) };
	}


	// calculates the dot product of a 7x3(left) matrix and a 3x6(right) matrix, and returns a 7x6 matrix 
	static M_7x6 DotProduct(M_7x3 left, M_3x6 right)
	{

		M_6x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6) };
	}


	// calculates the dot product of a 7x3(left) matrix and a 3x7(right) matrix, and returns a 7x7 matrix 
	static M_7x7 DotProduct(M_7x3 left, M_3x7 right)
	{

		M_7x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7) };
	}


	// calculates the dot product of a 7x3(left) matrix and a 3x8(right) matrix, and returns a 7x8 matrix 
	static M_7x8 DotProduct(M_7x3 left, M_3x8 right)
	{

		M_8x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8) };
	}


	// calculates the dot product of a 7x3(left) matrix and a 3x9(right) matrix, and returns a 7x9 matrix 
	static M_7x9 DotProduct(M_7x3 left, M_3x9 right)
	{

		M_9x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9) };
	}


	// calculates the dot product of a 7x4(left) matrix and a 4x2(right) matrix, and returns a 7x2 matrix 
	static M_7x2 DotProduct(M_7x4 left, M_4x2 right)
	{

		M_2x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2) };
	}


	// calculates the dot product of a 7x4(left) matrix and a 4x3(right) matrix, and returns a 7x3 matrix 
	static M_7x3 DotProduct(M_7x4 left, M_4x3 right)
	{

		M_3x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3) };
	}


	// calculates the dot product of a 7x4(left) matrix and a 4x4(right) matrix, and returns a 7x4 matrix 
	static M_7x4 DotProduct(M_7x4 left, M_4x4 right)
	{

		M_4x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4) };
	}


	// calculates the dot product of a 7x4(left) matrix and a 4x5(right) matrix, and returns a 7x5 matrix 
	static M_7x5 DotProduct(M_7x4 left, M_4x5 right)
	{

		M_5x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5) };
	}


	// calculates the dot product of a 7x4(left) matrix and a 4x6(right) matrix, and returns a 7x6 matrix 
	static M_7x6 DotProduct(M_7x4 left, M_4x6 right)
	{

		M_6x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6) };
	}


	// calculates the dot product of a 7x4(left) matrix and a 4x7(right) matrix, and returns a 7x7 matrix 
	static M_7x7 DotProduct(M_7x4 left, M_4x7 right)
	{

		M_7x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7) };
	}


	// calculates the dot product of a 7x4(left) matrix and a 4x8(right) matrix, and returns a 7x8 matrix 
	static M_7x8 DotProduct(M_7x4 left, M_4x8 right)
	{

		M_8x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8) };
	}


	// calculates the dot product of a 7x4(left) matrix and a 4x9(right) matrix, and returns a 7x9 matrix 
	static M_7x9 DotProduct(M_7x4 left, M_4x9 right)
	{

		M_9x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9) };
	}


	// calculates the dot product of a 7x5(left) matrix and a 5x2(right) matrix, and returns a 7x2 matrix 
	static M_7x2 DotProduct(M_7x5 left, M_5x2 right)
	{

		M_2x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2) };
	}


	// calculates the dot product of a 7x5(left) matrix and a 5x3(right) matrix, and returns a 7x3 matrix 
	static M_7x3 DotProduct(M_7x5 left, M_5x3 right)
	{

		M_3x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3) };
	}


	// calculates the dot product of a 7x5(left) matrix and a 5x4(right) matrix, and returns a 7x4 matrix 
	static M_7x4 DotProduct(M_7x5 left, M_5x4 right)
	{

		M_4x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4) };
	}


	// calculates the dot product of a 7x5(left) matrix and a 5x5(right) matrix, and returns a 7x5 matrix 
	static M_7x5 DotProduct(M_7x5 left, M_5x5 right)
	{

		M_5x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5) };
	}


	// calculates the dot product of a 7x5(left) matrix and a 5x6(right) matrix, and returns a 7x6 matrix 
	static M_7x6 DotProduct(M_7x5 left, M_5x6 right)
	{

		M_6x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6) };
	}


	// calculates the dot product of a 7x5(left) matrix and a 5x7(right) matrix, and returns a 7x7 matrix 
	static M_7x7 DotProduct(M_7x5 left, M_5x7 right)
	{

		M_7x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7) };
	}


	// calculates the dot product of a 7x5(left) matrix and a 5x8(right) matrix, and returns a 7x8 matrix 
	static M_7x8 DotProduct(M_7x5 left, M_5x8 right)
	{

		M_8x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8) };
	}


	// calculates the dot product of a 7x5(left) matrix and a 5x9(right) matrix, and returns a 7x9 matrix 
	static M_7x9 DotProduct(M_7x5 left, M_5x9 right)
	{

		M_9x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9) };
	}


	// calculates the dot product of a 7x6(left) matrix and a 6x2(right) matrix, and returns a 7x2 matrix 
	static M_7x2 DotProduct(M_7x6 left, M_6x2 right)
	{

		M_2x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2) };
	}


	// calculates the dot product of a 7x6(left) matrix and a 6x3(right) matrix, and returns a 7x3 matrix 
	static M_7x3 DotProduct(M_7x6 left, M_6x3 right)
	{

		M_3x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3) };
	}


	// calculates the dot product of a 7x6(left) matrix and a 6x4(right) matrix, and returns a 7x4 matrix 
	static M_7x4 DotProduct(M_7x6 left, M_6x4 right)
	{

		M_4x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4) };
	}


	// calculates the dot product of a 7x6(left) matrix and a 6x5(right) matrix, and returns a 7x5 matrix 
	static M_7x5 DotProduct(M_7x6 left, M_6x5 right)
	{

		M_5x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5) };
	}


	// calculates the dot product of a 7x6(left) matrix and a 6x6(right) matrix, and returns a 7x6 matrix 
	static M_7x6 DotProduct(M_7x6 left, M_6x6 right)
	{

		M_6x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6) };
	}


	// calculates the dot product of a 7x6(left) matrix and a 6x7(right) matrix, and returns a 7x7 matrix 
	static M_7x7 DotProduct(M_7x6 left, M_6x7 right)
	{

		M_7x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7) };
	}


	// calculates the dot product of a 7x6(left) matrix and a 6x8(right) matrix, and returns a 7x8 matrix 
	static M_7x8 DotProduct(M_7x6 left, M_6x8 right)
	{

		M_8x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8) };
	}


	// calculates the dot product of a 7x6(left) matrix and a 6x9(right) matrix, and returns a 7x9 matrix 
	static M_7x9 DotProduct(M_7x6 left, M_6x9 right)
	{

		M_9x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9) };
	}


	// calculates the dot product of a 7x7(left) matrix and a 7x2(right) matrix, and returns a 7x2 matrix 
	static M_7x2 DotProduct(M_7x7 left, M_7x2 right)
	{

		M_2x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2) };
	}


	// calculates the dot product of a 7x7(left) matrix and a 7x3(right) matrix, and returns a 7x3 matrix 
	static M_7x3 DotProduct(M_7x7 left, M_7x3 right)
	{

		M_3x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3) };
	}


	// calculates the dot product of a 7x7(left) matrix and a 7x4(right) matrix, and returns a 7x4 matrix 
	static M_7x4 DotProduct(M_7x7 left, M_7x4 right)
	{

		M_4x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4) };
	}


	// calculates the dot product of a 7x7(left) matrix and a 7x5(right) matrix, and returns a 7x5 matrix 
	static M_7x5 DotProduct(M_7x7 left, M_7x5 right)
	{

		M_5x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5) };
	}


	// calculates the dot product of a 7x7(left) matrix and a 7x6(right) matrix, and returns a 7x6 matrix 
	static M_7x6 DotProduct(M_7x7 left, M_7x6 right)
	{

		M_6x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6) };
	}


	// calculates the dot product of a 7x7(left) matrix and a 7x7(right) matrix, and returns a 7x7 matrix 
	static M_7x7 DotProduct(M_7x7 left, M_7x7 right)
	{

		M_7x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7) };
	}


	// calculates the dot product of a 7x7(left) matrix and a 7x8(right) matrix, and returns a 7x8 matrix 
	static M_7x8 DotProduct(M_7x7 left, M_7x8 right)
	{

		M_8x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8) };
	}


	// calculates the dot product of a 7x7(left) matrix and a 7x9(right) matrix, and returns a 7x9 matrix 
	static M_7x9 DotProduct(M_7x7 left, M_7x9 right)
	{

		M_9x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9) };
	}


	// calculates the dot product of a 7x8(left) matrix and a 8x2(right) matrix, and returns a 7x2 matrix 
	static M_7x2 DotProduct(M_7x8 left, M_8x2 right)
	{

		M_2x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2) };
	}


	// calculates the dot product of a 7x8(left) matrix and a 8x3(right) matrix, and returns a 7x3 matrix 
	static M_7x3 DotProduct(M_7x8 left, M_8x3 right)
	{

		M_3x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3) };
	}


	// calculates the dot product of a 7x8(left) matrix and a 8x4(right) matrix, and returns a 7x4 matrix 
	static M_7x4 DotProduct(M_7x8 left, M_8x4 right)
	{

		M_4x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4) };
	}


	// calculates the dot product of a 7x8(left) matrix and a 8x5(right) matrix, and returns a 7x5 matrix 
	static M_7x5 DotProduct(M_7x8 left, M_8x5 right)
	{

		M_5x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5) };
	}


	// calculates the dot product of a 7x8(left) matrix and a 8x6(right) matrix, and returns a 7x6 matrix 
	static M_7x6 DotProduct(M_7x8 left, M_8x6 right)
	{

		M_6x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6) };
	}


	// calculates the dot product of a 7x8(left) matrix and a 8x7(right) matrix, and returns a 7x7 matrix 
	static M_7x7 DotProduct(M_7x8 left, M_8x7 right)
	{

		M_7x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7) };
	}


	// calculates the dot product of a 7x8(left) matrix and a 8x8(right) matrix, and returns a 7x8 matrix 
	static M_7x8 DotProduct(M_7x8 left, M_8x8 right)
	{

		M_8x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8) };
	}


	// calculates the dot product of a 7x8(left) matrix and a 8x9(right) matrix, and returns a 7x9 matrix 
	static M_7x9 DotProduct(M_7x8 left, M_8x9 right)
	{

		M_9x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9) };
	}


	// calculates the dot product of a 7x9(left) matrix and a 9x2(right) matrix, and returns a 7x2 matrix 
	static M_7x2 DotProduct(M_7x9 left, M_9x2 right)
	{

		M_2x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2) };
	}


	// calculates the dot product of a 7x9(left) matrix and a 9x3(right) matrix, and returns a 7x3 matrix 
	static M_7x3 DotProduct(M_7x9 left, M_9x3 right)
	{

		M_3x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3) };
	}


	// calculates the dot product of a 7x9(left) matrix and a 9x4(right) matrix, and returns a 7x4 matrix 
	static M_7x4 DotProduct(M_7x9 left, M_9x4 right)
	{

		M_4x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4) };
	}


	// calculates the dot product of a 7x9(left) matrix and a 9x5(right) matrix, and returns a 7x5 matrix 
	static M_7x5 DotProduct(M_7x9 left, M_9x5 right)
	{

		M_5x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5) };
	}


	// calculates the dot product of a 7x9(left) matrix and a 9x6(right) matrix, and returns a 7x6 matrix 
	static M_7x6 DotProduct(M_7x9 left, M_9x6 right)
	{

		M_6x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6) };
	}


	// calculates the dot product of a 7x9(left) matrix and a 9x7(right) matrix, and returns a 7x7 matrix 
	static M_7x7 DotProduct(M_7x9 left, M_9x7 right)
	{

		M_7x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7) };
	}


	// calculates the dot product of a 7x9(left) matrix and a 9x8(right) matrix, and returns a 7x8 matrix 
	static M_7x8 DotProduct(M_7x9 left, M_9x8 right)
	{

		M_8x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8) };
	}


	// calculates the dot product of a 7x9(left) matrix and a 9x9(right) matrix, and returns a 7x9 matrix 
	static M_7x9 DotProduct(M_7x9 left, M_9x9 right)
	{

		M_9x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9) };
	}


	// calculates the dot product of a 8(left) row vector and a 8(right) row vector, and returns a double
	static double DotProduct(RV_8 left, RV_8 right)
	{
		return left.N1 * right.N1 + left.N2 * right.N2 + left.N3 * right.N3 + left.N4 * right.N4 + left.N5 * right.N5 + left.N6 * right.N6 + left.N7 * right.N7 + left.N8 * right.N8;
	}



	// calculates the dot product of a 8(left) column vector and a 8(right) column vector, and returns a double
	static double DotProduct(CV_8 left, CV_8 right)
	{
		return left.M1 * right.M1 + left.M2 * right.M2 + left.M3 * right.M3 + left.M4 * right.M4 + left.M5 * right.M5 + left.M6 * right.M6 + left.M7 * right.M7 + left.M8 * right.M8;
	}



	// calculates the dot product of a 8(left) row vector and a 8(right) column vector, and returns a double
	static double DotProduct(RV_8 left, CV_8 right)
	{
		return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7 + left.N8 * right.M8;
	}


	// calculates the dot product of a 8x2(left) matrix and a 2x2(right) matrix, and returns a 8x2 matrix 
	static M_8x2 DotProduct(M_8x2 left, M_2x2 right)
	{

		M_2x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2) };
	}


	// calculates the dot product of a 8x2(left) matrix and a 2x3(right) matrix, and returns a 8x3 matrix 
	static M_8x3 DotProduct(M_8x2 left, M_2x3 right)
	{

		M_3x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3) };
	}


	// calculates the dot product of a 8x2(left) matrix and a 2x4(right) matrix, and returns a 8x4 matrix 
	static M_8x4 DotProduct(M_8x2 left, M_2x4 right)
	{

		M_4x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4) };
	}


	// calculates the dot product of a 8x2(left) matrix and a 2x5(right) matrix, and returns a 8x5 matrix 
	static M_8x5 DotProduct(M_8x2 left, M_2x5 right)
	{

		M_5x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5) };
	}


	// calculates the dot product of a 8x2(left) matrix and a 2x6(right) matrix, and returns a 8x6 matrix 
	static M_8x6 DotProduct(M_8x2 left, M_2x6 right)
	{

		M_6x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6) };
	}


	// calculates the dot product of a 8x2(left) matrix and a 2x7(right) matrix, and returns a 8x7 matrix 
	static M_8x7 DotProduct(M_8x2 left, M_2x7 right)
	{

		M_7x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7) };
	}


	// calculates the dot product of a 8x2(left) matrix and a 2x8(right) matrix, and returns a 8x8 matrix 
	static M_8x8 DotProduct(M_8x2 left, M_2x8 right)
	{

		M_8x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8) };
	}


	// calculates the dot product of a 8x2(left) matrix and a 2x9(right) matrix, and returns a 8x9 matrix 
	static M_8x9 DotProduct(M_8x2 left, M_2x9 right)
	{

		M_9x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9) };
	}


	// calculates the dot product of a 8x3(left) matrix and a 3x2(right) matrix, and returns a 8x2 matrix 
	static M_8x2 DotProduct(M_8x3 left, M_3x2 right)
	{

		M_2x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2) };
	}


	// calculates the dot product of a 8x3(left) matrix and a 3x3(right) matrix, and returns a 8x3 matrix 
	static M_8x3 DotProduct(M_8x3 left, M_3x3 right)
	{

		M_3x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3) };
	}


	// calculates the dot product of a 8x3(left) matrix and a 3x4(right) matrix, and returns a 8x4 matrix 
	static M_8x4 DotProduct(M_8x3 left, M_3x4 right)
	{

		M_4x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4) };
	}


	// calculates the dot product of a 8x3(left) matrix and a 3x5(right) matrix, and returns a 8x5 matrix 
	static M_8x5 DotProduct(M_8x3 left, M_3x5 right)
	{

		M_5x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5) };
	}


	// calculates the dot product of a 8x3(left) matrix and a 3x6(right) matrix, and returns a 8x6 matrix 
	static M_8x6 DotProduct(M_8x3 left, M_3x6 right)
	{

		M_6x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6) };
	}


	// calculates the dot product of a 8x3(left) matrix and a 3x7(right) matrix, and returns a 8x7 matrix 
	static M_8x7 DotProduct(M_8x3 left, M_3x7 right)
	{

		M_7x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7) };
	}


	// calculates the dot product of a 8x3(left) matrix and a 3x8(right) matrix, and returns a 8x8 matrix 
	static M_8x8 DotProduct(M_8x3 left, M_3x8 right)
	{

		M_8x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8) };
	}


	// calculates the dot product of a 8x3(left) matrix and a 3x9(right) matrix, and returns a 8x9 matrix 
	static M_8x9 DotProduct(M_8x3 left, M_3x9 right)
	{

		M_9x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9) };
	}


	// calculates the dot product of a 8x4(left) matrix and a 4x2(right) matrix, and returns a 8x2 matrix 
	static M_8x2 DotProduct(M_8x4 left, M_4x2 right)
	{

		M_2x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2) };
	}


	// calculates the dot product of a 8x4(left) matrix and a 4x3(right) matrix, and returns a 8x3 matrix 
	static M_8x3 DotProduct(M_8x4 left, M_4x3 right)
	{

		M_3x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3) };
	}


	// calculates the dot product of a 8x4(left) matrix and a 4x4(right) matrix, and returns a 8x4 matrix 
	static M_8x4 DotProduct(M_8x4 left, M_4x4 right)
	{

		M_4x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4) };
	}


	// calculates the dot product of a 8x4(left) matrix and a 4x5(right) matrix, and returns a 8x5 matrix 
	static M_8x5 DotProduct(M_8x4 left, M_4x5 right)
	{

		M_5x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5) };
	}


	// calculates the dot product of a 8x4(left) matrix and a 4x6(right) matrix, and returns a 8x6 matrix 
	static M_8x6 DotProduct(M_8x4 left, M_4x6 right)
	{

		M_6x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6) };
	}


	// calculates the dot product of a 8x4(left) matrix and a 4x7(right) matrix, and returns a 8x7 matrix 
	static M_8x7 DotProduct(M_8x4 left, M_4x7 right)
	{

		M_7x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7) };
	}


	// calculates the dot product of a 8x4(left) matrix and a 4x8(right) matrix, and returns a 8x8 matrix 
	static M_8x8 DotProduct(M_8x4 left, M_4x8 right)
	{

		M_8x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8) };
	}


	// calculates the dot product of a 8x4(left) matrix and a 4x9(right) matrix, and returns a 8x9 matrix 
	static M_8x9 DotProduct(M_8x4 left, M_4x9 right)
	{

		M_9x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9) };
	}


	// calculates the dot product of a 8x5(left) matrix and a 5x2(right) matrix, and returns a 8x2 matrix 
	static M_8x2 DotProduct(M_8x5 left, M_5x2 right)
	{

		M_2x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2) };
	}


	// calculates the dot product of a 8x5(left) matrix and a 5x3(right) matrix, and returns a 8x3 matrix 
	static M_8x3 DotProduct(M_8x5 left, M_5x3 right)
	{

		M_3x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3) };
	}


	// calculates the dot product of a 8x5(left) matrix and a 5x4(right) matrix, and returns a 8x4 matrix 
	static M_8x4 DotProduct(M_8x5 left, M_5x4 right)
	{

		M_4x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4) };
	}


	// calculates the dot product of a 8x5(left) matrix and a 5x5(right) matrix, and returns a 8x5 matrix 
	static M_8x5 DotProduct(M_8x5 left, M_5x5 right)
	{

		M_5x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5) };
	}


	// calculates the dot product of a 8x5(left) matrix and a 5x6(right) matrix, and returns a 8x6 matrix 
	static M_8x6 DotProduct(M_8x5 left, M_5x6 right)
	{

		M_6x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6) };
	}


	// calculates the dot product of a 8x5(left) matrix and a 5x7(right) matrix, and returns a 8x7 matrix 
	static M_8x7 DotProduct(M_8x5 left, M_5x7 right)
	{

		M_7x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7) };
	}


	// calculates the dot product of a 8x5(left) matrix and a 5x8(right) matrix, and returns a 8x8 matrix 
	static M_8x8 DotProduct(M_8x5 left, M_5x8 right)
	{

		M_8x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8) };
	}


	// calculates the dot product of a 8x5(left) matrix and a 5x9(right) matrix, and returns a 8x9 matrix 
	static M_8x9 DotProduct(M_8x5 left, M_5x9 right)
	{

		M_9x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9) };
	}


	// calculates the dot product of a 8x6(left) matrix and a 6x2(right) matrix, and returns a 8x2 matrix 
	static M_8x2 DotProduct(M_8x6 left, M_6x2 right)
	{

		M_2x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2) };
	}


	// calculates the dot product of a 8x6(left) matrix and a 6x3(right) matrix, and returns a 8x3 matrix 
	static M_8x3 DotProduct(M_8x6 left, M_6x3 right)
	{

		M_3x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3) };
	}


	// calculates the dot product of a 8x6(left) matrix and a 6x4(right) matrix, and returns a 8x4 matrix 
	static M_8x4 DotProduct(M_8x6 left, M_6x4 right)
	{

		M_4x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4) };
	}


	// calculates the dot product of a 8x6(left) matrix and a 6x5(right) matrix, and returns a 8x5 matrix 
	static M_8x5 DotProduct(M_8x6 left, M_6x5 right)
	{

		M_5x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5) };
	}


	// calculates the dot product of a 8x6(left) matrix and a 6x6(right) matrix, and returns a 8x6 matrix 
	static M_8x6 DotProduct(M_8x6 left, M_6x6 right)
	{

		M_6x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6) };
	}


	// calculates the dot product of a 8x6(left) matrix and a 6x7(right) matrix, and returns a 8x7 matrix 
	static M_8x7 DotProduct(M_8x6 left, M_6x7 right)
	{

		M_7x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7) };
	}


	// calculates the dot product of a 8x6(left) matrix and a 6x8(right) matrix, and returns a 8x8 matrix 
	static M_8x8 DotProduct(M_8x6 left, M_6x8 right)
	{

		M_8x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8) };
	}


	// calculates the dot product of a 8x6(left) matrix and a 6x9(right) matrix, and returns a 8x9 matrix 
	static M_8x9 DotProduct(M_8x6 left, M_6x9 right)
	{

		M_9x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9) };
	}


	// calculates the dot product of a 8x7(left) matrix and a 7x2(right) matrix, and returns a 8x2 matrix 
	static M_8x2 DotProduct(M_8x7 left, M_7x2 right)
	{

		M_2x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2) };
	}


	// calculates the dot product of a 8x7(left) matrix and a 7x3(right) matrix, and returns a 8x3 matrix 
	static M_8x3 DotProduct(M_8x7 left, M_7x3 right)
	{

		M_3x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3) };
	}


	// calculates the dot product of a 8x7(left) matrix and a 7x4(right) matrix, and returns a 8x4 matrix 
	static M_8x4 DotProduct(M_8x7 left, M_7x4 right)
	{

		M_4x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4) };
	}


	// calculates the dot product of a 8x7(left) matrix and a 7x5(right) matrix, and returns a 8x5 matrix 
	static M_8x5 DotProduct(M_8x7 left, M_7x5 right)
	{

		M_5x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5) };
	}


	// calculates the dot product of a 8x7(left) matrix and a 7x6(right) matrix, and returns a 8x6 matrix 
	static M_8x6 DotProduct(M_8x7 left, M_7x6 right)
	{

		M_6x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6) };
	}


	// calculates the dot product of a 8x7(left) matrix and a 7x7(right) matrix, and returns a 8x7 matrix 
	static M_8x7 DotProduct(M_8x7 left, M_7x7 right)
	{

		M_7x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7) };
	}


	// calculates the dot product of a 8x7(left) matrix and a 7x8(right) matrix, and returns a 8x8 matrix 
	static M_8x8 DotProduct(M_8x7 left, M_7x8 right)
	{

		M_8x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8) };
	}


	// calculates the dot product of a 8x7(left) matrix and a 7x9(right) matrix, and returns a 8x9 matrix 
	static M_8x9 DotProduct(M_8x7 left, M_7x9 right)
	{

		M_9x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9) };
	}


	// calculates the dot product of a 8x8(left) matrix and a 8x2(right) matrix, and returns a 8x2 matrix 
	static M_8x2 DotProduct(M_8x8 left, M_8x2 right)
	{

		M_2x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2) };
	}


	// calculates the dot product of a 8x8(left) matrix and a 8x3(right) matrix, and returns a 8x3 matrix 
	static M_8x3 DotProduct(M_8x8 left, M_8x3 right)
	{

		M_3x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3) };
	}


	// calculates the dot product of a 8x8(left) matrix and a 8x4(right) matrix, and returns a 8x4 matrix 
	static M_8x4 DotProduct(M_8x8 left, M_8x4 right)
	{

		M_4x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4) };
	}


	// calculates the dot product of a 8x8(left) matrix and a 8x5(right) matrix, and returns a 8x5 matrix 
	static M_8x5 DotProduct(M_8x8 left, M_8x5 right)
	{

		M_5x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5) };
	}


	// calculates the dot product of a 8x8(left) matrix and a 8x6(right) matrix, and returns a 8x6 matrix 
	static M_8x6 DotProduct(M_8x8 left, M_8x6 right)
	{

		M_6x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6) };
	}


	// calculates the dot product of a 8x8(left) matrix and a 8x7(right) matrix, and returns a 8x7 matrix 
	static M_8x7 DotProduct(M_8x8 left, M_8x7 right)
	{

		M_7x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7) };
	}


	// calculates the dot product of a 8x8(left) matrix and a 8x8(right) matrix, and returns a 8x8 matrix 
	static M_8x8 DotProduct(M_8x8 left, M_8x8 right)
	{

		M_8x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8) };
	}


	// calculates the dot product of a 8x8(left) matrix and a 8x9(right) matrix, and returns a 8x9 matrix 
	static M_8x9 DotProduct(M_8x8 left, M_8x9 right)
	{

		M_9x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9) };
	}


	// calculates the dot product of a 8x9(left) matrix and a 9x2(right) matrix, and returns a 8x2 matrix 
	static M_8x2 DotProduct(M_8x9 left, M_9x2 right)
	{

		M_2x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2) };
	}


	// calculates the dot product of a 8x9(left) matrix and a 9x3(right) matrix, and returns a 8x3 matrix 
	static M_8x3 DotProduct(M_8x9 left, M_9x3 right)
	{

		M_3x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3) };
	}


	// calculates the dot product of a 8x9(left) matrix and a 9x4(right) matrix, and returns a 8x4 matrix 
	static M_8x4 DotProduct(M_8x9 left, M_9x4 right)
	{

		M_4x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4) };
	}


	// calculates the dot product of a 8x9(left) matrix and a 9x5(right) matrix, and returns a 8x5 matrix 
	static M_8x5 DotProduct(M_8x9 left, M_9x5 right)
	{

		M_5x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5) };
	}


	// calculates the dot product of a 8x9(left) matrix and a 9x6(right) matrix, and returns a 8x6 matrix 
	static M_8x6 DotProduct(M_8x9 left, M_9x6 right)
	{

		M_6x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6) };
	}


	// calculates the dot product of a 8x9(left) matrix and a 9x7(right) matrix, and returns a 8x7 matrix 
	static M_8x7 DotProduct(M_8x9 left, M_9x7 right)
	{

		M_7x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7) };
	}


	// calculates the dot product of a 8x9(left) matrix and a 9x8(right) matrix, and returns a 8x8 matrix 
	static M_8x8 DotProduct(M_8x9 left, M_9x8 right)
	{

		M_8x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8) };
	}


	// calculates the dot product of a 8x9(left) matrix and a 9x9(right) matrix, and returns a 8x9 matrix 
	static M_8x9 DotProduct(M_8x9 left, M_9x9 right)
	{

		M_9x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9) };
	}


	// calculates the dot product of a 9(left) row vector and a 9(right) row vector, and returns a double
	static double DotProduct(RV_9 left, RV_9 right)
	{
		return left.N1 * right.N1 + left.N2 * right.N2 + left.N3 * right.N3 + left.N4 * right.N4 + left.N5 * right.N5 + left.N6 * right.N6 + left.N7 * right.N7 + left.N8 * right.N8 + left.N9 * right.N9;
	}



	// calculates the dot product of a 9(left) column vector and a 9(right) column vector, and returns a double
	static double DotProduct(CV_9 left, CV_9 right)
	{
		return left.M1 * right.M1 + left.M2 * right.M2 + left.M3 * right.M3 + left.M4 * right.M4 + left.M5 * right.M5 + left.M6 * right.M6 + left.M7 * right.M7 + left.M8 * right.M8 + left.M9 * right.M9;
	}



	// calculates the dot product of a 9(left) row vector and a 9(right) column vector, and returns a double
	static double DotProduct(RV_9 left, CV_9 right)
	{
		return left.N1 * right.M1 + left.N2 * right.M2 + left.N3 * right.M3 + left.N4 * right.M4 + left.N5 * right.M5 + left.N6 * right.M6 + left.N7 * right.M7 + left.N8 * right.M8 + left.N9 * right.M9;
	}


	// calculates the dot product of a 9x2(left) matrix and a 2x2(right) matrix, and returns a 9x2 matrix 
	static M_9x2 DotProduct(M_9x2 left, M_2x2 right)
	{

		M_2x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2) };
	}


	// calculates the dot product of a 9x2(left) matrix and a 2x3(right) matrix, and returns a 9x3 matrix 
	static M_9x3 DotProduct(M_9x2 left, M_2x3 right)
	{

		M_3x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3) };
	}


	// calculates the dot product of a 9x2(left) matrix and a 2x4(right) matrix, and returns a 9x4 matrix 
	static M_9x4 DotProduct(M_9x2 left, M_2x4 right)
	{

		M_4x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4) };
	}


	// calculates the dot product of a 9x2(left) matrix and a 2x5(right) matrix, and returns a 9x5 matrix 
	static M_9x5 DotProduct(M_9x2 left, M_2x5 right)
	{

		M_5x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5) };
	}


	// calculates the dot product of a 9x2(left) matrix and a 2x6(right) matrix, and returns a 9x6 matrix 
	static M_9x6 DotProduct(M_9x2 left, M_2x6 right)
	{

		M_6x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6) };
	}


	// calculates the dot product of a 9x2(left) matrix and a 2x7(right) matrix, and returns a 9x7 matrix 
	static M_9x7 DotProduct(M_9x2 left, M_2x7 right)
	{

		M_7x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7) };
	}


	// calculates the dot product of a 9x2(left) matrix and a 2x8(right) matrix, and returns a 9x8 matrix 
	static M_9x8 DotProduct(M_9x2 left, M_2x8 right)
	{

		M_8x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8) };
	}


	// calculates the dot product of a 9x2(left) matrix and a 2x9(right) matrix, and returns a 9x9 matrix 
	static M_9x9 DotProduct(M_9x2 left, M_2x9 right)
	{

		M_9x2 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M9) };
	}


	// calculates the dot product of a 9x3(left) matrix and a 3x2(right) matrix, and returns a 9x2 matrix 
	static M_9x2 DotProduct(M_9x3 left, M_3x2 right)
	{

		M_2x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2) };
	}


	// calculates the dot product of a 9x3(left) matrix and a 3x3(right) matrix, and returns a 9x3 matrix 
	static M_9x3 DotProduct(M_9x3 left, M_3x3 right)
	{

		M_3x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3) };
	}


	// calculates the dot product of a 9x3(left) matrix and a 3x4(right) matrix, and returns a 9x4 matrix 
	static M_9x4 DotProduct(M_9x3 left, M_3x4 right)
	{

		M_4x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4) };
	}


	// calculates the dot product of a 9x3(left) matrix and a 3x5(right) matrix, and returns a 9x5 matrix 
	static M_9x5 DotProduct(M_9x3 left, M_3x5 right)
	{

		M_5x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5) };
	}


	// calculates the dot product of a 9x3(left) matrix and a 3x6(right) matrix, and returns a 9x6 matrix 
	static M_9x6 DotProduct(M_9x3 left, M_3x6 right)
	{

		M_6x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6) };
	}


	// calculates the dot product of a 9x3(left) matrix and a 3x7(right) matrix, and returns a 9x7 matrix 
	static M_9x7 DotProduct(M_9x3 left, M_3x7 right)
	{

		M_7x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7) };
	}


	// calculates the dot product of a 9x3(left) matrix and a 3x8(right) matrix, and returns a 9x8 matrix 
	static M_9x8 DotProduct(M_9x3 left, M_3x8 right)
	{

		M_8x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8) };
	}


	// calculates the dot product of a 9x3(left) matrix and a 3x9(right) matrix, and returns a 9x9 matrix 
	static M_9x9 DotProduct(M_9x3 left, M_3x9 right)
	{

		M_9x3 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M9) };
	}


	// calculates the dot product of a 9x4(left) matrix and a 4x2(right) matrix, and returns a 9x2 matrix 
	static M_9x2 DotProduct(M_9x4 left, M_4x2 right)
	{

		M_2x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2) };
	}


	// calculates the dot product of a 9x4(left) matrix and a 4x3(right) matrix, and returns a 9x3 matrix 
	static M_9x3 DotProduct(M_9x4 left, M_4x3 right)
	{

		M_3x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3) };
	}


	// calculates the dot product of a 9x4(left) matrix and a 4x4(right) matrix, and returns a 9x4 matrix 
	static M_9x4 DotProduct(M_9x4 left, M_4x4 right)
	{

		M_4x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4) };
	}


	// calculates the dot product of a 9x4(left) matrix and a 4x5(right) matrix, and returns a 9x5 matrix 
	static M_9x5 DotProduct(M_9x4 left, M_4x5 right)
	{

		M_5x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5) };
	}


	// calculates the dot product of a 9x4(left) matrix and a 4x6(right) matrix, and returns a 9x6 matrix 
	static M_9x6 DotProduct(M_9x4 left, M_4x6 right)
	{

		M_6x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6) };
	}


	// calculates the dot product of a 9x4(left) matrix and a 4x7(right) matrix, and returns a 9x7 matrix 
	static M_9x7 DotProduct(M_9x4 left, M_4x7 right)
	{

		M_7x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7) };
	}


	// calculates the dot product of a 9x4(left) matrix and a 4x8(right) matrix, and returns a 9x8 matrix 
	static M_9x8 DotProduct(M_9x4 left, M_4x8 right)
	{

		M_8x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8) };
	}


	// calculates the dot product of a 9x4(left) matrix and a 4x9(right) matrix, and returns a 9x9 matrix 
	static M_9x9 DotProduct(M_9x4 left, M_4x9 right)
	{

		M_9x4 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M9) };
	}


	// calculates the dot product of a 9x5(left) matrix and a 5x2(right) matrix, and returns a 9x2 matrix 
	static M_9x2 DotProduct(M_9x5 left, M_5x2 right)
	{

		M_2x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2) };
	}


	// calculates the dot product of a 9x5(left) matrix and a 5x3(right) matrix, and returns a 9x3 matrix 
	static M_9x3 DotProduct(M_9x5 left, M_5x3 right)
	{

		M_3x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3) };
	}


	// calculates the dot product of a 9x5(left) matrix and a 5x4(right) matrix, and returns a 9x4 matrix 
	static M_9x4 DotProduct(M_9x5 left, M_5x4 right)
	{

		M_4x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4) };
	}


	// calculates the dot product of a 9x5(left) matrix and a 5x5(right) matrix, and returns a 9x5 matrix 
	static M_9x5 DotProduct(M_9x5 left, M_5x5 right)
	{

		M_5x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5) };
	}


	// calculates the dot product of a 9x5(left) matrix and a 5x6(right) matrix, and returns a 9x6 matrix 
	static M_9x6 DotProduct(M_9x5 left, M_5x6 right)
	{

		M_6x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6) };
	}


	// calculates the dot product of a 9x5(left) matrix and a 5x7(right) matrix, and returns a 9x7 matrix 
	static M_9x7 DotProduct(M_9x5 left, M_5x7 right)
	{

		M_7x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7) };
	}


	// calculates the dot product of a 9x5(left) matrix and a 5x8(right) matrix, and returns a 9x8 matrix 
	static M_9x8 DotProduct(M_9x5 left, M_5x8 right)
	{

		M_8x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8) };
	}


	// calculates the dot product of a 9x5(left) matrix and a 5x9(right) matrix, and returns a 9x9 matrix 
	static M_9x9 DotProduct(M_9x5 left, M_5x9 right)
	{

		M_9x5 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M9) };
	}


	// calculates the dot product of a 9x6(left) matrix and a 6x2(right) matrix, and returns a 9x2 matrix 
	static M_9x2 DotProduct(M_9x6 left, M_6x2 right)
	{

		M_2x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2) };
	}


	// calculates the dot product of a 9x6(left) matrix and a 6x3(right) matrix, and returns a 9x3 matrix 
	static M_9x3 DotProduct(M_9x6 left, M_6x3 right)
	{

		M_3x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3) };
	}


	// calculates the dot product of a 9x6(left) matrix and a 6x4(right) matrix, and returns a 9x4 matrix 
	static M_9x4 DotProduct(M_9x6 left, M_6x4 right)
	{

		M_4x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4) };
	}


	// calculates the dot product of a 9x6(left) matrix and a 6x5(right) matrix, and returns a 9x5 matrix 
	static M_9x5 DotProduct(M_9x6 left, M_6x5 right)
	{

		M_5x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5) };
	}


	// calculates the dot product of a 9x6(left) matrix and a 6x6(right) matrix, and returns a 9x6 matrix 
	static M_9x6 DotProduct(M_9x6 left, M_6x6 right)
	{

		M_6x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6) };
	}


	// calculates the dot product of a 9x6(left) matrix and a 6x7(right) matrix, and returns a 9x7 matrix 
	static M_9x7 DotProduct(M_9x6 left, M_6x7 right)
	{

		M_7x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7) };
	}


	// calculates the dot product of a 9x6(left) matrix and a 6x8(right) matrix, and returns a 9x8 matrix 
	static M_9x8 DotProduct(M_9x6 left, M_6x8 right)
	{

		M_8x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8) };
	}


	// calculates the dot product of a 9x6(left) matrix and a 6x9(right) matrix, and returns a 9x9 matrix 
	static M_9x9 DotProduct(M_9x6 left, M_6x9 right)
	{

		M_9x6 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M9) };
	}


	// calculates the dot product of a 9x7(left) matrix and a 7x2(right) matrix, and returns a 9x2 matrix 
	static M_9x2 DotProduct(M_9x7 left, M_7x2 right)
	{

		M_2x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2) };
	}


	// calculates the dot product of a 9x7(left) matrix and a 7x3(right) matrix, and returns a 9x3 matrix 
	static M_9x3 DotProduct(M_9x7 left, M_7x3 right)
	{

		M_3x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3) };
	}


	// calculates the dot product of a 9x7(left) matrix and a 7x4(right) matrix, and returns a 9x4 matrix 
	static M_9x4 DotProduct(M_9x7 left, M_7x4 right)
	{

		M_4x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4) };
	}


	// calculates the dot product of a 9x7(left) matrix and a 7x5(right) matrix, and returns a 9x5 matrix 
	static M_9x5 DotProduct(M_9x7 left, M_7x5 right)
	{

		M_5x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5) };
	}


	// calculates the dot product of a 9x7(left) matrix and a 7x6(right) matrix, and returns a 9x6 matrix 
	static M_9x6 DotProduct(M_9x7 left, M_7x6 right)
	{

		M_6x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6) };
	}


	// calculates the dot product of a 9x7(left) matrix and a 7x7(right) matrix, and returns a 9x7 matrix 
	static M_9x7 DotProduct(M_9x7 left, M_7x7 right)
	{

		M_7x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7) };
	}


	// calculates the dot product of a 9x7(left) matrix and a 7x8(right) matrix, and returns a 9x8 matrix 
	static M_9x8 DotProduct(M_9x7 left, M_7x8 right)
	{

		M_8x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8) };
	}


	// calculates the dot product of a 9x7(left) matrix and a 7x9(right) matrix, and returns a 9x9 matrix 
	static M_9x9 DotProduct(M_9x7 left, M_7x9 right)
	{

		M_9x7 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M9) };
	}


	// calculates the dot product of a 9x8(left) matrix and a 8x2(right) matrix, and returns a 9x2 matrix 
	static M_9x2 DotProduct(M_9x8 left, M_8x2 right)
	{

		M_2x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2) };
	}


	// calculates the dot product of a 9x8(left) matrix and a 8x3(right) matrix, and returns a 9x3 matrix 
	static M_9x3 DotProduct(M_9x8 left, M_8x3 right)
	{

		M_3x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3) };
	}


	// calculates the dot product of a 9x8(left) matrix and a 8x4(right) matrix, and returns a 9x4 matrix 
	static M_9x4 DotProduct(M_9x8 left, M_8x4 right)
	{

		M_4x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4) };
	}


	// calculates the dot product of a 9x8(left) matrix and a 8x5(right) matrix, and returns a 9x5 matrix 
	static M_9x5 DotProduct(M_9x8 left, M_8x5 right)
	{

		M_5x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5) };
	}


	// calculates the dot product of a 9x8(left) matrix and a 8x6(right) matrix, and returns a 9x6 matrix 
	static M_9x6 DotProduct(M_9x8 left, M_8x6 right)
	{

		M_6x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6) };
	}


	// calculates the dot product of a 9x8(left) matrix and a 8x7(right) matrix, and returns a 9x7 matrix 
	static M_9x7 DotProduct(M_9x8 left, M_8x7 right)
	{

		M_7x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7) };
	}


	// calculates the dot product of a 9x8(left) matrix and a 8x8(right) matrix, and returns a 9x8 matrix 
	static M_9x8 DotProduct(M_9x8 left, M_8x8 right)
	{

		M_8x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8) };
	}


	// calculates the dot product of a 9x8(left) matrix and a 8x9(right) matrix, and returns a 9x9 matrix 
	static M_9x9 DotProduct(M_9x8 left, M_8x9 right)
	{

		M_9x8 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M9) };
	}


	// calculates the dot product of a 9x9(left) matrix and a 9x2(right) matrix, and returns a 9x2 matrix 
	static M_9x2 DotProduct(M_9x9 left, M_9x2 right)
	{

		M_2x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2) };
	}


	// calculates the dot product of a 9x9(left) matrix and a 9x3(right) matrix, and returns a 9x3 matrix 
	static M_9x3 DotProduct(M_9x9 left, M_9x3 right)
	{

		M_3x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3) };
	}


	// calculates the dot product of a 9x9(left) matrix and a 9x4(right) matrix, and returns a 9x4 matrix 
	static M_9x4 DotProduct(M_9x9 left, M_9x4 right)
	{

		M_4x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4) };
	}


	// calculates the dot product of a 9x9(left) matrix and a 9x5(right) matrix, and returns a 9x5 matrix 
	static M_9x5 DotProduct(M_9x9 left, M_9x5 right)
	{

		M_5x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5) };
	}


	// calculates the dot product of a 9x9(left) matrix and a 9x6(right) matrix, and returns a 9x6 matrix 
	static M_9x6 DotProduct(M_9x9 left, M_9x6 right)
	{

		M_6x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6) };
	}


	// calculates the dot product of a 9x9(left) matrix and a 9x7(right) matrix, and returns a 9x7 matrix 
	static M_9x7 DotProduct(M_9x9 left, M_9x7 right)
	{

		M_7x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7) };
	}


	// calculates the dot product of a 9x9(left) matrix and a 9x8(right) matrix, and returns a 9x8 matrix 
	static M_9x8 DotProduct(M_9x9 left, M_9x8 right)
	{

		M_8x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8) };
	}


	// calculates the dot product of a 9x9(left) matrix and a 9x9(right) matrix, and returns a 9x9 matrix 
	static M_9x9 DotProduct(M_9x9 left, M_9x9 right)
	{

		M_9x9 transpose_right = Transpose(right);
		return 	{ DotProduct(left.M1 , transpose_right.M1),DotProduct(left.M1 , transpose_right.M2),DotProduct(left.M1 , transpose_right.M3),DotProduct(left.M1 , transpose_right.M4),DotProduct(left.M1 , transpose_right.M5),DotProduct(left.M1 , transpose_right.M6),DotProduct(left.M1 , transpose_right.M7),DotProduct(left.M1 , transpose_right.M8),DotProduct(left.M1 , transpose_right.M9),DotProduct(left.M2 , transpose_right.M1),DotProduct(left.M2 , transpose_right.M2),DotProduct(left.M2 , transpose_right.M3),DotProduct(left.M2 , transpose_right.M4),DotProduct(left.M2 , transpose_right.M5),DotProduct(left.M2 , transpose_right.M6),DotProduct(left.M2 , transpose_right.M7),DotProduct(left.M2 , transpose_right.M8),DotProduct(left.M2 , transpose_right.M9),DotProduct(left.M3 , transpose_right.M1),DotProduct(left.M3 , transpose_right.M2),DotProduct(left.M3 , transpose_right.M3),DotProduct(left.M3 , transpose_right.M4),DotProduct(left.M3 , transpose_right.M5),DotProduct(left.M3 , transpose_right.M6),DotProduct(left.M3 , transpose_right.M7),DotProduct(left.M3 , transpose_right.M8),DotProduct(left.M3 , transpose_right.M9),DotProduct(left.M4 , transpose_right.M1),DotProduct(left.M4 , transpose_right.M2),DotProduct(left.M4 , transpose_right.M3),DotProduct(left.M4 , transpose_right.M4),DotProduct(left.M4 , transpose_right.M5),DotProduct(left.M4 , transpose_right.M6),DotProduct(left.M4 , transpose_right.M7),DotProduct(left.M4 , transpose_right.M8),DotProduct(left.M4 , transpose_right.M9),DotProduct(left.M5 , transpose_right.M1),DotProduct(left.M5 , transpose_right.M2),DotProduct(left.M5 , transpose_right.M3),DotProduct(left.M5 , transpose_right.M4),DotProduct(left.M5 , transpose_right.M5),DotProduct(left.M5 , transpose_right.M6),DotProduct(left.M5 , transpose_right.M7),DotProduct(left.M5 , transpose_right.M8),DotProduct(left.M5 , transpose_right.M9),DotProduct(left.M6 , transpose_right.M1),DotProduct(left.M6 , transpose_right.M2),DotProduct(left.M6 , transpose_right.M3),DotProduct(left.M6 , transpose_right.M4),DotProduct(left.M6 , transpose_right.M5),DotProduct(left.M6 , transpose_right.M6),DotProduct(left.M6 , transpose_right.M7),DotProduct(left.M6 , transpose_right.M8),DotProduct(left.M6 , transpose_right.M9),DotProduct(left.M7 , transpose_right.M1),DotProduct(left.M7 , transpose_right.M2),DotProduct(left.M7 , transpose_right.M3),DotProduct(left.M7 , transpose_right.M4),DotProduct(left.M7 , transpose_right.M5),DotProduct(left.M7 , transpose_right.M6),DotProduct(left.M7 , transpose_right.M7),DotProduct(left.M7 , transpose_right.M8),DotProduct(left.M7 , transpose_right.M9),DotProduct(left.M8 , transpose_right.M1),DotProduct(left.M8 , transpose_right.M2),DotProduct(left.M8 , transpose_right.M3),DotProduct(left.M8 , transpose_right.M4),DotProduct(left.M8 , transpose_right.M5),DotProduct(left.M8 , transpose_right.M6),DotProduct(left.M8 , transpose_right.M7),DotProduct(left.M8 , transpose_right.M8),DotProduct(left.M8 , transpose_right.M9),DotProduct(left.M9 , transpose_right.M1),DotProduct(left.M9 , transpose_right.M2),DotProduct(left.M9 , transpose_right.M3),DotProduct(left.M9 , transpose_right.M4),DotProduct(left.M9 , transpose_right.M5),DotProduct(left.M9 , transpose_right.M6),DotProduct(left.M9 , transpose_right.M7),DotProduct(left.M9 , transpose_right.M8),DotProduct(left.M9 , transpose_right.M9) };
	}

};




