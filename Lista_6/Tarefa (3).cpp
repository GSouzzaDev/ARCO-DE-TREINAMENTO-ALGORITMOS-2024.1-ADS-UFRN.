/*Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias
para um cliente são: identidade, nome, endereco, e telefone. OBS: Deve ser usada uma
estrutura de registro para a construção deste cadastro.
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
	cadastro pessoa[2];
	int i;
	
	for(i=0; i<2; i++){
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
	}
	
	cout << "\n\n\tCadastro concluido!";
	
	for(i=0; i<2; i++){
		cout << "\n\tCliente " << i+1; "\n\n";
		cout << "\n\tNome: " << pessoa[i].nome;
		cout << "\n\tEndereco: " << pessoa[i].endereco;
		cout << "\n\tIdentidade: " << pessoa[i].identidade;
		cout << "\n\tTelefone: " << pessoa[i].telefone;
	}
}
