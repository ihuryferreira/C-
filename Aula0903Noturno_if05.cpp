/*Construa um programa que leia um n�mero, em seguida, verifique e escreva se � par ou �mpar.*/

 #include <iostream>
 using namespace std;
 
 int main(){
 
 setlocale(LC_ALL, "Portuguese");
 
 int num;
 
 cout<<"Digite um n�mero: "<<endl;
 cin>>num;
 
 if(num%2 == 0){
 	cout<<"O n�mero � Par"<<endl;
 	
 }
 else {
 	cout<<"O n�mero � Impar"<<endl;
 }
 
 
}
