#ifndef NEURON_H
#define NEURON_H
#include <iostream>
#include <cmath>
#include "Functions.h"

class Neuron
{
private:
	std::vector<int> weights;
	int bias;

public:
	Neuron(std::vector<int> weights, const int bias);
	~Neuron();

	float sigmoid(float x);
	float feedForward(std::vector<float> input);

};

#endif

