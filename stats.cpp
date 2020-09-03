#include "stats.h"
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>

namespace Statistics{
	
float getAverage(const std::vector<float> numbers)
{
	return (std::accumulate(numbers.begin(), numbers.end(),0.0) / numbers.size());
}

float* getMaxMin(const std::vector<float> numbers)
{
	std::sort(numbers.begin(), numbers.end());
	float result[] = { numbers[0],numbers[numbers.size() - 1] };
	return result;
}

Stats ComputeStatistics(const std::vector<float>& numbers)
{
	Stats statistics;
	if(numbers.size()==0)
	{
		statistics.average = NAN;
		statistics.min = NAN;
		statistics.max = NAN;
		return statistics;
	}
	statistics.average = getAverage(numbers);
	statistics.min = getMaxMin(numbers)[0];
	statistics.max = getMaxMin(numbers)[1];
    	return statistics;
}
}
