#include <iostream>
using namespace std;

class Conta
{
private:
	string nome;
	int numero;
	float saldo;
public:
	void criarConta(const string &nome);  // O n�mero � aleat�rio e o saldo come�a em 0
	void exibirDados();
	void depositar(float valor);
	void sacar(float valor);
};