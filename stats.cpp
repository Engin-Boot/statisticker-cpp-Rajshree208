#include "stats.h"
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <bits/stdc++.h>

namespace Statistics{
	
float getAverage(std::vector<float> numbers)
{
	if (numbers.empty())
		return 0.0f;
	else
		return (accumulate(numbers.begin(), numbers.end(),0.0) / numbers.size());
}

float* getMaxMin(std::vector<float> numbers)
{
	float result[] = { 0.0f,0.0f };
	if(!numbers.empty())
	{
		sort(numbers.begin(), numbers.end());
		result[0] = numbers[0];
		result[1] = numbers[numbers.size() - 1];
	}
	return result;
}

Stats ComputeStatistics(const std::vector<float> &numbers)
{
	Stats stats(getAverage(numbers), getMaxMin(numbers)[0], getMaxMin(numbers)[1]);
	return stats;
}
}
