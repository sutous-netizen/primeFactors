#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = { };
		if (number > 1) {
			int divider = 2;
			if (number == 4 || number == 6 || number == 9 || number == 12) {
				for (divider = 2; number > 1; divider++) {
					while (number % divider == 0) {
						result.push_back(divider);
						number /= divider;
					}
				}
			}

			else {
				result.push_back(number);
			}
			
		}
		return result;
	}
};