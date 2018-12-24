/*
 Name:		ArduNeuro.ino
 Created:	12/20/2018 10:48:49 AM
 Author:	CasparKleijne
*/

#include "CodeGenerator\Matrices.h"
#include "CodeGenerator\ColumnVectors.h"
#include "CodeGenerator\ColumnVectorsTranspose.h"
#include "CodeGenerator\RowVectorsTranspose.h"

// the setup function runs once when you press reset or power the board
void setup() {

	Scratch();

}


void Scratch()
{
	CV_3 test = { 0,0};
	RV_4 test2 = { 0,0,0,0};
	CV_4 test3 = Transpose(test2);
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
