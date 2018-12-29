/*
 Name:		ArduNeuro.ino
 Created:	12/20/2018 10:48:49 AM
 Author:	CasparKleijne
 Tutorial followed: https://mattmazur.com/2015/03/17/a-step-by-step-backpropagation-example/ (check comment by Loftur on error in the tutorial)
*/
// LCD for fun use;

#include "ExtraMath.h"
#include "MemoryFree.h" // for testing

struct  NeuralNetworkMazur
{
	double LearningRate;
	RV_2 Input;
	M_2x2 InputWeight;
	double BiasHidden;
	RV_2 Hidden;
	M_2x2 HiddenWeight;
	double BiasOutput;
	RV_2 Output;
	RV_2 Error;
	double TotalError;
	RV_2 ErrorChangeHidden;
	RV_2 OutputBackPropagate;
} mazur;


RV_2  target = { 0.010000,0.990000 };
int count = 0;

void setup() {
	
	delay(1000);
	// https://mattmazur.com/2015/03/17/a-step-by-step-backpropagation-example/
	mazur.Input = { 0.050000,0.100000 };
	mazur.InputWeight =  { 0.15,0.20,0.25,0.30 };
	mazur.BiasHidden = 0.35;
	mazur.HiddenWeight = { 0.40,0.45,0.50,0.55 };
	mazur.BiasOutput = 0.60000000;
	mazur.LearningRate = 0.50000000;
}


// the loop function runs over and over again until power down or reset
void loop() {

	count++;
	Scratch();
	delay(10);
}

void Scratch()
{
	//Sigmoid(double) = Activator

	mazur.Hidden = ApplyScalar(AddScalar(Multiply(mazur.InputWeight, mazur.Input), mazur.BiasHidden), Sigmoid);	
	mazur.Output = ApplyScalar(AddScalar(Multiply(mazur.HiddenWeight, mazur.Hidden), mazur.BiasOutput), Sigmoid);
	mazur.Error = ApplyScalar(target, mazur.Output, Error);
	mazur.TotalError = Sum(mazur.Error);
	mazur.ErrorChangeHidden =  ApplyScalar(target, mazur.Output, ErrorChange);
	mazur.OutputBackPropagate = ApplyScalar(ApplyScalar(mazur.Output, Derivative), mazur.ErrorChangeHidden,Multiply);
	
	Serial.println(mazur.TotalError, 8);
	Serial.print("freeMemory=");
	Serial.println(freeMemory());
	

	RV_2 test = ApplyScalar(mazur.Hidden, mazur.OutputBackPropagate, Multiply);
	
	double h11 = mazur.HiddenWeight.M1.N1   -   mazur.Hidden.N1 * mazur.LearningRate * mazur.OutputBackPropagate.N1;
	double h12 = mazur.HiddenWeight.M1.N2   -   mazur.Hidden.N2 * mazur.LearningRate * mazur.OutputBackPropagate.N1;
	double h21 = mazur.HiddenWeight.M2.N1   -   mazur.Hidden.N1 * mazur.LearningRate * mazur.OutputBackPropagate.N2;
	double h22 = mazur.HiddenWeight.M2.N2   -   mazur.Hidden.N2 * mazur.LearningRate * mazur.OutputBackPropagate.N2;

	double w1 = mazur.InputWeight.M1.N1   -     mazur.Input.N1 * mazur.LearningRate * Derivative(mazur.Hidden.N1) * (mazur.HiddenWeight.M1.N1 * mazur.OutputBackPropagate.N1 + mazur.HiddenWeight.M2.N1 * mazur.OutputBackPropagate.N2);
	double w2 = mazur.InputWeight.M1.N2   -     mazur.Input.N2 * mazur.LearningRate * Derivative(mazur.Hidden.N1) * (mazur.HiddenWeight.M1.N1 * mazur.OutputBackPropagate.N1 + mazur.HiddenWeight.M2.N1 * mazur.OutputBackPropagate.N2);
	double w3 = mazur.InputWeight.M2.N1   -     mazur.Input.N1 * mazur.LearningRate * Derivative(mazur.Hidden.N2) * (mazur.HiddenWeight.M1.N2 * mazur.OutputBackPropagate.N1 + mazur.HiddenWeight.M2.N2 * mazur.OutputBackPropagate.N2);
	double w4 = mazur.InputWeight.M2.N2   -     mazur.Input.N2 * mazur.LearningRate * Derivative(mazur.Hidden.N2) * (mazur.HiddenWeight.M1.N2 * mazur.OutputBackPropagate.N1 + mazur.HiddenWeight.M2.N2 * mazur.OutputBackPropagate.N2);

	mazur.HiddenWeight = { h11,h12,h21,h22 };
	Serial.print("h11=");
	Serial.println(h11, 8);
	Serial.print("h12=");
	Serial.println(h12, 8);
	Serial.print("h21=");
	Serial.println(h21, 8);
	Serial.print("h22=");
	Serial.println(h22, 8);

	mazur.InputWeight = { w1,w2,w3,w4 };
	Serial.print("w1=");
	Serial.println(w1,8);
	Serial.print("w2=");
	Serial.println(w2, 8);
	Serial.print("w3=");
	Serial.println(w3, 8);
	Serial.print("w4=");
	Serial.println(w4, 8);



	
}