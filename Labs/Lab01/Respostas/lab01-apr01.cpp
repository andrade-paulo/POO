#include <iostream>
using namespace std;

class Conta
{
private:
	string nome;
	int numero;
	float saldo;
public:
	void criarConta(const string &nome);  // O número é aleatório e o saldo começa em 0
	void exibirDados();
	void depositar(float valor);
	void sacar(float valor);
};