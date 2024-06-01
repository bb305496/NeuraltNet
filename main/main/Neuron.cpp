#include "Neuron.h"

Neuron::Neuron(std::vector<int> weights, const int bias)
{
	this->weights = weights;
	this->bias = bias;
}

Neuron::~Neuron()
{

}

float Neuron::sigmoid(float x)
{
	return 1 / (1 + std::exp(-x));
}

float Neuron::feedForward(std::vector<int> input)
{
	float total = dotProduct(this->weights, input) + this->bias;
	return sigmoid(total);
}
