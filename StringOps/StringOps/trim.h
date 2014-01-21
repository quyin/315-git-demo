#ifndef TRIM_H
#define TRIM_H

#include <string>
#include <vector>

namespace StringOps {

	// Trim the given character c from the beginning of the input string.
	void ltrim(std::string* s, char c);

	// Trim the given character c from the end of the input string.
	void rtrim(std::string* s, char c);

	// Trim the given character c from both ends of the input string.
	void trim(std::string* s, char c);

}  // namespace StringOps

#endif  // TRIM_H
