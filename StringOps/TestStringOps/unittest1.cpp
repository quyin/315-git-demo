#include "stdafx.h"
#include "CppUnitTest.h"

#include <string>
#include "parsing.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestStringOps
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestParseAddPlayer)
		{
			std::string input("AddPlayer 10001 \"Andruid Kerne\"");
			int playerId;
			std::string playerName;
			bool success =
				StringOps::parseAddPlayer(input, &playerId, &playerName);
			Assert::IsTrue(success);
			Assert::AreEqual(10001, playerId);
			Assert::AreEqual("Andruid Kerne", playerName.c_str());
		}

	};
}