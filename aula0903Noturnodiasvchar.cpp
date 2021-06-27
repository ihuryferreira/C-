/*Escreva um programa em C++ para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela
 possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui
 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS*/
 #include <iostream>
 using namespace std;
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	char nome[256];
 	int idade, diasv;
 	
 	cout<<"Informe seu nome por favor "<<endl;
	cin.getline(nome,256); //recebe a char vetor com espaço;
 	
 	cout<<"Informe sua idade "<<endl;
 	cin>>idade;
 	
 	diasv = idade * 365;
 	
 	cout <<nome;
 	cout<<", você já viveu: ";
 	cout<<diasv<<" dias"<<endl;
  	
 }
 
