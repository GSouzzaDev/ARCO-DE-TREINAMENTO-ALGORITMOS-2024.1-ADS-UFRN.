/*Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, ultilize 
duas funções: uma que determine o maior valor entre as notas (de provas ou de
trabalhos) e outra que calcule a média aritmética das duas maiores notas*/
#include <iostream>
using namespace std;

struct Aluno{
    float p1;
    float p2;
    float t1;
    float t2;
    float mp=0;
    float mt=0;
    float media;
};

Aluno maior();
Aluno media(Aluno nota);
int main(){

    Aluno alum;
    Aluno resu;
    
    alum=maior();
    resu=media(alum);
    
    cout << "\n\tmedia do aluno(basseado nas notas mais altas): " << resu.media;
    
}

Aluno maior(){
    Aluno a;
    
    cout << "\n\tDigite as notas do aluno: " << endl;
    
    cout << "\n\tProva1: " << endl;
    cin >> a.p1;
    
    cout << "\n\tProva2: " << endl;
    cin >> a.p2;
    
    cout << "\n\tTrabalho1: " << endl;
    cin >> a.t1;
    
    cout << "\n\tTrabalho2: " << endl;
    cin >> a.t2;
    
    if(a.p1>a.mp){
        a.mp=a.p1;
    }
    if(a.p2>a.p1){
        a.mp=a.p2;
    }
    
    if(a.t1>a.mt){
        a.mt=a.t1;
    }
    if(a.t2>a.t1){
        a.mt=a.t2;
    }
    return a;
}

Aluno media(Aluno nota){
    nota.media=(nota.mt+nota.mp)/2;
    return nota;
}
