/* Fa�a um programa em C++
para preencher um vetor e depois calcular a m�dia
de seus usu�rio quantos elementos ir� colocar
nesse vetor (o usu�rio pode informar menos do que 10),
preenchendo apenas essa quantidade.

Depois preencha um segundo  vetor com os
elementos do primeiro que s�o menores ou igual a m�dia. */

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
	cout<<"\nA media das notas �: "<<media<<endl;
	
	system("PAUSE");
	return 0;
}
