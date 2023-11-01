#include <iostream>
#include <random>
using namespace std;

int main() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(1, 100);
	int random_number = distribution(gen);
	int x;
	int i = 0;
	while (true) {
		cout << "Arvaa luku (1-100) : ";
		cin >> x;
		i++;
		if (x < random_number) {
			cout << "Liian pieni! \n";
		}
		if (x > random_number) {
			cout << "Liian suuri! \n";
		}
		if (x == random_number) {
			cout << "Oikein! Teit " << i << " arvausta.";
			break;
		}
	}
	return 0;
}