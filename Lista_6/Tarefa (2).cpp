/*Elabore um algoritmo que crie una estrutura ToniamL:

Registro Tanimal:

nome: string

raca: string

Idade: int


-Declare un vetor (50 posticoes de tani a cadastre 8 animaian

-Verifique e escrevas o nome do animal mais vetho:

-Pergunte no usuario se deseja consultor as avinois cadastrades solicitando uma raça para a busca. 
Se ele quiser, Leia un race se existán animal da rape procurado, informe seus dadas (nome, idade);
*/
#include <iostream>
using namespace std;

struct Tanimal {
    string nome;
    string raca;
    int idade;
};

int main() {
    const int tamanho = 50;
    Tanimal animal[tamanho];
    string busca;
    string nomeVelho;
    int idadeVelho = -1;
    int u = 0;
    char continuar = 's';

    while ((continuar == 's' || continuar == 'S') && u < tamanho) {
        cout << "\n\t-Cadastro de animais";

        cout << "\n\tDigite o nome: ";
        getline(cin, animal[u].nome);

        cout << "\n\tDigite a raca: ";
        getline(cin, animal[u].raca);

        cout << "\n\tDigite a idade: ";
        cin >> animal[u].idade;

        if (animal[u].idade > idadeVelho) {
            idadeVelho = animal[u].idade;
            nomeVelho = animal[u].nome;
        }

        u++;

        cout << "\n\tDeseja continuar? (S-sim, N-nao) ";
        cin >> continuar;
        cin.ignore(); 
    }

    cout << "\nAnimal mais velho: " << nomeVelho << " com " << idadeVelho << " anos.";

    cout << "\n\nDeseja consultar algum animal? (S-sim, N-nao) ";
    cin >> continuar;
    cin.ignore(); 

    if (continuar == 's' || continuar == 'S') {
        cout << "\n\tDigite a raca do animal: ";
        getline(cin, busca);

        bool encontrado = false;

        for (int i = 0; i < u; i++) {
            if (busca == animal[i].raca) {
                cout << "\n\tDados do animal:\n";
                cout << "\n\tNome: " << animal[i].nome;
                cout << "\n\tRaca: " << animal[i].raca;
                cout << "\n\tIdade: " << animal[i].idade << endl;
                encontrado = true;
            }
        }

        if (!encontrado) {
            cout << "\nNenhum animal encontrado com a raça " << busca << ".";
        }
    }

    return 0;
}

