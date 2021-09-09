/* Faça um programa em C++
para preencher um vetor e depois calcular a média
de seus usuário quantos elementos irá colocar
nesse vetor (o usuário pode informar menos do que 10),
preenchendo apenas essa quantidade.

Depois preencha um segundo  vetor com os
elementos do primeiro que são menores ou igual a média. */

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota[10];
	float media;
	
	
	for(int i = 0;i<=9;i++){			
		cout<<"Digite a "<<i<<" nota:"<<endl;
		cin>>nota[i];
	}
	media = (nota[1] + nota[2] + nota[3] + nota[4] + nota[5] + nota[6] + nota[7] + nota[8] + nota[9] + nota[10]) /10;
	cout<<"\nA media das notas é: "<<media<<endl;
	
	system("PAUSE");
	return 0;
}
