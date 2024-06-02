#include "NeuralNet.h"

NeuralNet::NeuralNet()
	: h1(std::vector<int>{0,1}, 0), h2(std::vector<int>{0, 1}, 0), o1(std::vector<int>{0, 1}, 0)
{
	
}

NeuralNet::~NeuralNet()
{

}

float NeuralNet::feedForward(std::vector<float> input)
{
	float out_h1 = h1.feedForward(input);
	float out_h2 = h2.feedForward(input);

	float out_o1 = o1.feedForward(std::vector<float>{out_h1, out_h2});

	return out_o1;
}
