#pragma once
#include <string>

class FBullCowGame {
public:
	void Reset(); //make a return value
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string); //make a return value
private:
	int MyCurrentTry;
	int MyMaxTries;
};