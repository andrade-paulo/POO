#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class Conta {
private:
	string nome;
	int numero;
	float saldo;
public:
	void criarConta(const string &usuario);
	void exibirDados();
	void depositar(float valor);
	void sacar(float valor);
};

void Conta::criarConta(const string& usuario) {
	nome = usuario;
	
	srand(time(0));
	numero = (rand() % 9000) + 1000;  // Número aleatório de 4 dígitos
	
	saldo = 0;
}

void Conta::exibirDados() {
	cout << endl << "Cliente: " << nome << endl
		<< "Numero da conta: " << numero << endl
		<< "Saldo: R$" << saldo << endl;
}

void Conta::depositar(float valor) {
	saldo += valor;
}

void Conta::sacar(float valor) {
	saldo -= valor;
}