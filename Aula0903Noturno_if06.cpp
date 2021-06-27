/*Construa um programa que leia a idade de três pessoas, determine e escreva a idade do mais velho.*/
 #include <iostream>
 using namespace std;
 
 int main(){
 
 setlocale(LC_ALL, "Portuguese");
	int id1, id2, id3;
	
	cout<<"Informe a primeira idade: "<<endl;
	cin>>id1;
	
	cout<<"Informe a segunda idade: "<<endl;
	cin>>id2;
	
	cout<<"Informe a terceira idade: "<<endl;
	cin>>id3;
	
	
	if(id1 > id2 && id1 > id3){
		cout<<" O mais velho tem: "<<id1<<" anos";		
	}
	else if(id2>id1 && id2>id3){
		cout<<"O mais velho tem: "<<id2<<" anos";
	}
	else {
		cout<<"O mais velho tem: "<<id3<<" anos";
	}
}

