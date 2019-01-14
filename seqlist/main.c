#include "seqlist.h"
#include <stdlib.h>
void get_number(int *arr,int n);
int main(int argc,char **argv)
{
	Seqlist *list = (Seqlist *)malloc(sizeof(Seqlist));
	Seqlist *list1 = (Seqlist *)malloc(sizeof(Seqlist));
	init_seqlist(list);
	init_seqlist(list1);
	int array[15];
	get_number(array,15);
	create(list,array,15);
	display(list);
	insert(list,100,0);
	insert(list,200,1);
	display(list);

	insert(list,300,0);
	display(list);

	insert(list1,1000,0);
	display(list1);
	return 0;
}
void get_number(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		arr[i]=i+1;
	}	
}
