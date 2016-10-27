#include "Arvore.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Arvore::Arvore()
{
    this->raiz = NULL;
}

void Arvore::insere(int x)
{
	insere(raiz,x);
}

void Arvore::insere(No *pNo ,int x)
{
 if(pNo == NULL)
 {
  	pNo->valor = x;
    pNo->esq = NULL;
    pNo->dir = NULL;

 }else{
 		if(pNo->valor == x)
		 	{
 			cout<<"Valor repetido";
 			}else
			 	{
    	  		if(pNo->valor > x)
      			{
       				insere(pNo->esq,x);
      			}else
				  	{
        		   	if(pNo->valor < x)
           			{
            		insere(pNo->dir,x);
					}
           		}
			}
		}
	}
	
void Arvore::imprime(No* pNo)
{
    if(pNo!=NULL)
    {
        imprime(pNo->dir);
        imprime(pNo->esq);
        cout<<pNo->valor<<endl;
    }else
		{
			cout<<"NULL";
		}
}

void Arvore::busca(int x)
{
	
}

void Arvore::busca(No* pNo,int x)
{
	if((pNo->valor)==x)
	{	
		cout<<"Elemento encontrado!";
	}else
		{
            if((pNo->esq->valor)>x)
           	{
               	busca(pNo->esq,x);
            }else
				{
                    busca(pNo->dir,x);
                }
        	
    	}
}   

