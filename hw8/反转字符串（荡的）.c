#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1024
 
void reverse(char* str){
	assert(str);
	int ilen = strlen(str);
	char* p = str + ilen - 1;
	int itemp = 0;
	while(str < p){
		itemp = *p;
		*p = *str;
		*str = itemp;
		p--;
		str++;
	}
}
//�ݹ�ʵ��
void reverse_string(char *str, int len){	
	assert(str);	
	if (*str == '\0'){		
		return;	
	}	
	reverse_string(str + 1, len - 1);	
	printf("%c", *str);
}
 
//������ �ݹ飬����ѭ����ջ��ÿ�����󿽱�һ���ַ�
void revers(char* in, char* out) {
	if (in == NULL || out == NULL ) {
		return;
	}
	if (*in == '\0') {
		return;			
	}
	revers(in+1, out);
	strncat(out, in, 1);
	return;
}
 
int main(){
	char str[MAX_SIZE];
	printf(" �������ַ���:\n");
	gets(str);
	reverse(str);
	prntf(" ��ת����ַ���:\n");
}
