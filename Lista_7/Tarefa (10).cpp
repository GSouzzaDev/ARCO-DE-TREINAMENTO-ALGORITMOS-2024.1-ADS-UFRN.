/*Em seguida, utilizando o algoritmo anterior implemente outra função chamada
mulitplicaEscala, que recebe como parâmetro dois vetores V1 e V2 (Ambos de tamanho
N), e um número X. A função deve multiplicar cada um dos elementos de V1 por
X e armazenar os resultados em V2. A função deve possuir a seguinte assinatura: void
multiplica_Ecalar{int *v1, int *v2, int x, int n};
No main, ultilize as funções inverteVetor e multiplaEscalar para inverter um vetor de
tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um escalar
também fornecido pelo usúario. Por úlitmo, o programa deverá exibir o vetor resultante.
*/

#include <iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n);
void multipla_escalar(int *v1, int *v2, int x, int n);

int main(){
	const int N=10;
	int n1[N];
	int n2[N];
	int maior;
	int i;
	int x;
	
	for(i=0; i<N; i++){
		cout << "\n\tDigite o numero " << i+1 << ":\n ";
		cin >> n1[i];
	}
	
	maior=inverteVetor(n1, n2, N);
	
	cout << "\n\tVetor original: ";
	for(i=0; i<N; i++){
		cout << n1[i] << " ";
	}
	
	cout << "\n\tVetor invertido: ";
	for(i=0; i<N; i++){
		cout << n2[i] << " ";
	}
	
	cout << "\n\tMaior valor: " << maior;
	
	cout << "\n\tDigite o valor para multiplicar o vetor: ";
	cin >> x;
	
	multipla_escalar(n1, n2, x, N);
	
	cout << "\n\tVetor multiplicado por " << x << ": ";
	for(i=0; i<N; i++){
		cout <<n2[i] << " ";
	}
	
	
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

void multipla_escalar(int *v1, int *v2, int x, int n){
	int i;
	for(i=0; i<n; i++){
		v2[i]=(v1[i]*x);
	}	
}
