/*
Calculo do Custo Homem-Hora de uma confecção
Mod 1 - Estimativa do hora gasta
Variáveis:
1. Tempo entre pontos por maquina (tempoponto)
2. Tamanho do ponto (tamponto)
3. Tamanho do espaço a ser costurado (tamespaco)
4. Quantidade de pontos para a realização do serviço (qtdeponto)
*/

#include <iostream>
#define endl "\n"
using namespace std;

int main(){
	int tamespaco, tamponto;
	float tempoponto, qtdeponto;
	cout << "Insira, em ordem, o tamanho do espaco, do ponto da maquina e o tempo entre os pontos da maquina" << endl;
	cin >> tamespaco >> tamponto >> tempoponto;
	
	//Processamento
	qtdeponto = tamespaco / tamponto;
	cout << qtdeponto * tempoponto << endl;
	
/*
Ideias Adcionais:
- 
*/
}