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
	RV_2  target = { 0.01,0.99};
	RV_2  input = { 0.05,0.10 };
	M_2x2 input_hidden = { 0.15,0.20,0.25,0.30 };
	RV_2  hidden = Multiply(input_hidden,input);
	

    hidden = AddScalar(hidden, .35);
	hidden = ApplyScalar(hidden, Sigmoid);
	//Serial.println(hidden.N1, 5);
	//Serial.println(hidden.N2, 5);
    
	M_2x2 hidden_output = { 0.40,0.45,0.50,0.55 };
    RV_2  output = Multiply(hidden_output, hidden);

	output = AddScalar(output, .60);
	output = ApplyScalar(output, Sigmoid);
	Serial.println(output.N1, 5);
	Serial.println(output.N2, 5);

	RV_2 error = ApplyScalar(target,output,Error);
		
	Serial.println(error.N1, 5);
	Serial.println(error.N2, 5);

	double totalerror = Sum(error);
	
	Serial.println(totalerror, 5);
	
	lcd.clear();
	lcd.setCursor(0, 0);

	//lcd.print(output.N1,3); // print a simple message
	//lcd.print(output.N2,3);
}