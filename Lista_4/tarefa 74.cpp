/*Elabore um algoritimo que leia um vetor A de 20 números inteiros e obter a maior diferença entre dois
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos
elementos*/

#include <iostream>
#include <cstdlib>
 
 using namespace std;
 
 int main(){
     int num[20], dif=0, maiordif=0, i, primeiro=0, ultimo=0;
     
     for(i=0; i<20; i++){
         cout << "\nDigite um numero, 20 vezes: " << endl;
         cin >> num[i];
         
         system("cls");
         
     }
     
     cout<<"\nCALCULADO:\n\t\t";
     
         for(i=0; i<20; i++){
         	dif=num[i+1]-num[i];
         	
         	cout<< "\n\tDiferenca entre " << num[i] << " e " << num[i+1] <<  " : " << dif;
         	
         	if(dif>maiordif){
         		maiordif=dif;
         		primeiro=i;
         		ultimo=i+1;
			 }
		 }
    
     
     cout<<"\n\n\tA maior diferenca entre os numeros foi: " << maiordif;
     cout<<"\n\n\tOs indices foram: " << primeiro << " e " << ultimo;
}
