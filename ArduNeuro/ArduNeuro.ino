/*
 Name:		ArduNeuro.ino
 Created:	12/20/2018 10:48:49 AM
 Author:	CasparKleijne
*/

#include "CodeGenerator\Matrices.h"


// the setup function runs once when you press reset or power the board
void setup() {

	Scratch();

}


void Scratch()
{
	CV_2 test = { 0,0};
	RV_2 test1= Transpose(test);
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
