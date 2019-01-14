#include "singlelist.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc,char **argv)
{
	Node *list=(Node *)malloc(sizeof(Node));
	init_single_list(list);
	Node *p=locate(list,0);
	Node *new_node=(Node *)malloc(sizeof(Node));
	new_node->intdata = 100;
	insert(list,new_node,1);

	display(list);
//	int i=Length(list);
//	printf("i:%d\n",i);
//	del(list,1);
//	display(list);
	Node *new_node1 = (Node *)malloc(sizeof(Node));
	new_node1->intdata = 4000;
//	insert(list,new_node1,2);
//	Head(list,new_node1);
	Tail(list,new_node1);

	display(list);	
	return 0;
}
