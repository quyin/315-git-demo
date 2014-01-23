#ifndef PARSING_H
#define PARSING_H

#include <string>
#include <vector>

namespace StringOps {

    // Parse an AddPlayer command.
    // Returns: true if parsing was successful, otherwise false.
	bool parseAddPlayer(
		const std::string& input,
		int* playerId,
		std::string* playerName);

}  // namespace StringOps

#endif  // PARSING_H
