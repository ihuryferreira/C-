/*Crie um programa em c++ que informada pelo usuário um número mostre se ele é positivo ou negativo;*/

 #include <iostream>
 using namespace std;
 
 int main(){
 
 setlocale(LC_ALL, "Portuguese");

 float numero;
 
 cout<<fixed;
 cout.precision(1);
 
 cout<<"Informe um número: "<<endl;
 cin>>numero;
 
 if(numero > 0){
 	cout<<"O número é positivo";
 }
else{
 	cout<<"O número é negativo";
 		
 }
}
