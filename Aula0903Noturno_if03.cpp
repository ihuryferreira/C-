/*Construa um programa que leia dois números diferentes, em seguida, verifique e escreva qual é o maior
 número.*/ 
 #include <iostream>
 using namespace std;
 
 int main(){
 
 setlocale(LC_ALL, "Portuguese");
 
 float num1, num2;
 
 cout<<fixed;
 cout.precision(1);
 
 cout<<"Informe o primeiro número: "<<endl;
 cin>>num1;
 
 cout<<"Informe o segundo número: "<<endl;
 cin>>num2;
 
 if(num1 > num2){
 	cout<<"O primeiro número é o maior "<<endl;
  }
 else{
 	cout<<"O segundo número é o maior "<<endl;
 	
 }
 
 }
