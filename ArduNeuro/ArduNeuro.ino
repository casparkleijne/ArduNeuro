/*
 Name:		ArduNeuro.ino
 Created:	12/20/2018 10:48:49 AM
 Author:	CasparKleijne
 Tutorial followed: https://mattmazur.com/2015/03/17/a-step-by-step-backpropagation-example/ (check comment by Loftur on error in the tutorial)
*/
// LCD for fun use;
#include <LiquidCrystal.h>
#include "ExtraMath.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

// the setup function runs once when you press reset or power the board
void setup() {
	lcd.begin(16, 2);              // start the library
	lcd.setCursor(0, 0);
	lcd.print("Aruduneuro"); // print a simple message
	Scratch();

}

// the loop function runs over and over again until power down or reset
void loop() {
	delay(1000);
}

void Scratch()
{
	lcd.clear();
	lcd.setCursor(0, 0);
	double learningRate = 0.5000;

	RV_2  target = { 0.01,0.99 };
	RV_2  input = { 0.05,0.10 };
	// there is an error in the tutorial that is fixed in this matrix
	M_2x2 weight_input_hidden = { 0.15,0.20,0.25,0.30 };
	M_2x2 weight_hidden_output = { 0.40,0.45,0.50,0.55 };

	RV_2  hidden = Multiply(weight_input_hidden, input);

	Serial.println("FEED FORWARD:");

	hidden = AddScalar(hidden, .35); // bias

	Serial.println("- Net Hidden:");
	Serial.println(hidden.N1, 5);
	Serial.println(hidden.N2, 5);

	hidden = ApplyScalar(hidden, Sigmoid);
	Serial.println("- Out Hidden:");
	Serial.println(hidden.N1, 5);
	Serial.println(hidden.N2, 5);

	RV_2  output = Multiply(weight_hidden_output, hidden);

	output = AddScalar(output, .60); // bias
	output = ApplyScalar(output, Sigmoid);
	Serial.println("- Output:");
	Serial.println(output.N1, 7);
	Serial.println(output.N2, 7);

	RV_2 error = ApplyScalar(target, output, Error);
	Serial.println("Error:");
	Serial.println(error.N1, 7);
	Serial.println(error.N2, 7);

	double totalerror = Sum(error);

	Serial.println("- TotalError:");
	Serial.println(totalerror, 7);
	Serial.println("BACK PROPAGATION:");


	RV_2 errorchange = ApplyScalar(target, output, ErrorChange);
	Serial.println("- ErrorChange:");
	Serial.println(errorchange.N1, 7);
	Serial.println(errorchange.N2, 7);

	lcd.clear();
	lcd.setCursor(0, 0);

	RV_2 out = ApplyScalar(output, Derivative);
	Serial.println("- Out:");
	Serial.println(out.N1, 7);
	Serial.println(out.N2, 7);

	RV_2 input_change_weight = Multiply(Transpose(weight_hidden_output), output);
	input_change_weight = AddScalar(input_change_weight, .60);

	double h11 = weight_hidden_output.M1.N1 - learningRate * hidden.N1 * out.N1 * errorchange.N1;
	double h12 = weight_hidden_output.M1.N2 - learningRate * hidden.N2 * out.N1 * errorchange.N1;
	double h21 = weight_hidden_output.M2.N1 - learningRate * hidden.N1 * out.N2 * errorchange.N2;
	double h22 = weight_hidden_output.M2.N2 - learningRate * hidden.N2 * out.N2 * errorchange.N2;



	Serial.println("- Hidden layer weights Back Propagated:");
	Serial.println(h11, 11);
	Serial.println(h12, 11);
	Serial.println(h21, 11);
	Serial.println(h22, 11);

	Serial.println("-- fin -- ");
	//lcd.print(output.N1,3); // print a simple message
	lcd.print(h11, 11);
	lcd.setCursor(0, 1);
	lcd.print(h22, 11);
}