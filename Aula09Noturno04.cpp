/*O restaurante a quilo Bem-B�o cobra R$12,00 por cada quilo de refei��o. Escreva um programa em C++ que
 leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que abalan�a 
 j� desconte o peso do prato.*/
 
 #include <iostream>
 using namespace std;
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	float pesoprato, valorpagar;
 	
 	cout<<fixed;
 	cout.precision(2);
 	
 	cout<<"Informe o peso do prato: "<<endl;
 	cin>>pesoprato;
 	
 	valorpagar = pesoprato * 12;
 	
 	cout<<"O valor a pagar �: R$ "<<valorpagar<<endl;
 		
 }
