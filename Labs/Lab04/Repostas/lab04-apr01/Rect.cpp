#include <iostream>
#include "Rect.h"
using namespace std;

const int CanvaSize = 20;

void Rect::Create(int ax, int ay, int bx, int by) {
	a.MoveTo(ax, ay, CanvaSize);
	b.MoveTo(bx, by, CanvaSize);
}

void Rect::Translate(int dx, int dy) {
	a.Translate(dx, dy, CanvaSize);
	b.Translate(dx, dy, CanvaSize);
}

void Rect::DrawLine(int size, char type) {
	for (int i = 0; i < size; i++)
		cout << type;
}

void Rect::Show() {
	int dX = b.X() - a.X();
	int dY = b.Y() - a.Y();

	DrawLine(a.Y(), '\n');

	DrawLine(a.X(), ' ');

	// Linha do ponto a
	cout << "a";
	DrawLine(dX);
	cout << endl;
	
	// Preenchimento do retângulo
	for (int i = 0; i < dY-1; i++) {
		DrawLine(a.X(), ' ');
		DrawLine(dX + 1);
		cout << endl;
	}
	
	// Linha do ponto b
	DrawLine(a.X(), ' ');
	DrawLine(dX);
	cout << "b";

	// Preenchimento do quadro
	DrawLine(CanvaSize - b.Y(), '\n');

	// Linha final
	DrawLine(CanvaSize);
}

