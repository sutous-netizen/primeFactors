#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result;

		for (int divider = 2; number > 1; divider++)
			for (; number % divider == 0; number /= divider)
				result.push_back(divider);

		return result;
	}
};