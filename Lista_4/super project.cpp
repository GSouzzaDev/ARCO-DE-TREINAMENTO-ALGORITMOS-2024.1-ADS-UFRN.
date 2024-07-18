#include <iostream>
using namespace std;

int main(){
	
	char login[5];
	int senha, cont, opcao;
	float saldo = 1000, dep, sac,sair=0;

	for(cont=2; cont>=0; cont--){

	cout << "Digie o login: ";
	cin >> (login);
	
	cout << "Digite a senha: ";
	cin >> senha;
	
		if(login[0] == 'a' && login[1] == 'd' && login[2] == 'm' && login[3] == 'i' && login[4] == 'n' && login[5] == '\0' && senha==1234){
			cout << "\n\nProseguindo para a conta...\n\n";
			break;
		}else{
			cout <<"\nLogin ou senha incorretas!\n";
			cout << "Tentativas restantes: " << cont << "\n\t";
		}
	}
	

	
	do{
		system("pause");
		system("cls");
		
		cout << "\n\n\tMENU PRINCIPAL";
		cout << "\n\n\t-----------------";
		cout << "\n\n\t1-SALDO";
		cout << "\n\n\t2-DEPOSITO";
		cout << "\n\n\t3-SAQUE";
		cout << "\n\n\t4-MAIOR SAQUE";
		cout << "\n\n\t5-SAIR";
		cout << "\n\n\t----------------";
		cout << "\n\n\tEscolha a opção desejada: ";
		cin >> opcao;
		switch(opcao){
			case 1:
				cout << "\n\n\tSaldo na conta: " << saldo << "\n\n\t";
			break;
			
			case 2:
				cout << "\n\n\tDigite o quanto deseja depositar: " << "\n\n\t";
				cin >> dep;
				if(dep>0){
				saldo=saldo+dep;
				cout << "\nDeposito realizado com sucesso" << "\n\n\t";
			}else{
				cout << "\nValor invalido" << "\n\n\t";
			}
			break;
			
			case 3: 
				cout << "\n\n\tDigite o quanto deseja sacar: " << "\n\n\t";
				cin >> sac;
				
				if(sac>0 && sac<=saldo){
				saldo=saldo-sac;
				cout << "\nSaque realizado com sucesso" << "\n\n\t";
				}else if(sac<0){
					cout << "Saque invalido" << "\n\n\t";
				}else if(sac>saldo){
					cout << "Saldo indisponivel" << "\n\n\t";
				}
			break;
			
			case 4:
				cout<< "/nOpcao indisponivel no momento... ";
			break;
			
			case 5:
				cout << "\n\n\tSaindo...\n";
				 sair=6;
			break;
		}
		
	}while(sair<5);
}


