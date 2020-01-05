#include <iostream>
#include <string>

using namespace std;

int main()
{
	//introduce the game
	constexpr int WORD_LENGHT = 5;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORD_LENGHT;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;

	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	cin >> Guess;

	//repeat the guess to the player
	cout << "Your guess was: " << Guess << endl;

	cout << endl;
	return 0;
}