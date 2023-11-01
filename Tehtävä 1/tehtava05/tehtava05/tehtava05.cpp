#include <iostream>
#include <random>
using namespace std;

int main() {
	int luku1;
	int luku2;
	cout << "Maarita milta valilta arvottava luku on. \n";
	cout << "Ensimainen luku: ";
	cin >> luku1;
	cout << "Toinen luku: ";
	cin >> luku2;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(luku1, luku2);
	int random_number = distribution(gen);
	int x;
	int i = 0;
	while (true) {
		cout << "Arvaa luku (" << luku1 << "-" << luku2 << ") : ";
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