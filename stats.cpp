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
		return NAN;
	else
		return (accumulate(numbers.begin(), numbers.end(),0.0) / numbers.size());
}

float getMin(std::vector<float> numbers)
{
	sort(numbers.begin(), numbers.end());
	if(!numbers.empty())
	{
		return numbers[0];
	}
	return NAN;
}
	
float getMax(std::vector<float> numbers)
{
	sort(numbers.begin(), numbers.end());
	if(!numbers.empty())
	{
		return numbers[numbers.size()-1];
	}
	return NAN;
}
	
Stats ComputeStatistics(const std::vector<float> &numbers)
{
	Stats stats(getAverage(numbers), getMin(numbers), getMax(numbers));
	return stats;
}
}
