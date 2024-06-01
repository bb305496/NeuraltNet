#include <iostream>
#include "Neuron.h"

int main()
{
	std::vector<int> weights = { 0,1 };
	int bias = 4;
	Neuron n(weights, bias);

	std::vector<int> x = { 2,3 };

	std::cout << n.feedForward(x);
}

