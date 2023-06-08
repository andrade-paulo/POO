#include <iostream>
#include "Point.h"
using namespace std;

class Rect
{
private:
	Point a;
	Point b;
	void DrawLine(int size, char type='-');

public:
	void Create(int ax, int ay, int bx, int by);
	void Translate(int dx, int dy);
	void Show();
};

