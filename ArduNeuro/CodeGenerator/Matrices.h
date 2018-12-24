#pragma once
#include <stdint.h>
#include "RowVectors.h"
#include "ColumnVectors.h"
#include "ColumnVectorsTranspose.h"
public:

struct M_1x1 {RV_1 M1;};
struct M_2x1 {RV_1 M1;
RV_1 M2;};
struct M_3x1 {RV_1 M1;
RV_1 M2;
RV_1 M3;};
struct M_1x2 {RV_2 M1;};
struct M_2x2 {RV_2 M1;
RV_2 M2;};
struct M_3x2 {RV_2 M1;
RV_2 M2;
RV_2 M3;};
struct M_1x3 {RV_3 M1;};
struct M_2x3 {RV_3 M1;
RV_3 M2;};
struct M_3x3 {RV_3 M1;
RV_3 M2;
RV_3 M3;};