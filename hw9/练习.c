#include<stdio.h>
void push(int , struct node*);
int empty(struct node );
int* pop(struct node*);
struct node                 
{
	int data;
	struct node* next;
};
struct help                 
{
	int data;
	struct help* next;
};
struct s                    
{
	int data;
};
int main()
{
	int a, n = 0, i, b;
	struct node* head;  
	struct node* pr;    
	struct node* pp;    
	struct node* p = (struct node*)malloc(sizeof(struct node));
	struct help* phead = (struct help*)malloc(sizeof(struct help));
	phead->data = NULL;
	struct s* pin;          
	struct node* top;   
	scanf_s("%d", &a);
	p->data = a;
	p->next = NULL;
	head = p;
	pr = p;
	pp = head;
	while (n < 6) {
		p = (struct node*)malloc(sizeof(struct node));
		scanf_s("%d", &i);
		p->data = i;
		p->next = NULL;
		pr->next = p;
		pr = p;
		n++;
	}                    
	top = head;

	while (pp != NULL) {
		printf("%d\n", pp->data);
		pp = pp->next;
	}

	return 0;
}
