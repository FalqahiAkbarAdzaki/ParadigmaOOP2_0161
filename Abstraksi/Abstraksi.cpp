#include <iostream>

using namespace std;

class AbstraksiKlas {
private: string x, y;

public:
	//method untuk mnegisi nilai
	//private member
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	//untuk menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
	}
};