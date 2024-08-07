/*Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando
o usuário digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 20
clientes, a tela seja ser limpa e seja exibida uma nova tela perguntando se o usuario quer ver
um relatorio ou consultar um cliente individualmente. Se ele desejar ver o relatorio, o
sistema devera exibi-lo conforme questão anterior. Se ele escolher consultar um cliente
individualmente, o sistema deverá solicitar a identidade do cliente procurado, fazer uma
busca no vetor e informar sues dados caso o cliente esteja cadastrado. Se não existir cliente
cadastrado com aquela identidade, o sistema deverá informar "Cliente não cadastrado".
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
	int opc;
	int id;
	char deci='s';
	bool encontrado = false;
	
	
	while(deci=='s' || deci=='S' && clientes<20){
		cout << "\n\n\t-Cadastro do cliente " << clientes+1 << " -";
		cin.ignore();
		cout << "\n\tNome: ";
		getline(cin, pessoa[clientes].nome);
		
		cout << "\n\tEndereco: ";
		getline(cin, pessoa[clientes].endereco);
		
		cout << "\n\tIdentidade: ";
		cin >> pessoa[clientes].identidade;
		
		cout << "\n\tTelefone: ";
		cin >> pessoa[clientes].telefone;

		cout << "\n\n\tCadastro concluido!";
		clientes++;
		cout << "\n\tDeseja cadastrar um novo cliente? (S/N)";
		cin >> deci;

	}
	
	cout << "\n\tDeseja ver o relatorio ou consultar um cliente? ";
	cout << "\n\t(1/2)";
	cin >> opc;
	
	switch (opc){
		case 1:
			cout << "\n\t-Relatorio dos clientes-";
	
			for(i=0; i<clientes; i++){
				cout << "\n\tCliente " << i+1; "\n\n";
				cout << "\n\tNome: " << pessoa[i].nome;
				cout << "\n\tEndereco: " << pessoa[i].endereco;
				cout << "\n\tIdentidade: " << pessoa[i].identidade;
				cout << "\n\tTelefone: " << pessoa[i].telefone;
			}
		break;	
		
		case 2:
			cout << "\n\tDigite a identidade do cliente: ";
			cin >> id;
			
			encontrado = false;
			for(i=0; i<clientes || encontrado==true; i++){
				if(pessoa[i].identidade==id){
					encontrado=true;
					cout << "\n\t-Consulta do cliente-\n\n";
					cout << "\n\tNome: " << pessoa[i].nome;
					cout << "\n\tEndereco: " << pessoa[i].endereco;
					cout << "\n\tIdentidade: " << pessoa[i].identidade;
					cout << "\n\tTelefone: " << pessoa[i].telefone;
				}else if(i>=clientes || encontrado==false){
					cout << "\n\tCliente nao cadastrado";
				}
			}
			
		break;
		default:
			cout << "Opcao não encontrada";
	}
}
