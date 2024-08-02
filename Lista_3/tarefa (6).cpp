/*Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma,
até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar
as matrículas do aluno de maior media. */


#include <iostream>

using namespace std;

int main(){
	
	int aprovados=0, recuperacao=0, reprovados=0, maioresmatriculas=0, matricula;
	float nota;
	do{
	cout << "Digite sua matricula: ";
	cin >> matricula;
	
	cout << "Digite sua media: ";
	cin >> nota;
	
	
		if(nota>=7){
			aprovados++;
			if(nota>maioresmatriculas){
				maioresmatriculas=matricula;
			}
		} else if(nota<3){
			reprovados++;
		}else{
			recuperacao++;
		}
	}while(nota!=0);
	
	cout << "Aprovados : " << aprovados;
	cout << "Em recuperacao : " << recuperacao;
	cout << "Reprovados : " << reprovados;
	cout << "Matr. com maiores notas : " << maioresmatriculas;
}



