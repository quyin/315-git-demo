#include "split.h"

namespace StringOps {

	using namespace std;

	void split(const string& src, char delim, vector<string>* values) {
		if (values == NULL) {
			return;
		}

		string::size_type i = 0;
		string::size_type j = src.find(delim);
		while (j != string::npos) {
			values->push_back(src.substr(i, j - i));
			i = ++j;
			j = src.find(delim, j);

			if (j == string::npos) {
				values->push_back(src.substr(i, src.length()));
			}
		}
	}

}  // namespace StringOps
