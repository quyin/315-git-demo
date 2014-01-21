#include "trim.h"

namespace StringOps {

	using namespace std;

	void ltrim(string* s, char c) {
		if (s == NULL || s->empty()) {
			return;
		}

		string::iterator p;
		for (p = s->begin(); p != s->end() && *p == c; ++p) {
			;
		}
		s->erase(s->begin(), p);
	}

	void rtrim(string* s, char c) {
		if (s == NULL || s->empty()) {
			return;
		}

		string::iterator p;
		for (p = s->end(); p != s->begin() && *--p == c;) {
			;
		}
		if (*p != c) {
			p++;
		}
		s->erase(p, s->end());
	}

	void trim(string* s, char c) {
		ltrim(s, c);
		rtrim(s, c);
	}

}  // namespace StringOps
