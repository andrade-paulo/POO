#include <iostream>
using namespace std;

struct Jogo
{
	string nome; // nome do jogo
	float preco; // preço do jogo
	int horas; // quantidade de horas jogadas 
	float custo; // valor por hora jogada
};

Jogo adquirir(const string& titulo, float valor);
void atualizar(Jogo& jogo, float valor);
void jogar(Jogo& jogo, int tempo);
void exibir(const Jogo& jogo);

int main()
{
	Jogo mineirinho = adquirir("MineirinhoAdventures", 214.84);
	atualizar(mineirinho, 179.77);
	exibir(mineirinho);

	// Horas menor que 1
	jogar(mineirinho, 0.8);
	exibir(mineirinho);

	jogar(mineirinho, 76);
	exibir(mineirinho);
	
	// Horas maior que o custo
	jogar(mineirinho, 183);
	exibir(mineirinho);
}

Jogo adquirir(const string& titulo, float valor) {
	Jogo novo_jogo {titulo, valor, 0, valor};

	return novo_jogo;
}

void atualizar(Jogo& jogo, float valor) {
	jogo.preco = valor;

	if (jogo.horas != 0) {
		jogo.custo = jogo.preco / jogo.horas;
	}
}

void jogar(Jogo& jogo, int tempo) {
	if (tempo > 0) {  // Só valores relevantes
		jogo.horas += tempo;
		jogo.custo = jogo.preco / jogo.horas;
	}
}

void exibir(const Jogo& jogo) {
	cout << endl << "Nome: " << jogo.nome << endl;
	cout << "Preco: R$" << jogo.preco << endl;
	cout << "Horas jogadas: " << jogo.horas << endl;
	cout << "Custo (preco/horas): R$" << jogo.custo << endl;
}