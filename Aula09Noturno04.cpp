/*O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um programa em C++ que
 leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que abalança 
 já desconte o peso do prato.*/
 
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
 	
 	cout<<"O valor a pagar é: R$ "<<valorpagar<<endl;
 		
 }
