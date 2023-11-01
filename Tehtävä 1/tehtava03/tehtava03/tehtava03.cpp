#include <iostream>
using namespace std;

int main() {
	int x;
	while (true) {
		cout << "Pelataan Kiinalaista Numeropelia! \n";
		cout << "Annna luku: ";
		cin >> x;
		if (x == 0) {
			break;
		}
		if (x >= std::numeric_limits<int>::max()) {
			cout << "Tasapeli. \n";
		}
		cout << "Voitin, minun on " << x + 1 << "! \n";
	}
	return 0;
}