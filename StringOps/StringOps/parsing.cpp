#include <cstdlib>
#include "parsing.h"
#include "split.h"

namespace StringOps {

	using namespace std;

	bool parseAddPlayer(
		const string& input,
		int* playerId,
		string* playerName) {
		vector<string> parts;
		split(input, ' ', &parts);
		if (parts.size() > 2) {
			if (parts[0] == "AddPlayer") {
				*playerId = atoi(parts[1].c_str());
				int q1 = input.find('"');
				int q2 = input.rfind('"');
				if (q1 != string::npos && q2 != string::npos && q2 - q1 > 2) {
					*playerName = input.substr(q1 + 1, q2 - q1 - 1);
					return true;
				}
			}
		}
		return false;
	}

}  // namespace StirngOps
