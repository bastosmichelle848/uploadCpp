 #include <iostream>
 #include "pilha.h"
 
 using namespace std;
 
 
 
    pilha::pilha(); // construtora // stack
    {
	     tamanho=0;
	     estrutura=new TipoItem[Max_itens];
	
	}
 
    pilha::~pilha(); //destrutora // ~satack
    {
    	delete[] estrutura;
	}
    
    bool pilha::estacheia() // verifica se a pilha esta cheia
    {
    	return(tamanho==max_itens);
	
	}
    
    bool pilha::estavazia() // verifica se a pilha esta vazia
    {
	 return(tamanho==0);
	}
    
    void pilha::inserir(TipoItem item ); // push
    {
	   if(estacheia()){
	   	
	   	cout<<"A pilha está cheia!"
	   }
	}
    TipoItem pilha::remover(); // pop
    {}
    
    void pilha::imprimir(); //print
    {}
    
    int pilha::qualtamanho(); // lenght
    {}