#include "Functions.h"

float dotProduct(std::vector<int> weight, std::vector<int> input)
{
	float result = 0.0f;

	for (int i = 0; i < weight.size(); i++)
	{
		result += weight[i] * input[i];
	}
	return result;
}
