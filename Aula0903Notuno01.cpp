/*A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
 Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
 com a venda dos p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (10% do total 
 arrecadado). Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um 
 programa em C++ para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados.*/
 #include <iostream>
 using namespace std;
 int main(){
 	
 	setlocale(LC_ALL, "Portuguese");
 	
 	float qtpaes, qtbroas, totalpaes, totalbroas, totalarrecadado, ppoupanca;
 	
 	cout<<fixed;
 	cout.precision(2);
 	
 	cout<<"Informe a quantidade de p�es vendidos: "<<endl;
 	cin>>qtpaes;
 	
 	cout<<"Informe a quantidade de broas vendidas: "<<endl;
 	cin>>qtbroas;
 	
 	totalpaes = qtpaes * 0.12;
 	totalbroas = qtbroas * 1.5;
 	
 	totalarrecadado = totalpaes+totalbroas;
 	
 	ppoupanca = totalarrecadado *0.1;
 	
 	cout<<"O valor de p�es vendidos �: R$ "<<totalpaes<<endl;
 	cout<<"O valor de broas vendidas �: R$ "<<totalbroas<<endl;
 	cout<<"O total arrecadado com p�es e broas �: R$ "<<totalarrecadado<<endl;
 	cout<<"O percentual para poupan�a �: R$ "<<ppoupanca<<endl;
 	
 	
 }
 
 
