

class No
{
	public:
		No();
        int valor;
        No *esq;
		No *dir;
	
};

class Arvore
{

    public:
        Arvore();
        void imprime(void);
        void insere(int);
        void busca(int);
        No *raiz;
    
	private:
		void imprime(No*);
    	void insere(No*,int);
    	void busca(No*,int);
        int cont;
        

};

