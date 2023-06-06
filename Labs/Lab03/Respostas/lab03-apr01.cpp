#include <iostream>
using namespace std;

class Coordinate 
{
private:
	int x, y;
public:
	void Translate(int, int);
	void MoveTo(int, int);
	void Show();
};

// O resto da divisão entre quaisquer inteiros A e B estará sempre entre 0 e B - 1

void Coordinate::Translate(int dx, int dy) {
	x = (x + dx) % 1920;
	y = (y + dy) % 1080;
}

void Coordinate::MoveTo(int px, int py) {
	x = px % 1920;
	y = py % 1080;
}

void Coordinate::Show() {
	cout << x << ", " << y << endl;
}
