typedef struct node
{
	char* pstr;
	struct node* next;
}node;
typedef struct Stack
{
	node* head;//始终指向栈内第一个节点
	node* last; // 当前元素的指针
	int size; // 栈中字符串的数量
}stack;
void initStack(stack* s);
void push(char* pstr, stack* s);
char* pop(stack* s);
int empty(struct Stack s);
char* top(struct Stack s);
void initStack(stack* s)
{
	s->head = (node*)malloc(Init_stack_size * sizeof(node));
	s->q = s->head;
	s->head->next = NULL;
	s->size = Init_stack_size;

}
void push(char* pstr, stack* s)
{
	int *p;
	node* p = s->q++;
	s->last->pstr = pstr;
	p->next = s->q;
}
char* pop(stack* s)
{
	char* r= s->q->pstr;
	s->q--;
	s->q->next = NULL;
	return r;
}
int empty(struct Stack s)
{
	int r= 0;
	if (s.head == s.q)
		r= 1;
	return r;
}
char* top(struct Stack s)
{
	char*r=s.last->pstr;
	return r;
}#endif
