/*Construa um programa que leia dois n�meros diferentes, em seguida, verifique e escreva qual � o maior
 n�mero.*/ 
 #include <iostream>
 using namespace std;
 
 int main(){
 
 setlocale(LC_ALL, "Portuguese");
 
 float num1, num2;
 
 cout<<fixed;
 cout.precision(1);
 
 cout<<"Informe o primeiro n�mero: "<<endl;
 cin>>num1;
 
 cout<<"Informe o segundo n�mero: "<<endl;
 cin>>num2;
 
 if(num1 > num2){
 	cout<<"O primeiro n�mero � o maior "<<endl;
  }
 else{
 	cout<<"O segundo n�mero � o maior "<<endl;
 	
 }
 
 }
