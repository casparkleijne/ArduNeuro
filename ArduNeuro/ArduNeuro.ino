/*
 Name:		ArduNeuro.ino
 Created:	12/20/2018 10:48:49 AM
 Author:	CasparKleijne
 Tutorial followed: https://mattmazur.com/2015/03/17/a-step-by-step-backpropagation-example/ (check comment by Loftur on error in the tutorial)
*/
// LCD for fun use;

#include "ExtraMath.h"
#include "MemoryFree.h"

struct  NeuralNetwork
{
	double LearningRate;
	RV_4 Input;
	M_5x4 InputWeight;
	double BiasHidden;
	RV_5 Hidden;
	M_3x5 HiddenWeight;
	double BiasOutput;
	RV_3 Output;
};

NeuralNetwork nn;


RV_2  target = { 0.010000,0.990000 };
RV_2  input = { 0.050000,0.100000 };
int count = 0;

// there is an error in the tutorial that is fixed in this matrix
M_2x2 weight_input_hidden = { 0.15,0.20,0.25,0.30 };
M_2x2 weight_hidden_output = { 0.40,0.45,0.50,0.55 };
double learningRate = 0.50000000;
// the setup function runs once when you press reset or power the board

void setup() {
	
	delay(1000);
	
	nn.Input = RV_4();
	nn.InputWeight = ApplyScalar(M_5x4(), Randomize);
	nn.BiasHidden = .35;
	nn.Hidden = RV_5();
	nn.HiddenWeight = ApplyScalar(M_3x5(), Randomize);
	nn.BiasOutput = .60;
	nn.Output = RV_3();

}


// the loop function runs over and over again until power down or reset
void loop() {

	count++;
	Scratch();
	delay(10);
}

void Scratch()
{

	RV_2  hidden = ApplyScalar(AddScalar(Multiply(weight_input_hidden, input), .350000000), Sigmoid);
	RV_2  output = Multiply(weight_hidden_output, hidden);

	output = AddScalar(output, .600000000); // bias
	output = ApplyScalar(output, Sigmoid);

	RV_2 error = ApplyScalar(target, output, Error);

	double totalerror = Sum(error);

	Serial.println(totalerror, 9);
	Serial.print("freeMemory=");
	Serial.println(freeMemory());
	
	// BACK PROP

	RV_2 errorchangehidden = ApplyScalar(target, output, ErrorChange);

	RV_2 out = ApplyScalar(output, Derivative);

	double h11 = weight_hidden_output.M1.N1 - learningRate * hidden.N1 * out.N1 * errorchangehidden.N1;
	double h12 = weight_hidden_output.M1.N2 - learningRate * hidden.N2 * out.N1 * errorchangehidden.N1;
	double h21 = weight_hidden_output.M2.N1 - learningRate * hidden.N1 * out.N2 * errorchangehidden.N2;
	double h22 = weight_hidden_output.M2.N2 - learningRate * hidden.N2 * out.N2 * errorchangehidden.N2;

	double w1 = weight_input_hidden.M1.N1 - input.N1 * learningRate * Derivative(hidden.N1) * (weight_hidden_output.M1.N1 * out.N1 * errorchangehidden.N1 + weight_hidden_output.M2.N1 * errorchangehidden.N2 * out.N2);
	double w2 = weight_input_hidden.M1.N2 - input.N2 * learningRate * Derivative(hidden.N1) * (weight_hidden_output.M1.N1 * out.N1 * errorchangehidden.N1 + weight_hidden_output.M2.N1 * errorchangehidden.N2 * out.N2);
	double w3 = weight_input_hidden.M2.N1 - input.N1 * learningRate * Derivative(hidden.N2) * (weight_hidden_output.M1.N2 * out.N1 * errorchangehidden.N1 + weight_hidden_output.M2.N2 * errorchangehidden.N2 * out.N2);
	double w4 = weight_input_hidden.M2.N2 - input.N2 * learningRate * Derivative(hidden.N2) * (weight_hidden_output.M1.N2 * out.N1 * errorchangehidden.N1 + weight_hidden_output.M2.N2 * errorchangehidden.N2 * out.N2);


	weight_input_hidden = { w1,w2,w3,w4 };
	weight_hidden_output = { h11,h12,h21,h22 };


}