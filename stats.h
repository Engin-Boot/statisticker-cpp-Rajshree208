#include <vector>

namespace Statistics {
    class Stats
	{
	public:
		float average;
		float min;
		float max;
		Stats(float average, float min, float max)
		{
			this->average = average;
			this->min = min;
			this->max = max;
		}
	};
	Stats ComputeStatistics(const std::vector<float>& numbers);
}
