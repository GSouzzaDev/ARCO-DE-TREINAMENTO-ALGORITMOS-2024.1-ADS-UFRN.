/*Crie um algoritmo para manipular vetores. O seu programa deve implementar 
uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2,
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem
inversa. Ou seja, se a função receber V1={1,2,3,4,5), a função deve copiar os elementos
para V2 na seguinte ordem: V2={5,4,3,2,1}. Além disso, a função também deve retornar
o maior valor encontrado em V1. A função deve posssuir a seguinte assinatura: int
inverteVetor(int *v1, int *v2, int n); Elabore um teste da função main.
*/

#include <iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n);
int main(){
	const int N=5;
	int n1[N];
	int n2[N];
	int maior;
	int i;
	
	for(i=0; i<N; i++){
		cout << "\n\tDigite o numero " << i+1 << ":\n ";
		cin >> n1[i];
	}
	
	maior=inverteVetor(n1, n2, N);
	
	cout << "\n\tVetor original: ";
	for(i=0; i<N; i++){
		cout << n1[i];
	}
	
	cout << "\n\tVetor invertido: ";
	for(i=0; i<N; i++){
		cout << n2[i];
	}
	
	cout << "\n\tMaior valor: " << maior;
}

int inverteVetor(int *v1, int *v2, int n){
	int i;
	int maior=0;
	for(i=0; i<n; i++){
		v2[n -i -1]=v1[i];
		if(v1[i]>maior){
			maior=v1[i];
		}
	}
	
	return maior;
}
