#ifndef JOIN_H
#define JOIN_H

#include <string>
#include <vector>

namespace StringOps {

	// Join substrings in a vector into one, with the given delimiter c.
	std::string join(const std::vector<std::string>& values, char delim);

}  // namespace StringOps

#endif  // JOIN_H
