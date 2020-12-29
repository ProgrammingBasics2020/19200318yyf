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
//递归实现
void reverse_string(char *str, int len){	
	assert(str);	
	if (*str == '\0'){		
		return;	
	}	
	reverse_string(str + 1, len - 1);	
	printf("%c", *str);
}
 
//方法二 递归，参数循环入栈，每次往后拷贝一个字符
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
	printf(" 请输入字符串:\n");
	gets(str);
	reverse(str);
	prntf(" 反转后的字符串:\n");
}
