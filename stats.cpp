#include "stats.h"
#include <vector>
float getAverage(const std::vector<float> numbers)
{
	float sum = 0.0;
	for(float value:numbers)
	{
		sum += value;
	}
	return (sum / numbers.size());
}

float getMin(const std::vector<float> numbers)
{
	float minValue = numbers[0];
	for(float value:numbers)
	{
		if (value < minValue)
			minValue = value;
	}
	return minValue;
}

float getMax(const std::vector<float> numbers)
{
	float maxValue = numbers[0];
	for (float value : numbers)
	{
		if (value < maxValue)
			maxValue = value;
	}
	return maxValue;
}

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers)
{
	Stats statistics;
	statistics.average = getAverage(numbers);
	statistics.min = getMin(numbers);
	statistics.max = getMax(numbers);
    return statistics;
}
