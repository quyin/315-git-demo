#ifndef SPLIT_H
#define SPLIT_H

#include <string>
#include <vector>

namespace StringOps {

	// Split a string into substrings using the given delimiter c.
	void split(const std::string& src, char delim, std::vector<std::string>* values);

}  // namespace StringOps

#endif  // SPLIT_H
