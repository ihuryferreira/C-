/*Crie um programa em c++ que informada pelo usu�rio um n�mero mostre se ele � positivo ou negativo;*/

 #include <iostream>
 using namespace std;
 
 int main(){
 
 setlocale(LC_ALL, "Portuguese");

 float numero;
 
 cout<<fixed;
 cout.precision(1);
 
 cout<<"Informe um n�mero: "<<endl;
 cin>>numero;
 
 if(numero > 0){
 	cout<<"O n�mero � positivo";
 }
else{
 	cout<<"O n�mero � negativo";
 		
 }
}
