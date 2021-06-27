/*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
 Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
 com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total 
 arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um 
 programa em C++ para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.*/
 #include <iostream>
 using namespace std;
 int main(){
 	
 	setlocale(LC_ALL, "Portuguese");
 	
 	float qtpaes, qtbroas, totalpaes, totalbroas, totalarrecadado, ppoupanca;
 	
 	cout<<fixed;
 	cout.precision(2);
 	
 	cout<<"Informe a quantidade de pães vendidos: "<<endl;
 	cin>>qtpaes;
 	
 	cout<<"Informe a quantidade de broas vendidas: "<<endl;
 	cin>>qtbroas;
 	
 	totalpaes = qtpaes * 0.12;
 	totalbroas = qtbroas * 1.5;
 	
 	totalarrecadado = totalpaes+totalbroas;
 	
 	ppoupanca = totalarrecadado *0.1;
 	
 	cout<<"O valor de pães vendidos é: R$ "<<totalpaes<<endl;
 	cout<<"O valor de broas vendidas é: R$ "<<totalbroas<<endl;
 	cout<<"O total arrecadado com pães e broas é: R$ "<<totalarrecadado<<endl;
 	cout<<"O percentual para poupança é: R$ "<<ppoupanca<<endl;
 	
 	
 }
 
 
