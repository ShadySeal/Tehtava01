#include <iostream>
#include <random>
using namespace std;

int randomNumber(int luku1, int luku2) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(luku1, luku2);
	return distribution(gen);
}

bool guessNumber(int guess, int number, int attempts) {
	if (guess < number) {
		cout << "Liian pieni! \n";
		return false;
	}
	if (guess > number) {
		cout << "Liian suuri! \n";
		return false;
	}
	if (guess == number) {
		cout << "Oikein! Teit " << attempts << " arvausta.";
		return true;
	}
}

int main() {
	int luku1, luku2;
	cout << "Maarita milta valilta arvottava luku on. \n";
	cout << "Ensimainen luku: ";
	cin >> luku1;
	cout << "Toinen luku: ";
	cin >> luku2;
	int number = randomNumber(luku1, luku2);
	int guess;
	int attempts = 0;
	bool correctGuess = false;
	while (!correctGuess) {
		cout << "Arvaa luku (" << luku1 << "-" << luku2 << ") : ";
		cin >> guess;
		attempts++;
		correctGuess = guessNumber(guess, number, attempts);
	}
	return 0;
}