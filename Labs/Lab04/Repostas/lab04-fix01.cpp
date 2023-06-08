#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
};

int main()
{
	cout << "Tamanho da classe: " << sizeof(Point) << " bytes" << endl;
	cout << "Tamanho dos atributos: " << sizeof(int) * 2 << " bytes" << endl;  // Dois inteiros

	// Conclusão: O tamanho da classe é dado apenas pela soma dos tamanhos dos atributos
}