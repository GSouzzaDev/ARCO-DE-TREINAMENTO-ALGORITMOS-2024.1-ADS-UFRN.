/* 23. A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média
das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. */

#include <iostream>

using namespace std;

int main(){
	
	float nota1, nota2, nota3, media;
	
	cout << "\n\tVamos calcular a media final do estudante";
	cout <<"\n\tNota no trabalho de laboratorio: ";
	cin >> nota1;
	
	cout << "\n\tNota na avaliacao semestral: ";
	cin >> nota2;
	
	cout << "\n\tNota no exame final: ";
	cin >> nota3;
	
	media=((nota1*2)+(nota2*3)+(nota3*5))/10;
	
	cout << "\n\tSua media final foi: " << media;
	
	if(media>0 && media<3){
		cout << "\n\tSituacao: Reprovado";
	}else if(media>=3 && media<5){
		cout << "\n\tSituacao: Recuperacao";
	}else{
		cout << "\n\tSituacao: Aprovado";
	}
}


