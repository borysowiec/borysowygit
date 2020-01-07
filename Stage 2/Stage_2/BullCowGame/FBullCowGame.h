#pragma once
#include <string>

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); // make a return value
	bool CheckGuessValidity(std::string); // make a return value
private:
	// initialization in constructor
	int MyCurrentTry;
	int MyMaxTries;
};