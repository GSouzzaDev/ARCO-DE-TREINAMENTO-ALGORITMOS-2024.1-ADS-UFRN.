/*Elabore um algoritmo que leia duas matrizes M(4,6) e N(4,6) e crie uma matriz que seja:
a) o produto de M por N;
b) a soma de M com N;
c) a diferença de M com N
Escrever as matrizes calculadas.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int const largura=3;
	int const altura=2;
	int M[largura] [altura];
	int N[largura] [altura];
	int produto[largura] [altura];
	int soma[largura] [altura];
	int diferenca[largura] [altura];
	int i;
	int u;
	
	cout << "\n\t\tDigite a primeira matriz:\n ";
	for(i=0; i<largura; i++){
		for(u=0; u<altura; u++){
			cout << "\n\tDigite o valor da linha " << (i+1) << " e da colunha " << (u+1) << ": ";
			cin >> M[i] [u];
		}
	}
	
	system("cls");
	
	cout << "\n\t\tDigite a segunda matriz:\n ";
	for(i=0; i<largura; i++){
		for(u=0; u<altura; u++){
			cout << "\n\tDigite o valor da linha " << (i+1) << " e da colunha " << (u+1) << ": ";
			cin >> N[i] [u];
		}
	}
	
	system("cls");
	
	cout << "\n\t\tA matriz correspondente ao produto da primeira pela segunda:\n ";
	for(i=0; i<largura; i++){
		for(u=0; u<altura; u++){
			produto[i] [u] = M[i] [u] * N[i] [u];
			cout<<produto[i] [u] << " ";
		}
		
		cout << "\n";
		
	}
	

}
