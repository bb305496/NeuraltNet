#include <iostream>
#include <cmath>
#include "Neuron.h"
#include "NeuralNet.h"

float mse_loss(std::vector<int> y_true, std::vector<int> y_pred)
{
	float sum = 0;

	for (int i = 0; i < y_true.size(); i++)
	{
		sum += std::pow((y_true[i] - y_pred[i]), 2);
	}

	return (sum / y_true.size());
}

int main()
{
	std::vector<int> weights = { 0,1 };
	const int bias = 4;
	Neuron n(weights, bias);

	std::vector<float> x = { 2,3 };

	std::cout << n.feedForward(x) << "\n";

	NeuralNet network;
	std::cout << network.feedForward(x) << "\n";

	std::vector<int> y_true = { 1,0,0,1 };
	std::vector<int> y_pred = { 0,0,0,0 };

	std::cout << mse_loss(y_true, y_pred);
}

