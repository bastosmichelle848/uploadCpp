# include <iostream>

using namespace std;


class carro{
	
	private:
	int ano;
	float valor,km;
		
	public:
		
	// get e set
	
	void setano(int a){
		ano =a;
	}
	
	int getano(){
		
		return ano;
		
	}
		
};

int main(){
	
	carro palio;
	palio.setano(1995);
	cout<<"Palio:\n";
	cout<<"Ano: "<<palio.getano()<<endl;

return 0;


}

