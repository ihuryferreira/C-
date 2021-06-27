/*Construa um programa que leia um número, em seguida, verifique e escreva se é par ou ímpar.*/

 #include <iostream>
 using namespace std;
 
 int main(){
 
 setlocale(LC_ALL, "Portuguese");
 
 int num;
 
 cout<<"Digite um número: "<<endl;
 cin>>num;
 
 if(num%2 == 0){
 	cout<<"O número é Par"<<endl;
 	
 }
 else {
 	cout<<"O número é Impar"<<endl;
 }
 
 
}
