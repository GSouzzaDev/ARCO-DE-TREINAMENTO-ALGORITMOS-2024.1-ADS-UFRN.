/*Escreva uma função que determine a média e a situação de um aluno em uma 
disciplina. A função recebe como parámetros as três notas de um aluno (p1, p2, e p3),
seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro
para uma variável (media), conforme a seguinte assinatura:
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na
variável indicada pelo ponteiro media, a função deve armazenar a média do aluno, 
calculada como a média aritmética das três provas. Além disso, a função deve retornar 
um caractere indicando a situação do aluno no curso, definido de acordo com o seguinte
critério

|------------------|------------------|------------------|------------------|
| Número de Faltas |      Média       |     Situação     |      Retorno     |
|------------------|------------------|------------------|------------------|
|Menor ou igual a  |Maior ou igual a 6|Aprovado          |        A         |
|25% do total de.  |------------------|------------------|------------------|
|aulas.            |Menor que 6       |Reprovado         |        R         |
|------------------|------------------|------------------|------------------|
|Maior que 25% do  |Qualquer          |Reprovado por     |        F         |
|total de aulas    |                  |faltas            |                  |
|------------------|------------------|------------------|------------------|

Em seguida, escreva a função principal de um programa que utiliza a função anterior
para determinar a situação de um aluno. O programa deve:
-   Ler do teclado très números reais e dois números inteiros, representando as
notas da p1, p2 e p3, o número de faltas e o número de aulas, respectivamente; 
-   Chamar a função desenvolvida na primeira questão para determinar a média e a
situação do aluno na disciplina; 
-   Exibir a média (com apenas uma casa decimal) e a situação do aluno, isto é,
"APROVADO", "REPROVADO" ou "REPROVADO POR FALTAS", dependendo do caractere,
retornado pela função, conforme a tabela acima.
*/

#include <iostream>
using namespace std;

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);

int main() {
    float n1;
    float n2;
    float n3;
    int aulas;
    int faltas;
    float med;
    char s;
    
    cout << "\n\tDigite suas 3 notas, respectivamente: ";
    cin >> n1 >> n2 >> n3;
    
    cout << "\n\tDigite o número de aulas: ";
    cin >> aulas;
    
    cout << "\n\tDigite o número de faltas: ";
    cin >> faltas;
    
    s=situacao(n1, n2, n3, aulas, faltas, &med);
    cout << "\n\tSua media foi: " << med;
    cout << "\n\tA-aprovado";
    cout << "\n\tR-Reprovado";
    cout << "\n\tF-Reprovado por faltas";
    cout << "\n\tSituacao: " << s;
}

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
    int por;
    char ret;
    *media=(p1+p2+p3)/3;
    
    por=aulas/faltas;
    
    if(por<=25){
        if(*media>=6){
            ret='A';
        }else{
            ret='R';    
        }
    }else{
        ret='F';
    }
    
    return ret;
}
