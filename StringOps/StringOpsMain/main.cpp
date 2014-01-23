#include <iostream>
#include <map>
#include "join.h"
#include "split.h"
#include "trim.h"

using namespace std;

int main() {
	string s = "name = yin, email = yin@example.com, cell = 111-222-3333";

	vector<string> kv_pairs;
	StringOps::split(s, ',', &kv_pairs);

	map<string, string> data;
	for (int i = 0; i < kv_pairs.size(); ++i) {
		vector<string> kv;
		StringOps::split(kv_pairs[i], '=', &kv);
		if (kv.size() == 2) {
			StringOps::trim(&kv[0], ' ');
			StringOps::trim(&kv[1], ' ');
			data[kv[0]] = kv[1];
		}
	}

	cout << "Contact " << data["name"] << " at " << data["cell"]
		 << " or " << data["email"] << ".\n";

	vector<string> parts;
	string t;
	for (map<string, string>::iterator it = data.begin();
		it != data.end();
		++it) {
		vector<string> values;
		values.push_back(it->first);
		values.push_back(it->second);
		parts.push_back(StringOps::join(values, '='));
	}
	cout << "Reassembled: " << StringOps::join(parts, ';') << "\n";

	cout << "Hello" << endl;
	return 0;
}
