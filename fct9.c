#include "fct9.h"

void matrice_ad(int v[20][20])
{
	int i,j,nr=0;
	for(i=0;i<20;i++)
	   for(j=0;j<20;j++)
	      {
		  if(i<j && nr<190) 
		     {v[i][j]=rand() % 2; v[j][i]=v[i][j]; nr++;}
		  else if(i==j) v[i][j]=0;}
		
}

void matrice_cost(int v[20][20])
{
	int i,j,nr=0;
	for(i=0;i<20;i++)
	   for(j=0;j<20;j++)
	      if(i<j && v[i][j]!=0) 
		     v[i][j]=v[j][i]=10;
}

void afisare_matrice(int v[20][20])
{
	int i,j;
	for(i=0;i<20;i++)
	   {for(j=0;j<20;j++)
	      printf("%2d ",v[i][j]);
	    printf("\n");
	   }
}

void modif_egon(int ii, int v[20][20])
{
	int i, j;
	for(i=0;i<20;i++)
	{
		if(v[ii][i]!=0) 
		{
		{v[ii][i]=20; v[i][ii]=v[ii][i];}
		 for(j=0;j<20;j++)
		   {
		   if(v[i][j]==10)
		   {v[i][j]+=10-((30*10)/100); v[j][i]=v[i][j];}
		   }
        }
    }
}

void addAtBeginning(Node **head, int v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, int v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node)); 
	newNode->val=v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{  
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;  
		newNode->next = NULL; 
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}

void populare(int index, Node *v, int val)
{
	Node *nod=&(v[index]), *nod_nou;
        nod->val=val;
      while(nod->next!=NULL)
          {nod=nod->next;}
         nod_nou=(Node*)calloc(1,sizeof(Node));
         nod->next=nod_nou;
         nod_nou->val=val;
      
    
}

