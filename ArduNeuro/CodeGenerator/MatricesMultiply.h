#pragma once
#include <stdint.h>
#include "Matrices.h"

M_2x2 Multiply(M_2x2 left,M_2x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2
};
};
M_2x3 Multiply(M_2x2 left,M_2x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3
};
};
M_2x4 Multiply(M_2x2 left,M_2x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4
};
};
M_2x5 Multiply(M_2x2 left,M_2x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5
};
};
M_2x2 Multiply(M_2x3 left,M_3x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2
};
};
M_2x3 Multiply(M_2x3 left,M_3x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3
};
};
M_2x4 Multiply(M_2x3 left,M_3x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4
};
};
M_2x5 Multiply(M_2x3 left,M_3x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5
};
};
M_2x2 Multiply(M_2x4 left,M_4x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2
};
};
M_2x3 Multiply(M_2x4 left,M_4x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3
};
};
M_2x4 Multiply(M_2x4 left,M_4x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4
};
};
M_2x5 Multiply(M_2x4 left,M_4x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5
};
};
M_2x2 Multiply(M_2x5 left,M_5x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2
};
};
M_2x3 Multiply(M_2x5 left,M_5x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3
};
};
M_2x4 Multiply(M_2x5 left,M_5x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4
};
};
M_2x5 Multiply(M_2x5 left,M_5x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5 + left.M1.N5 * right.M5.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5 + left.M2.N5 * right.M5.N5
};
};
M_3x2 Multiply(M_3x2 left,M_2x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2
};
};
M_3x3 Multiply(M_3x2 left,M_2x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3
};
};
M_3x4 Multiply(M_3x2 left,M_2x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4
};
};
M_3x5 Multiply(M_3x2 left,M_2x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5
};
};
M_3x2 Multiply(M_3x3 left,M_3x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2
};
};
M_3x3 Multiply(M_3x3 left,M_3x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3
};
};
M_3x4 Multiply(M_3x3 left,M_3x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4
};
};
M_3x5 Multiply(M_3x3 left,M_3x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5
};
};
M_3x2 Multiply(M_3x4 left,M_4x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2
};
};
M_3x3 Multiply(M_3x4 left,M_4x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3
};
};
M_3x4 Multiply(M_3x4 left,M_4x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4
};
};
M_3x5 Multiply(M_3x4 left,M_4x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5
};
};
M_3x2 Multiply(M_3x5 left,M_5x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2
};
};
M_3x3 Multiply(M_3x5 left,M_5x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3
};
};
M_3x4 Multiply(M_3x5 left,M_5x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4
};
};
M_3x5 Multiply(M_3x5 left,M_5x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5 + left.M1.N5 * right.M5.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5 + left.M2.N5 * right.M5.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5 + left.M3.N5 * right.M5.N5
};
};
M_4x2 Multiply(M_4x2 left,M_2x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2
};
};
M_4x3 Multiply(M_4x2 left,M_2x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3
};
};
M_4x4 Multiply(M_4x2 left,M_2x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4
};
};
M_4x5 Multiply(M_4x2 left,M_2x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4, left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5
};
};
M_4x2 Multiply(M_4x3 left,M_3x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2
};
};
M_4x3 Multiply(M_4x3 left,M_3x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3
};
};
M_4x4 Multiply(M_4x3 left,M_3x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4
};
};
M_4x5 Multiply(M_4x3 left,M_3x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4, left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5
};
};
M_4x2 Multiply(M_4x4 left,M_4x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2
};
};
M_4x3 Multiply(M_4x4 left,M_4x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3
};
};
M_4x4 Multiply(M_4x4 left,M_4x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4
};
};
M_4x5 Multiply(M_4x4 left,M_4x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4, left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5 + left.M4.N4 * right.M4.N5
};
};
M_4x2 Multiply(M_4x5 left,M_5x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2
};
};
M_4x3 Multiply(M_4x5 left,M_5x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3
};
};
M_4x4 Multiply(M_4x5 left,M_5x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4 + left.M4.N5 * right.M5.N4
};
};
M_4x5 Multiply(M_4x5 left,M_5x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5 + left.M1.N5 * right.M5.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5 + left.M2.N5 * right.M5.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5 + left.M3.N5 * right.M5.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4 + left.M4.N5 * right.M5.N4, left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5 + left.M4.N4 * right.M4.N5 + left.M4.N5 * right.M5.N5
};
};
M_5x2 Multiply(M_5x2 left,M_2x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2
};
};
M_5x3 Multiply(M_5x2 left,M_2x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3
};
};
M_5x4 Multiply(M_5x2 left,M_2x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3, left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4
};
};
M_5x5 Multiply(M_5x2 left,M_2x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4, left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3, left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4, left.M5.N1 * right.M1.N5 + left.M5.N2 * right.M2.N5
};
};
M_5x2 Multiply(M_5x3 left,M_3x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2
};
};
M_5x3 Multiply(M_5x3 left,M_3x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3
};
};
M_5x4 Multiply(M_5x3 left,M_3x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3, left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4
};
};
M_5x5 Multiply(M_5x3 left,M_3x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4, left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3, left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4, left.M5.N1 * right.M1.N5 + left.M5.N2 * right.M2.N5 + left.M5.N3 * right.M3.N5
};
};
M_5x2 Multiply(M_5x4 left,M_4x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2
};
};
M_5x3 Multiply(M_5x4 left,M_4x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3
};
};
M_5x4 Multiply(M_5x4 left,M_4x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3, left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4 + left.M5.N4 * right.M4.N4
};
};
M_5x5 Multiply(M_5x4 left,M_4x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4, left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5 + left.M4.N4 * right.M4.N5,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3, left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4 + left.M5.N4 * right.M4.N4, left.M5.N1 * right.M1.N5 + left.M5.N2 * right.M2.N5 + left.M5.N3 * right.M3.N5 + left.M5.N4 * right.M4.N5
};
};
M_5x2 Multiply(M_5x5 left,M_5x2 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1 + left.M5.N5 * right.M5.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2 + left.M5.N5 * right.M5.N2
};
};
M_5x3 Multiply(M_5x5 left,M_5x3 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1 + left.M5.N5 * right.M5.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2 + left.M5.N5 * right.M5.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3 + left.M5.N5 * right.M5.N3
};
};
M_5x4 Multiply(M_5x5 left,M_5x4 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4 + left.M4.N5 * right.M5.N4,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1 + left.M5.N5 * right.M5.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2 + left.M5.N5 * right.M5.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3 + left.M5.N5 * right.M5.N3, left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4 + left.M5.N4 * right.M4.N4 + left.M5.N5 * right.M5.N4
};
};
M_5x5 Multiply(M_5x5 left,M_5x5 right)
{
return {
left.M1.N1 * right.M1.N1 + left.M1.N2 * right.M2.N1 + left.M1.N3 * right.M3.N1 + left.M1.N4 * right.M4.N1 + left.M1.N5 * right.M5.N1, left.M1.N1 * right.M1.N2 + left.M1.N2 * right.M2.N2 + left.M1.N3 * right.M3.N2 + left.M1.N4 * right.M4.N2 + left.M1.N5 * right.M5.N2, left.M1.N1 * right.M1.N3 + left.M1.N2 * right.M2.N3 + left.M1.N3 * right.M3.N3 + left.M1.N4 * right.M4.N3 + left.M1.N5 * right.M5.N3, left.M1.N1 * right.M1.N4 + left.M1.N2 * right.M2.N4 + left.M1.N3 * right.M3.N4 + left.M1.N4 * right.M4.N4 + left.M1.N5 * right.M5.N4, left.M1.N1 * right.M1.N5 + left.M1.N2 * right.M2.N5 + left.M1.N3 * right.M3.N5 + left.M1.N4 * right.M4.N5 + left.M1.N5 * right.M5.N5,
left.M2.N1 * right.M1.N1 + left.M2.N2 * right.M2.N1 + left.M2.N3 * right.M3.N1 + left.M2.N4 * right.M4.N1 + left.M2.N5 * right.M5.N1, left.M2.N1 * right.M1.N2 + left.M2.N2 * right.M2.N2 + left.M2.N3 * right.M3.N2 + left.M2.N4 * right.M4.N2 + left.M2.N5 * right.M5.N2, left.M2.N1 * right.M1.N3 + left.M2.N2 * right.M2.N3 + left.M2.N3 * right.M3.N3 + left.M2.N4 * right.M4.N3 + left.M2.N5 * right.M5.N3, left.M2.N1 * right.M1.N4 + left.M2.N2 * right.M2.N4 + left.M2.N3 * right.M3.N4 + left.M2.N4 * right.M4.N4 + left.M2.N5 * right.M5.N4, left.M2.N1 * right.M1.N5 + left.M2.N2 * right.M2.N5 + left.M2.N3 * right.M3.N5 + left.M2.N4 * right.M4.N5 + left.M2.N5 * right.M5.N5,
left.M3.N1 * right.M1.N1 + left.M3.N2 * right.M2.N1 + left.M3.N3 * right.M3.N1 + left.M3.N4 * right.M4.N1 + left.M3.N5 * right.M5.N1, left.M3.N1 * right.M1.N2 + left.M3.N2 * right.M2.N2 + left.M3.N3 * right.M3.N2 + left.M3.N4 * right.M4.N2 + left.M3.N5 * right.M5.N2, left.M3.N1 * right.M1.N3 + left.M3.N2 * right.M2.N3 + left.M3.N3 * right.M3.N3 + left.M3.N4 * right.M4.N3 + left.M3.N5 * right.M5.N3, left.M3.N1 * right.M1.N4 + left.M3.N2 * right.M2.N4 + left.M3.N3 * right.M3.N4 + left.M3.N4 * right.M4.N4 + left.M3.N5 * right.M5.N4, left.M3.N1 * right.M1.N5 + left.M3.N2 * right.M2.N5 + left.M3.N3 * right.M3.N5 + left.M3.N4 * right.M4.N5 + left.M3.N5 * right.M5.N5,
left.M4.N1 * right.M1.N1 + left.M4.N2 * right.M2.N1 + left.M4.N3 * right.M3.N1 + left.M4.N4 * right.M4.N1 + left.M4.N5 * right.M5.N1, left.M4.N1 * right.M1.N2 + left.M4.N2 * right.M2.N2 + left.M4.N3 * right.M3.N2 + left.M4.N4 * right.M4.N2 + left.M4.N5 * right.M5.N2, left.M4.N1 * right.M1.N3 + left.M4.N2 * right.M2.N3 + left.M4.N3 * right.M3.N3 + left.M4.N4 * right.M4.N3 + left.M4.N5 * right.M5.N3, left.M4.N1 * right.M1.N4 + left.M4.N2 * right.M2.N4 + left.M4.N3 * right.M3.N4 + left.M4.N4 * right.M4.N4 + left.M4.N5 * right.M5.N4, left.M4.N1 * right.M1.N5 + left.M4.N2 * right.M2.N5 + left.M4.N3 * right.M3.N5 + left.M4.N4 * right.M4.N5 + left.M4.N5 * right.M5.N5,
left.M5.N1 * right.M1.N1 + left.M5.N2 * right.M2.N1 + left.M5.N3 * right.M3.N1 + left.M5.N4 * right.M4.N1 + left.M5.N5 * right.M5.N1, left.M5.N1 * right.M1.N2 + left.M5.N2 * right.M2.N2 + left.M5.N3 * right.M3.N2 + left.M5.N4 * right.M4.N2 + left.M5.N5 * right.M5.N2, left.M5.N1 * right.M1.N3 + left.M5.N2 * right.M2.N3 + left.M5.N3 * right.M3.N3 + left.M5.N4 * right.M4.N3 + left.M5.N5 * right.M5.N3, left.M5.N1 * right.M1.N4 + left.M5.N2 * right.M2.N4 + left.M5.N3 * right.M3.N4 + left.M5.N4 * right.M4.N4 + left.M5.N5 * right.M5.N4, left.M5.N1 * right.M1.N5 + left.M5.N2 * right.M2.N5 + left.M5.N3 * right.M3.N5 + left.M5.N4 * right.M4.N5 + left.M5.N5 * right.M5.N5
};
};







RV_2 Multiply(RV_2 left, M_2x2 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2};;
}
RV_3 Multiply(RV_2 left, M_2x3 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3};;
}
RV_4 Multiply(RV_2 left, M_2x4 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3,
left.N1 * right.M1.N4 + left.N2 * right.M2.N4};;
}
RV_5 Multiply(RV_2 left, M_2x5 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3,
left.N1 * right.M1.N4 + left.N2 * right.M2.N4,
left.N1 * right.M1.N5 + left.N2 * right.M2.N5};;
}
RV_2 Multiply(RV_3 left, M_3x2 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2};;
}
RV_3 Multiply(RV_3 left, M_3x3 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3};;
}
RV_4 Multiply(RV_3 left, M_3x4 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3,
left.N1 * right.M1.N4 + left.N2 * right.M2.N4 + left.N3 * right.M3.N4};;
}
RV_5 Multiply(RV_3 left, M_3x5 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3,
left.N1 * right.M1.N4 + left.N2 * right.M2.N4 + left.N3 * right.M3.N4,
left.N1 * right.M1.N5 + left.N2 * right.M2.N5 + left.N3 * right.M3.N5};;
}
RV_2 Multiply(RV_4 left, M_4x2 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1 + left.N4 * right.M4.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2 + left.N4 * right.M4.N2};;
}
RV_3 Multiply(RV_4 left, M_4x3 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1 + left.N4 * right.M4.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2 + left.N4 * right.M4.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3 + left.N4 * right.M4.N3};;
}
RV_4 Multiply(RV_4 left, M_4x4 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1 + left.N4 * right.M4.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2 + left.N4 * right.M4.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3 + left.N4 * right.M4.N3,
left.N1 * right.M1.N4 + left.N2 * right.M2.N4 + left.N3 * right.M3.N4 + left.N4 * right.M4.N4};;
}
RV_5 Multiply(RV_4 left, M_4x5 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1 + left.N4 * right.M4.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2 + left.N4 * right.M4.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3 + left.N4 * right.M4.N3,
left.N1 * right.M1.N4 + left.N2 * right.M2.N4 + left.N3 * right.M3.N4 + left.N4 * right.M4.N4,
left.N1 * right.M1.N5 + left.N2 * right.M2.N5 + left.N3 * right.M3.N5 + left.N4 * right.M4.N5};;
}
RV_2 Multiply(RV_5 left, M_5x2 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1 + left.N4 * right.M4.N1 + left.N5 * right.M5.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2 + left.N4 * right.M4.N2 + left.N5 * right.M5.N2};;
}
RV_3 Multiply(RV_5 left, M_5x3 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1 + left.N4 * right.M4.N1 + left.N5 * right.M5.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2 + left.N4 * right.M4.N2 + left.N5 * right.M5.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3 + left.N4 * right.M4.N3 + left.N5 * right.M5.N3};;
}
RV_4 Multiply(RV_5 left, M_5x4 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1 + left.N4 * right.M4.N1 + left.N5 * right.M5.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2 + left.N4 * right.M4.N2 + left.N5 * right.M5.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3 + left.N4 * right.M4.N3 + left.N5 * right.M5.N3,
left.N1 * right.M1.N4 + left.N2 * right.M2.N4 + left.N3 * right.M3.N4 + left.N4 * right.M4.N4 + left.N5 * right.M5.N4};;
}
RV_5 Multiply(RV_5 left, M_5x5 right){
	return {left.N1 * right.M1.N1 + left.N2 * right.M2.N1 + left.N3 * right.M3.N1 + left.N4 * right.M4.N1 + left.N5 * right.M5.N1,
left.N1 * right.M1.N2 + left.N2 * right.M2.N2 + left.N3 * right.M3.N2 + left.N4 * right.M4.N2 + left.N5 * right.M5.N2,
left.N1 * right.M1.N3 + left.N2 * right.M2.N3 + left.N3 * right.M3.N3 + left.N4 * right.M4.N3 + left.N5 * right.M5.N3,
left.N1 * right.M1.N4 + left.N2 * right.M2.N4 + left.N3 * right.M3.N4 + left.N4 * right.M4.N4 + left.N5 * right.M5.N4,
left.N1 * right.M1.N5 + left.N2 * right.M2.N5 + left.N3 * right.M3.N5 + left.N4 * right.M4.N5 + left.N5 * right.M5.N5};;
}


RV_2 Multiply(M_2x2 left, RV_2 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2};
}
RV_2 Multiply(M_2x3 left, RV_3 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3};
}
RV_2 Multiply(M_2x4 left, RV_4 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3 + left.M1.N4 * right.N4,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3 + left.M2.N4 * right.N4};
}
RV_2 Multiply(M_2x5 left, RV_5 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3 + left.M1.N4 * right.N4 + left.M1.N5 * right.N5,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3 + left.M2.N4 * right.N4 + left.M2.N5 * right.N5};
}
RV_3 Multiply(M_3x2 left, RV_2 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2};
}
RV_3 Multiply(M_3x3 left, RV_3 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3};
}
RV_3 Multiply(M_3x4 left, RV_4 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3 + left.M1.N4 * right.N4,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3 + left.M2.N4 * right.N4,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3 + left.M3.N4 * right.N4};
}
RV_3 Multiply(M_3x5 left, RV_5 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3 + left.M1.N4 * right.N4 + left.M1.N5 * right.N5,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3 + left.M2.N4 * right.N4 + left.M2.N5 * right.N5,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3 + left.M3.N4 * right.N4 + left.M3.N5 * right.N5};
}
RV_4 Multiply(M_4x2 left, RV_2 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2,
left.M4.N1 * right.N1 + left.M4.N2 * right.N2};
}
RV_4 Multiply(M_4x3 left, RV_3 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3,
left.M4.N1 * right.N1 + left.M4.N2 * right.N2 + left.M4.N3 * right.N3};
}
RV_4 Multiply(M_4x4 left, RV_4 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3 + left.M1.N4 * right.N4,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3 + left.M2.N4 * right.N4,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3 + left.M3.N4 * right.N4,
left.M4.N1 * right.N1 + left.M4.N2 * right.N2 + left.M4.N3 * right.N3 + left.M4.N4 * right.N4};
}
RV_4 Multiply(M_4x5 left, RV_5 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3 + left.M1.N4 * right.N4 + left.M1.N5 * right.N5,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3 + left.M2.N4 * right.N4 + left.M2.N5 * right.N5,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3 + left.M3.N4 * right.N4 + left.M3.N5 * right.N5,
left.M4.N1 * right.N1 + left.M4.N2 * right.N2 + left.M4.N3 * right.N3 + left.M4.N4 * right.N4 + left.M4.N5 * right.N5};
}
RV_5 Multiply(M_5x2 left, RV_2 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2,
left.M4.N1 * right.N1 + left.M4.N2 * right.N2,
left.M5.N1 * right.N1 + left.M5.N2 * right.N2};
}
RV_5 Multiply(M_5x3 left, RV_3 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3,
left.M4.N1 * right.N1 + left.M4.N2 * right.N2 + left.M4.N3 * right.N3,
left.M5.N1 * right.N1 + left.M5.N2 * right.N2 + left.M5.N3 * right.N3};
}
RV_5 Multiply(M_5x4 left, RV_4 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3 + left.M1.N4 * right.N4,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3 + left.M2.N4 * right.N4,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3 + left.M3.N4 * right.N4,
left.M4.N1 * right.N1 + left.M4.N2 * right.N2 + left.M4.N3 * right.N3 + left.M4.N4 * right.N4,
left.M5.N1 * right.N1 + left.M5.N2 * right.N2 + left.M5.N3 * right.N3 + left.M5.N4 * right.N4};
}
RV_5 Multiply(M_5x5 left, RV_5 right){
	return {left.M1.N1 * right.N1 + left.M1.N2 * right.N2 + left.M1.N3 * right.N3 + left.M1.N4 * right.N4 + left.M1.N5 * right.N5,
left.M2.N1 * right.N1 + left.M2.N2 * right.N2 + left.M2.N3 * right.N3 + left.M2.N4 * right.N4 + left.M2.N5 * right.N5,
left.M3.N1 * right.N1 + left.M3.N2 * right.N2 + left.M3.N3 * right.N3 + left.M3.N4 * right.N4 + left.M3.N5 * right.N5,
left.M4.N1 * right.N1 + left.M4.N2 * right.N2 + left.M4.N3 * right.N3 + left.M4.N4 * right.N4 + left.M4.N5 * right.N5,
left.M5.N1 * right.N1 + left.M5.N2 * right.N2 + left.M5.N3 * right.N3 + left.M5.N4 * right.N4 + left.M5.N5 * right.N5};
}