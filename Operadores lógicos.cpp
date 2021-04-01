#include <iostream>

using namespace std;

int main(){
	float nota1,nota2;
	cout<<"Informe a nota 1\n";
	cin>>nota1;
	cout<<"Informe a nota 2\n";
	cin>>nota2;
	float media= (nota1+nota2)/2;
	
	cout<<"Media= "<<media<<endl;
	//if(media>=5){
		//cout<<"Aluno Aprovado\n";
	//}else{
		//cout<<"Aluno reprovado\n";
	//}
	
	//Operadores logicos : E:&&, OU: || , Não:!;
	
	float freq;
	cout<< "Qual e a frequencia do aluno?\n";
	cin>> freq;
	
	if (media>=5 && freq >= 75){
		cout<<"Aluno Aprovado!\n";
	}else{
		cout<< "Aluno Reprovado!\n";
		
	}
	
	return 0;
}