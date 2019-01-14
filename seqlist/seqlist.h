//顺序表
#define maxSize 100

typedef struct _node{
	int 		*data;
	int 		n;
	int 		maxsize;
}Seqlist;

void init_seqlist(Seqlist *L);
void clear(Seqlist *L);
int Length(Seqlist *L);
int isfull(Seqlist *L);
int isempty(Seqlist *L);
void create(Seqlist *L,int *arr,int n);
int search(Seqlist *L,int data);
int locate(Seqlist *L,int i);
void insert(Seqlist *L,int data,int i);
void del(Seqlist *L,int i);
void display(Seqlist *L);
