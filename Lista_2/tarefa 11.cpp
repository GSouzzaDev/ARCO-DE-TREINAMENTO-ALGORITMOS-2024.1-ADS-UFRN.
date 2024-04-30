/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais; • Escaleno: tem os comprimentos dos três
lados diferentes.*/

#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	
		cout << "\nDigite o comprimento de cada lado do triangulo:\n";
		cin >> x >> y >> z;
		
		if(x==y && y==z && x==z){
			cout << "\tSeu triangulo e equilatero, possui todos os lados iguais!";
		} else if(x!=y && y!=z && x!=z ){
			cout << "\tSeu triangulo e escaleno, nao possui nenhum lado igual!";
		}else {
			cout << "\tSeu triangulo e equilatero, possui dois lados iguais!";
		}
		
	return 0;
		
}

