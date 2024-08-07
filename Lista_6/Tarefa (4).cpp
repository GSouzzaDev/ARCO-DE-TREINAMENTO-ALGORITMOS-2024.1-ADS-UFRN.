/*Altere o exercicio anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada
cliente deverá ser perguntado: "Novo cliente (S/N)?". Caso o usuario escolha "N" ou chegar
nos 20 clientes, o programa deve mostrar um relatorio de todos os clientes cadastrados e
finalizar. OBS: Deve-se ultilizar um vetor de registros na solução
*/

#include <iostream>
using namespace std;

struct cadastro{
	int identidade;
	string nome;
	string endereco;
	int telefone;
	
};
int main(){
	const int tamanho=20;
	cadastro pessoa[tamanho];
	int i;
	int clientes=0;
	char deci='s';
	
	while(deci=='s' || deci=='S'){
		i=0;
		cout << "\n\n\t-Cadastro do cliente " << i+1 << " -";
		getchar();
		cout << "\n\tNome: ";
		getline(cin, pessoa[i].nome);
		
		cout << "\n\tEndereco: ";
		getline(cin, pessoa[i].endereco);
		getchar();
		cout << "\n\tIdentidade: ";
		cin >> pessoa[i].identidade;
		
		cout << "\n\tITelefone: ";
		cin >> pessoa[i].telefone;
		i++;

		cout << "\n\n\tCadastro concluido!";
		
		cout << "\n\tDeseja continuar? (S/N)";
		cin >> deci;
		clientes++;
	}
	
	cout << "\n\tRelatorio dos clientes: ";
	
		for(i=0; i<clientes; i++){
			cout << "\n\tCliente " << i+1; "\n\n";
			cout << "\n\tNome: " << pessoa[i].nome;
			cout << "\n\tEndereco: " << pessoa[i].endereco;
			cout << "\n\tIdentidade: " << pessoa[i].identidade;
			cout << "\n\tTelefone: " << pessoa[i].telefone;
		}
}
