
// copy string to n number 


int printf(char[],...);		// char* == char[]
int puts(char[]);


char* mystrncpy(char* str2,char* str1,int n){

	int count = 0;

	while(n != 0 && *str1 != '\0'){
	
		*str2 = *str1;
		str2++;
		str1++;
		n--;
		count++;

	}
	printf("count = %d\n",count);
	*str2 = '\0';

	return str2;
}
void main(){

	char str1[] = "shubham";
	char str2[20];

	puts(str1);
	puts(str2);

	mystrncpy(str2 ,str1,5);

	puts(str1);
	puts(str2);

}
