#include <stdio.h>
#include <string.h>

int mylen (const char *s);
int main()
{
	//×Ö·û´®º¯Êı½éÉÜºÍ¼òÎö
	
	
	//strlenÊµÏÖ 
	char line[] = "hello";
//	printf("strlen=%lu\n", strlen(line));
//	printf("sizeof=%lu\n", sizeof(line)); 

	printf("strlen=%lu\n", mylen(line));
	return 0;
}

int mylen(const char *s)
{
	int idx = 0;
	while (s[idx] != '\0') {
		idx++;
	} 
	return idx; 
} 




