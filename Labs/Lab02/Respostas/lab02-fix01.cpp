#include <iostream>
using namespace std;

class Jogo
{
private:
	string nome; // nome do jogo
	float preco; // pre�o do jogo
	int horas; // quantidade de horas jogadas 
	float custo; // valor por hora jogada

	void calcular() { if (horas > 0) custo = preco / horas; }

public:
	void adquirir(const string& titulo, float valor);
	void atualizar(float valor);
	void jogar(int tempo);
	void exibir();
};


int main()
{
	Jogo mineirinho;
	mineirinho.adquirir("MineirinhoAdventures", 214.84);
	mineirinho.atualizar(179.77);
	mineirinho.exibir();

	// Horas menor que 1
	mineirinho.jogar(0.8);
	mineirinho.exibir();

	mineirinho.jogar(76);
	mineirinho.exibir();
	
	// Horas maior que o custo
	mineirinho.jogar(183);
	mineirinho.exibir();
}

void Jogo::adquirir(const string& titulo, float valor) {
	nome = titulo;
	preco = valor;
	horas = 0;
	custo = valor;
}

void Jogo::atualizar(float valor) {
	preco = valor;

	calcular();
}

void Jogo::jogar(int tempo) {
	if (tempo > 0) {  // S� valores relevantes
		horas += tempo;
		custo = preco / horas;
	}
}

void Jogo::exibir() {
	cout << endl << "Nome: " << nome << endl;
	cout << "Preco: R$" << preco << endl;
	cout << "Horas jogadas: " << horas << endl;
	cout << "Custo (preco/horas): R$" << custo << endl;
}