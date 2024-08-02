/*Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração,
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção
(E) e disjunção (OU), apresentando ao final os resultados obtidos.*/

#include <iostream>

using namespace std;

int main()[
  int A, B, adicao, subtracao, multiplicacao, divisao;
  boll C, D;
  
  cout << "Digite dois valores e veja as operações basicas com eles: \n";
  cin >> A >> B;
  
  adicao = A+B;
  subtracao= A-B;
  multiplicacao= A*B;
  divisao= A/B;
  
  cout << "A adicao entre " << A << " e " << B << " e: " << adicao;
  cout << "A subtracao entre " << A << " e " << B << " e: " << subtracao;
  cout << "A multiplicacao entre " << A << " e " << B << " e: " << multiplicacao;
  cout << "A divisao entre " << A << " e " << B << " e: " << divisao;
  
  cout << "Digite dois valores lógicos para C e D (0 para falso, qualquer outro número para verdadeiro): ";
    cin >> C >> D; 
    
    bool notC = !C;
    bool notD = !D;
    bool conjuncao = C && D;
    bool disjuncao = C || D;

    cout << "Negação de C: " << notC << endl;
    cout << "Negação de D: " << notD << endl;
    cout << "Conjunção (C E D): " << conjuncao << endl;
    cout << "Disjunção (C OU D): " << disjuncao << endl;

    return 0;
}
  

] 
