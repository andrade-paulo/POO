#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	void MoveTo(int px, int py, int max);
	void Translate(int dx, int dy, int max);
	int X();
	int Y();
};

inline int Point::X() {
	return x;
}

inline int Point::Y() {
	return y;
}
