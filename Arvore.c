
#include "Arvore.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Arvore::Arvore()
{
    raiz = NULL;
}

void Arvore::insere1(No **pNo ,int x)
{
 if(pNo == NULL)
 {
  	(*pNo) = (No*) malloc (sizeof(No));
  	(*pNo)->valor = x;
    (*pNo)->esq = NULL;
    (*pNo)->dir = NULL;

 }else{
      if((*pNo)->valor > x)
      {
       insere1(&(*pNo)->esq,x);

      }else{
           if((*pNo)->valor < x)
           {
            insere1(&(*pNo)->dir,x);

           }else{
                if(1<2) /* Cond para elemento repedido*/
                {
                printf("Nome j\xa0 foi registrado\n");
                }
			}
		}
	}
}


void Arvore::insere(int x)
{
	insere1(&raiz,x);
}

void Arvore::imprime(void)
{
	
}

void Arvore::imprime(No** pNo)
{
    if(pNo!=NULL)
        {
            imprime(&(*pNo)->dir);
            imprime(&(*pNo)->esq);
            cout<<(*pNo)->valor<<endl;
        }else
			{
				cout<<"NULL";
			}
}

void Arvore::busca(int x)
{
	
}

void Arvore::busca(No** pNo,int x)
{
	if(((*pNo)->valor)==x)
	{	
		cout<<"Elemento encontrado!";
	}else
		{
		if(pNo==NULL)
    	{
       		cout<<"Elemento não encontrado!";
	    }else
    	    {
        	    if(((*pNo)->esq->valor)>x)
            	    {
                	    busca(&(*pNo)->esq,x);
                	}else
                    	{
                        	busca(&(*pNo)->dir,x);
                    	}
        	}
    	}
}
