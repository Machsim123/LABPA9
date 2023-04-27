#include "fct9.h"

int main()
{
	srand(time(NULL));
	int a[20][20], i;
	Node head[20];
	matrice_ad(&a);
	///afisare_matrice(a);
	///printf("\n");
	matrice_cost(&a);
	afisare_matrice(a);
	printf("\n");
	///am terminat 1.a)
	int ni=rand() %20;
	printf("%d",ni);
	printf("\n");
	modif_egon(ni,&a);
	afisare_matrice(a);
	printf("\n");
	///am terminat 1.b)
	for(i=0;i<20;i++)
	populare(i,head,0);
	for(i=0;i<20;i++)
	printf("%d ",head[i].val);
	return 0;
}
