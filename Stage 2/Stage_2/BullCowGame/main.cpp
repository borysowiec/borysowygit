/*
This is the console executable, that makes use of the BullCow class.
This act as the view in an MVC pattern and is responsible for all user interaction. For game logic see the FBullCowGame class.
*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; //instance

// the entry point for the game
int main()
{
	std::cout << BCGame.GetCurrentTry();

	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	}
	while (bPlayAgain);

	std::cout << std::endl;
	return 0; // exit the aplication
}

// introduce the game
void PrintIntro() {
	std::cout << "Welcome to Bulls and Cows" << std::endl;
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	// loop for the number of turns asking for guesses
	for (int32 count = 1; count <= MaxTries; count++) {
		FText Guess = GetGuess();

		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
		
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows << std::endl;

		std::cout << std::endl;
	}
}

// get a guess from the player
FText GetGuess() {
	int32 CurrentTry = BCGame.GetCurrentTry();

	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	FText Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n)";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
