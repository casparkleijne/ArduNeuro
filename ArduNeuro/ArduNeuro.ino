/*
 Name:		ArduNeuro.ino
 Created:	12/20/2018 10:48:49 AM
 Author:	CasparKleijne
*/

#include "CodeGenerator\Matrices.h"
#include "CodeGenerator\ColumnVectors.h"
#include "CodeGenerator\ColumnVectorsTranspose.h"
#include "CodeGenerator\RowVectorsTranspose.h"
#include "CodeGenerator\RowVectorsMultiply.h"
#include "CodeGenerator\MatricesTranspose.h"
#include "CodeGenerator\MatricesMultiply.h"

// the setup function runs once when you press reset or power the board
void setup() {
	Scratch();

}




// the loop function runs over and over again until power down or reset
void loop() {
	delay(100);
}

void Scratch()
{
	CV_3 test = { 0,0 };
	RV_4 test2 = { 1,2,3,4 };
	CV_4 test4 = { 5,6,7,8 };

	M_3x4 left = { 1,2,3,4,1,2,3,4,1,2,3,4 };
	M_4x2 right = { 1,2,3,4,1,2,3,4 };

	M_3x2 result = Multiply(left,right);

	Serial.println(result.M1.N1, 2);

	Serial.println(result.M1.N2, 2);


	Serial.println(result.M2.N1, 2);


	Serial.println(result.M2.N2, 2);

}