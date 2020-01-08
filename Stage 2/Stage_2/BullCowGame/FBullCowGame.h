#pragma once
#include <string>

using FString = std::string;
using int32 = int;

// all values initialasied to zero
struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); // make a return value
	bool CheckGuessValidity(FString); // make a return value
	FBullCowCount SubmitGuess(FString);

private:
	// initialization in constructor
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};