#include <vector>

namespace Statistics {
    class Stats
	{
	private:
		float average;
		float min;
		float max;
	public:
		Stats(float average, float min, float max)
		{
			this->average = average;
			this->min = min;
			this->max = max;
		}
	};
	Stats ComputeStatistics(const std::vector<float>& numbers);
}
