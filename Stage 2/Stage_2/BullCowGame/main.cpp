#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintItBack();

//the entry point for the game
int main()
{
	PrintIntro();

	GetGuessAndPrintItBack();
	GetGuessAndPrintItBack();

	cout << endl;
	return 0;
}

//introduce the game
void PrintIntro() {
	constexpr int WORD_LENGHT = 5;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORD_LENGHT;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

//get a guess from the player
string GetGuessAndPrintItBack() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//print the guess to the player
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}