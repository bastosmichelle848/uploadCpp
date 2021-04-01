// pilha = stack
typedef int TipoItem;
const int max_itens =100;

class pilha{
	private:
	
	int tamanho;
	int*estrutura;	
	TipoItem* estrutura;
	
	public:
		
    pilha(); // construtora // stack
    ~pilha(); //destrutora // ~satack
    bool estacheia(); // verifica se a pilha esta cheia
    bool estavazia(); // verifica se a pilha esta vazia
    void inserir(TipoItem item ); // push
    TipoItem remover(); // pop
    void imprimir(); //print
    int qualtamanho(); // lenght
    
};