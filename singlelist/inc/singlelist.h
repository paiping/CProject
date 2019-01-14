//带头节点的单链表实现
//增，删，改，查
//
//数据节点定义
typedef struct _node{
	int 		intdata;
	char 		chardata;
	int 		intarrdata[10];
	char 		chararrdata[10];	
	struct _node 	*next;
}Node;

//函数声明

void init_single_list(Node *list);
void insert(Node *list,Node *data,int i);
Node *locate(Node *list,int i);
void display(Node *list);
int Length(Node *list);
void clear(Node *list);
void query(Node *list,int i);
void del(Node *list,int i);
void Head(Node *list,Node *data);
void Tail(Node *list,Node *data);
