#include <iostream>
#include "Neuron.h"
#include "NeuralNet.h"

int main()
{
	std::vector<int> weights = { 0,1 };
	const int bias = 4;
	Neuron n(weights, bias);

	std::vector<float> x = { 2,3 };

	std::cout << n.feedForward(x) << "\n";

	NeuralNet network;
	std::cout << network.feedForward(x);
}

