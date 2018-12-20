#pragma once
#include <stdint.h>
//
//RowVector[columns]
struct RV_2
{
	double N1;
	double N2;
};
//RowVector[columns]
struct RV_3
{
	double N1;
	double N2;
	double N3;
};
//RowVector[columns]
struct RV_4
{
	double N1;
	double N2;
	double N3;
	double N4;
};
//RowVector[columns]
struct RV_5
{
	double N1;
	double N2;
	double N3;
	double N4;
	double N5;
};
//RowVector[columns]
struct RV_6
{
	double N1;
	double N2;
	double N3;
	double N4;
	double N5;
	double N6;
};
//RowVector[columns]
struct RV_7
{
	double N1;
	double N2;
	double N3;
	double N4;
	double N5;
	double N6;
	double N7;
};

//RowVector[columns]
struct RV_8
{
	double N1;
	double N2;
	double N3;
	double N4;
	double N5;
	double N6;
	double N7;
	double N8;
};
//RowVector[columns]
struct RV_9
{
	double N1;
	double N2;
	double N3;
	double N4;
	double N5;
	double N6;
	double N7;
	double N8;
	double N9;
};
//ColumnVector[rows]
struct CV_2
{
	double M1;
	double M2;
};
//ColumnVector[rows]
struct CV_3
{
	double M1;
	double M2;
	double M3;
};
//ColumnVector[rows]
struct CV_4
{
	double M1;
	double M2;
	double M3;
	double M4;
};
//ColumnVector[rows]
struct CV_5
{
	double M1;
	double M2;
	double M3;
	double M4;
	double M5;
};
//ColumnVector[rows]
struct CV_6
{
	double M1;
	double M2;
	double M3;
	double M4;
	double M5;
	double M6;
};
//ColumnVector[rows]
struct CV_7
{
	double M1;
	double M2;
	double M3;
	double M4;
	double M5;
	double M6;
	double M7;
};
//ColumnVector[rows]
struct CV_8
{
	double M1;
	double M2;
	double M3;
	double M4;
	double M5;
	double M6;
	double M7;
	double M8;
};
//ColumnVector[rows]
struct CV_9
{
	double M1;
	double M2;
	double M3;
	double M4;
	double M5;
	double M6;
	double M7;
	double M8;
	double M9;
};

//Matrix[rows=2]x[columns=2]
struct M_2x2
{
	RV_2 M1;
	RV_2 M2;
};
//Matrix[rows=2]x[columns=3]
struct M_2x3
{
	RV_3 M1;
	RV_3 M2;
};
//Matrix[rows=2]x[columns=4]
struct M_2x4
{
	RV_4 M1;
	RV_4 M2;
};
//Matrix[rows=2]x[columns=5]
struct M_2x5
{
	RV_5 M1;
	RV_5 M2;
};
//Matrix[rows=2]x[columns=6]
struct M_2x6
{
	RV_6 M1;
	RV_6 M2;
};
//Matrix[rows=2]x[columns=7]
struct M_2x7
{
	RV_7 M1;
	RV_7 M2;
};
//Matrix[rows=2]x[columns=8]
struct M_2x8
{
	RV_8 M1;
	RV_8 M2;
};
//Matrix[rows=2]x[columns=9]
struct M_2x9
{
	RV_9 M1;
	RV_9 M2;
};
//Matrix[rows=3]x[columns=2]
struct M_3x2
{
	RV_2 M1;
	RV_2 M2;
	RV_2 M3;
};
//Matrix[rows=3]x[columns=3]
struct M_3x3
{
	RV_3 M1;
	RV_3 M2;
	RV_3 M3;
};
//Matrix[rows=3]x[columns=4]
struct M_3x4
{
	RV_4 M1;
	RV_4 M2;
	RV_4 M3;
};
//Matrix[rows=3]x[columns=5]
struct M_3x5
{
	RV_5 M1;
	RV_5 M2;
	RV_5 M3;
};
//Matrix[rows=3]x[columns=6]
struct M_3x6
{
	RV_6 M1;
	RV_6 M2;
	RV_6 M3;
};
//Matrix[rows=3]x[columns=7]
struct M_3x7
{
	RV_7 M1;
	RV_7 M2;
	RV_7 M3;
};
//Matrix[rows=3]x[columns=8]
struct M_3x8
{
	RV_8 M1;
	RV_8 M2;
	RV_8 M3;
};
//Matrix[rows=3]x[columns=9]
struct M_3x9
{
	RV_9 M1;
	RV_9 M2;
	RV_9 M3;
};
//Matrix[rows=4]x[columns=2]
struct M_4x2
{
	RV_2 M1;
	RV_2 M2;
	RV_2 M3;
	RV_2 M4;
};
//Matrix[rows=4]x[columns=3]
struct M_4x3
{
	RV_3 M1;
	RV_3 M2;
	RV_3 M3;
	RV_3 M4;
};
//Matrix[rows=4]x[columns=4]
struct M_4x4
{
	RV_4 M1;
	RV_4 M2;
	RV_4 M3;
	RV_4 M4;
};
//Matrix[rows=4]x[columns=5]
struct M_4x5
{
	RV_5 M1;
	RV_5 M2;
	RV_5 M3;
	RV_5 M4;
};
//Matrix[rows=4]x[columns=6]
struct M_4x6
{
	RV_6 M1;
	RV_6 M2;
	RV_6 M3;
	RV_6 M4;
};
//Matrix[rows=4]x[columns=7]
struct M_4x7
{
	RV_7 M1;
	RV_7 M2;
	RV_7 M3;
	RV_7 M4;
};
//Matrix[rows=4]x[columns=8]
struct M_4x8
{
	RV_8 M1;
	RV_8 M2;
	RV_8 M3;
	RV_8 M4;
};
//Matrix[rows=4]x[columns=9]
struct M_4x9
{
	RV_9 M1;
	RV_9 M2;
	RV_9 M3;
	RV_9 M4;
};
//Matrix[rows=5]x[columns=2]
struct M_5x2
{
	RV_2 M1;
	RV_2 M2;
	RV_2 M3;
	RV_2 M4;
	RV_2 M5;
};
//Matrix[rows=5]x[columns=3]
struct M_5x3
{
	RV_3 M1;
	RV_3 M2;
	RV_3 M3;
	RV_3 M4;
	RV_3 M5;
};
//Matrix[rows=5]x[columns=4]
struct M_5x4
{
	RV_4 M1;
	RV_4 M2;
	RV_4 M3;
	RV_4 M4;
	RV_4 M5;
};
//Matrix[rows=5]x[columns=5]
struct M_5x5
{
	RV_5 M1;
	RV_5 M2;
	RV_5 M3;
	RV_5 M4;
	RV_5 M5;
};
//Matrix[rows=5]x[columns=6]
struct M_5x6
{
	RV_6 M1;
	RV_6 M2;
	RV_6 M3;
	RV_6 M4;
	RV_6 M5;
};
//Matrix[rows=5]x[columns=7]
struct M_5x7
{
	RV_7 M1;
	RV_7 M2;
	RV_7 M3;
	RV_7 M4;
	RV_7 M5;
};
//Matrix[rows=5]x[columns=8]
struct M_5x8
{
	RV_8 M1;
	RV_8 M2;
	RV_8 M3;
	RV_8 M4;
	RV_8 M5;
};
//Matrix[rows=5]x[columns=9]
struct M_5x9
{
	RV_9 M1;
	RV_9 M2;
	RV_9 M3;
	RV_9 M4;
	RV_9 M5;
};
//Matrix[rows=6]x[columns=2]
struct M_6x2
{
	RV_2 M1;
	RV_2 M2;
	RV_2 M3;
	RV_2 M4;
	RV_2 M5;
	RV_2 M6;
};
//Matrix[rows=6]x[columns=3]
struct M_6x3
{
	RV_3 M1;
	RV_3 M2;
	RV_3 M3;
	RV_3 M4;
	RV_3 M5;
	RV_3 M6;
};
//Matrix[rows=6]x[columns=4]
struct M_6x4
{
	RV_4 M1;
	RV_4 M2;
	RV_4 M3;
	RV_4 M4;
	RV_4 M5;
	RV_4 M6;
};
//Matrix[rows=6]x[columns=5]
struct M_6x5
{
	RV_5 M1;
	RV_5 M2;
	RV_5 M3;
	RV_5 M4;
	RV_5 M5;
	RV_5 M6;
};
//Matrix[rows=6]x[columns=6]
struct M_6x6
{
	RV_6 M1;
	RV_6 M2;
	RV_6 M3;
	RV_6 M4;
	RV_6 M5;
	RV_6 M6;
};
//Matrix[rows=6]x[columns=7]
struct M_6x7
{
	RV_7 M1;
	RV_7 M2;
	RV_7 M3;
	RV_7 M4;
	RV_7 M5;
	RV_7 M6;
};
//Matrix[rows=6]x[columns=8]
struct M_6x8
{
	RV_8 M1;
	RV_8 M2;
	RV_8 M3;
	RV_8 M4;
	RV_8 M5;
	RV_8 M6;
};
//Matrix[rows=6]x[columns=9]
struct M_6x9
{
	RV_9 M1;
	RV_9 M2;
	RV_9 M3;
	RV_9 M4;
	RV_9 M5;
	RV_9 M6;
};
//Matrix[rows=7]x[columns=2]
struct M_7x2
{
	RV_2 M1;
	RV_2 M2;
	RV_2 M3;
	RV_2 M4;
	RV_2 M5;
	RV_2 M6;
	RV_2 M7;
};
//Matrix[rows=7]x[columns=3]
struct M_7x3
{
	RV_3 M1;
	RV_3 M2;
	RV_3 M3;
	RV_3 M4;
	RV_3 M5;
	RV_3 M6;
	RV_3 M7;
};
//Matrix[rows=7]x[columns=4]
struct M_7x4
{
	RV_4 M1;
	RV_4 M2;
	RV_4 M3;
	RV_4 M4;
	RV_4 M5;
	RV_4 M6;
	RV_4 M7;
};
//Matrix[rows=7]x[columns=5]
struct M_7x5
{
	RV_5 M1;
	RV_5 M2;
	RV_5 M3;
	RV_5 M4;
	RV_5 M5;
	RV_5 M6;
	RV_5 M7;
};
//Matrix[rows=7]x[columns=6]
struct M_7x6
{
	RV_6 M1;
	RV_6 M2;
	RV_6 M3;
	RV_6 M4;
	RV_6 M5;
	RV_6 M6;
	RV_6 M7;
};
//Matrix[rows=7]x[columns=7]
struct M_7x7
{
	RV_7 M1;
	RV_7 M2;
	RV_7 M3;
	RV_7 M4;
	RV_7 M5;
	RV_7 M6;
	RV_7 M7;
};
//Matrix[rows=7]x[columns=8]
struct M_7x8
{
	RV_8 M1;
	RV_8 M2;
	RV_8 M3;
	RV_8 M4;
	RV_8 M5;
	RV_8 M6;
	RV_8 M7;
};
//Matrix[rows=7]x[columns=9]
struct M_7x9
{
	RV_9 M1;
	RV_9 M2;
	RV_9 M3;
	RV_9 M4;
	RV_9 M5;
	RV_9 M6;
	RV_9 M7;
};
//Matrix[rows=8]x[columns=2]
struct M_8x2
{
	RV_2 M1;
	RV_2 M2;
	RV_2 M3;
	RV_2 M4;
	RV_2 M5;
	RV_2 M6;
	RV_2 M7;
	RV_2 M8;
};
//Matrix[rows=8]x[columns=3]
struct M_8x3
{
	RV_3 M1;
	RV_3 M2;
	RV_3 M3;
	RV_3 M4;
	RV_3 M5;
	RV_3 M6;
	RV_3 M7;
	RV_3 M8;
};
//Matrix[rows=8]x[columns=4]
struct M_8x4
{
	RV_4 M1;
	RV_4 M2;
	RV_4 M3;
	RV_4 M4;
	RV_4 M5;
	RV_4 M6;
	RV_4 M7;
	RV_4 M8;
};
//Matrix[rows=8]x[columns=5]
struct M_8x5
{
	RV_5 M1;
	RV_5 M2;
	RV_5 M3;
	RV_5 M4;
	RV_5 M5;
	RV_5 M6;
	RV_5 M7;
	RV_5 M8;
};
//Matrix[rows=8]x[columns=6]
struct M_8x6
{
	RV_6 M1;
	RV_6 M2;
	RV_6 M3;
	RV_6 M4;
	RV_6 M5;
	RV_6 M6;
	RV_6 M7;
	RV_6 M8;
};
//Matrix[rows=8]x[columns=7]
struct M_8x7
{
	RV_7 M1;
	RV_7 M2;
	RV_7 M3;
	RV_7 M4;
	RV_7 M5;
	RV_7 M6;
	RV_7 M7;
	RV_7 M8;
};
//Matrix[rows=8]x[columns=8]
struct M_8x8
{
	RV_8 M1;
	RV_8 M2;
	RV_8 M3;
	RV_8 M4;
	RV_8 M5;
	RV_8 M6;
	RV_8 M7;
	RV_8 M8;
};
//Matrix[rows=8]x[columns=9]
struct M_8x9
{
	RV_9 M1;
	RV_9 M2;
	RV_9 M3;
	RV_9 M4;
	RV_9 M5;
	RV_9 M6;
	RV_9 M7;
	RV_9 M8;
};
//Matrix[rows=9]x[columns=2]
struct M_9x2
{
	RV_2 M1;
	RV_2 M2;
	RV_2 M3;
	RV_2 M4;
	RV_2 M5;
	RV_2 M6;
	RV_2 M7;
	RV_2 M8;
	RV_2 M9;
};
//Matrix[rows=9]x[columns=3]
struct M_9x3
{
	RV_3 M1;
	RV_3 M2;
	RV_3 M3;
	RV_3 M4;
	RV_3 M5;
	RV_3 M6;
	RV_3 M7;
	RV_3 M8;
	RV_3 M9;
};
//Matrix[rows=9]x[columns=4]
struct M_9x4
{
	RV_4 M1;
	RV_4 M2;
	RV_4 M3;
	RV_4 M4;
	RV_4 M5;
	RV_4 M6;
	RV_4 M7;
	RV_4 M8;
	RV_4 M9;
};
//Matrix[rows=9]x[columns=5]
struct M_9x5
{
	RV_5 M1;
	RV_5 M2;
	RV_5 M3;
	RV_5 M4;
	RV_5 M5;
	RV_5 M6;
	RV_5 M7;
	RV_5 M8;
	RV_5 M9;
};
//Matrix[rows=9]x[columns=6]
struct M_9x6
{
	RV_6 M1;
	RV_6 M2;
	RV_6 M3;
	RV_6 M4;
	RV_6 M5;
	RV_6 M6;
	RV_6 M7;
	RV_6 M8;
	RV_6 M9;
};
//Matrix[rows=9]x[columns=7]
struct M_9x7
{
	RV_7 M1;
	RV_7 M2;
	RV_7 M3;
	RV_7 M4;
	RV_7 M5;
	RV_7 M6;
	RV_7 M7;
	RV_7 M8;
	RV_7 M9;
};
//Matrix[rows=9]x[columns=8]
struct M_9x8
{
	RV_8 M1;
	RV_8 M2;
	RV_8 M3;
	RV_8 M4;
	RV_8 M5;
	RV_8 M6;
	RV_8 M7;
	RV_8 M8;
	RV_8 M9;
};
//Matrix[rows=9]x[columns=9]
struct M_9x9
{
	RV_9 M1;
	RV_9 M2;
	RV_9 M3;
	RV_9 M4;
	RV_9 M5;
	RV_9 M6;
	RV_9 M7;
	RV_9 M8;
	RV_9 M9;
};












