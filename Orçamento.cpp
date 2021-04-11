#include <iostream>
using namespace std;

int main(){
	float valor, acumGastos = 0, acumAquisicoes = 0, acumInvestimentos = 0, acumReparos = 0;
	
	cout << "Entre com os valores relacionados aos Gastos" << endl << "Apos finalizar, entre com o valor 'zero':" << endl;
	cin >> valor;
	do {
	  acumGastos += valor;
	  cin >> valor;
	} while (valor != 0);
	
	cout << "Entre com os valores relacionados as Aquisicoes" << endl << "Apos finalizar, entre com o valor 'zero':" << endl;
	cin >> valor;
	while (valor != 0) {
	  acumAquisicoes += valor;
	  cin >> valor;
	}
  
	cout << "Entre com os valores relacionados aos Investimentos" << endl << "Apos finalizar, entre com o valor 'zero':" << endl;
	cin >> valor;
	while (valor != 0) {
	  acumInvestimentos += valor;
	  cin >> valor;
	}
	
	cout << "Entre com os valores relacionados aos Reparos" << endl << "Apos finalizar, entre com o valor 'zero':" << endl;
	cin >> valor;
	while (valor != 0) {
	  acumReparos += valor;
	  cin >> valor;
	}
	
	cout << "O total em Gastos eh de R$ " << acumGastos << ". Em Aquisicoes eh de R$ " << acumAquisicoes << ". Em Investimentos eh de R$ " << acumInvestimentos << ". Em Reparos eh de R$ " << acumReparos << endl;
}