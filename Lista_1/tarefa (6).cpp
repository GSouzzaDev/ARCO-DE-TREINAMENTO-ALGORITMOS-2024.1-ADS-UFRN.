/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos.*/ 
#include <iostream>
using namespace std;

int main(){
  int segundos;
  float horas, minutos;
  
  cout << "Digite quantos segundos durou o show: ";
  cin >> segundos;
  
  horas=segundos/3600;
  minutos=segundos/60;
  segundos=segundos/(horas+minutos);
  
  cout << "Seu evento durou: " << horas <<" horas e " << minutos << " minutos e " << segundos << " segundos";
  
  return 0;
}

