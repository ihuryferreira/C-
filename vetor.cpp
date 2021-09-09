#include <iostream>
#include <string>

int main()
{
	float nota1, nota2, nota3, nota4, nota5;
	float media;
	std::string nomeAluno;
	std::string resposta;
	
	setlocale(LC_ALL, "portuguese");
	std::cout<<"\nDigite o nome do aluno: ";
	std::cin>>nomeAluno;
	
	std::cout<<"\nDigite a primeira nota: ";
	std::cin>>nota1;
	
	std::cout<<"\nDigite a segunda nota: ";
	std::cin>>nota2;
	
	std::cout<<"\nDigite a terceira nota: ";
	std::cin>>nota3;
	
	std::cout<<"\nDigite a quarta nota: ";
	std::cin>>nota4;
	
	std::cout<<"\nDigite a quinta nota: ";
	std::cin>>nota5;
	
	media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
	
	if(media >= 6.0){
		resposta = "Aluno Aprovado !";
	}
	else{
		resposta = "Aluno Reprovado, Estude Mais...";
	}
	
	std::cout<<"A nota do aluno "<<nomeAluno<<" é: "<<media<<" ("<<resposta<<")\n";
	
	system("PAUSE");
	return 0;
}
