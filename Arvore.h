

class Arvore
{
    struct n{
        int valor;
        struct n *esq;
		struct n *dir;
    };
	
	typedef struct n No;

    public:
        Arvore();
        void imprime(void);
        void insere(int);
        
        void busca(int);
        
        No* raiz;
    
	private:
		void imprime(No**);
    	void insere1(No **,int);
    	void busca(No**,int);
        int cont;
        

};

