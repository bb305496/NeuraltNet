#ifndef NEURALNET_H
#define NEURALNET_H

#include<iostream>
#include "Neuron.h"

class NeuralNet
{
private:
	Neuron h1;
	Neuron h2;
	Neuron o1;

public:

	NeuralNet();
	~NeuralNet();

	float feedForward(std::vector<float> input);

};

#endif;

