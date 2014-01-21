#include "join.h"

namespace StringOps {

	using namespace std;

	string join(const vector<string>& values, char delim) {
		string s;
		for (int i = 0; i < values.size(); ++i) {
			s += values[i];
			if (i < values.size() - 1)
				s += delim;
		}
		return s;
	}

}  // namespace StirngOps
