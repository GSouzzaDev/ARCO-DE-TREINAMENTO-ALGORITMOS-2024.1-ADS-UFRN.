/*Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome,
endereco e media geral. Apos o preenchimento, deve ser somado o valor 0,5 as medias de
todos os alunos que tiveram medias maiores que 5. Em seguida escreva o vetor final.
*/
#include <iostream>
using namespace std;

struct cadastro{
	int matricula;
	string nome;
	string endereco;
	float media;
};

int main(){
	int tamanho=2;
	cadastro alunos[tamanho];
	int i;
	
	cout << "\n\n\tCadastro dos alunos: ";
	for(i=0; i<tamanho; i++){
		cout << "\n\n\tCadastro do aluno: "<< i+1; 
		cout << "\n\tNome: ";
		getline(cin, alunos[i].nome);
		
		cout << "\n\tEndereco: ";
		getline(cin, alunos[i].endereco);
		
		cout <<"\n\tMatricula: ";
		cin >> alunos[i].matricula;
		
		cout <<"\n\tMedia: ";
		cin >> alunos[i].media;
		
		if(alunos[i].media>5){
			alunos[i].media=alunos[i].media+0.5;
		}
		cin.ignore();
	}
	
	cout << "\n\n\t-Relatorio-";
	for(i=0; i<tamanho; i++){
		cout << "\n\n\tAluno: "<< i+1; 
		cout << "\n\tNome: " << alunos[i].nome;
		cout << "\n\tEndereco: " << alunos[i].endereco;
		cout <<"\n\tMatricula: " << alunos[i].matricula;
		cout <<"\n\tMedia: " << alunos[i].media;
	}
}
