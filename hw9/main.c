#include<stdio.h>
#include<string.h>
#include"stack.h"
/*#ifndef _STACK_H_
#define _STACK_H_
#define Init_stack_size 5
typedef struct node
{
	char* pstr;
	struct node* next;
}node;
typedef struct Stack
{
	node* head;//始终指向栈内第一个节点
	node* q; // 当前元素的指针
	int size; // 栈中字符串的数量
}stack;
void initStack(stack* s);
{s->head=(node*)malloc(Init_stack_size * sizeof(node));
	s->q=s->head;
	s->head->next=NULL;
	s->size = Init_stack_size;}
void push(char*pstr,stack*s);
{int *p;
    node*p=s->q++;
	s->q->pstr=pstr;
	p->next=s->q;}
char* pop(stack*s);
{char* r=s->q->pstr;
	s->q--;
	s->q->next=NULL;
	return r;}
int empty(struct Stack s);
{int r = 0;
	if (s.head==s.q)
		r= 1;
	return r;}
char* top(struct Stack s);
{char* r = s.last->pstr;
	return r;}
	#endif
*/
int main()
{   stack x, y;
	char* t;
	initStack(&y); initStack(&x);
	char* a = "abcs";
	char* b = "sdfsdg";
	char* c = "ss";
	char* d = "sdfdsgdfhgd";
	char* e = "sdgfsdfd";
	push(a,&x);
	push(b,&x);
	push(c,&x);
	push(d,&x);
	push(e,&x);
	while (empty(x)!=1) 
	{
		t = pop(&x);
		while (t!=NULL)
		{
			if (strlen(t)>=strlen(top(y))||empty(y)==1)
			{
				push(t,&y);
				t = NULL;
			}
			else
				push(pop(&y), &x);
		}
	}
	x=y;
	while (empty(y)!= 1)
		printf("%s\n",pop(&y));
	return 0;
}


