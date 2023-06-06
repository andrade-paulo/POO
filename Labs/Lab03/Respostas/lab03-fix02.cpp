#include <iostream>
using namespace std;

struct Coordinate {
	int x, y;

	void moveBy(int, int);
	void moveTo(int, int);
};

class Coordenada
{
public:
	int x, y;

	void moverPor(int, int);
	void moverPara(int, int);
};


int main()
{
	Coordenada testando = { 3, 9 };

	cout << testando.x << ", " << testando.y << endl;
	testando.moverPor(1, 7);
	cout << testando.x << ", " << testando.y << endl;
	testando.moverPara(5, 25);
	cout << testando.x << ", " << testando.y << endl;

	cout << endl;

	Coordinate testing = {2, 4};

	cout << testing.x << ", " << testing.y << endl;
	testing.moveBy(1, 5);
	cout << testing.x << ", " << testing.y << endl;
	testing.moveTo(4, 16);
	cout << testing.x << ", " << testing.y << endl;
}


void Coordinate::moveBy(int dx, int dy) {
	x += dx;
	y += dy;
}

void Coordinate::moveTo(int px, int py) {
	x = px;
	y = py;
}

void Coordenada::moverPor(int dx, int dy) {
	x += dx;
	y += dy;
}

void Coordenada::moverPara(int px, int py) {
	x = px;
	y = py;
}