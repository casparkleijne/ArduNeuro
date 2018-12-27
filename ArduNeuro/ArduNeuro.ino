/*
 Name:		ArduNeuro.ino
 Created:	12/20/2018 10:48:49 AM
 Author:	CasparKleijne
*/

#include <LiquidCrystal.h>


#include "CodeGenerator\Matrices.h"
#include "CodeGenerator\ColumnVectors.h"
#include "CodeGenerator\ColumnVectorsTranspose.h"
#include "CodeGenerator\RowVectorsTranspose.h"
#include "CodeGenerator\RowVectorsMultiply.h"
#include "CodeGenerator\RowVectorsApplyScalar.h"
#include "CodeGenerator\MatricesTranspose.h"
#include "CodeGenerator\MatricesMultiply.h"

#include "ExtraMath.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

// the setup function runs once when you press reset or power the board
void setup() {
	lcd.begin(16, 2);              // start the library
	lcd.setCursor(0, 0);
	lcd.print("Velleman VMA203"); // print a simple message
	Scratch();

}




// the loop function runs over and over again until power down or reset
void loop() {
	delay(100);
}

double testFunc(double test)
{
	return test + 1;
}
void Scratch()
{
	RV_3 input = { 0.90f,0.10f,0.80f };
	M_3x3 input_hidden = { 0.90,0.30,0.40,0.20,0.80,0.20,0.10,0.50,0.60 };

	RV_3 hidden = Multiply(input_hidden,input);

	hidden = ApplyScalar(hidden, Sigmoid);
	lcd.clear();
	lcd.setCursor(0, 0);
	lcd.print(hidden.N1); // print a simple message
	lcd.print(hidden.N2);
	lcd.print(hidden.N3);
}