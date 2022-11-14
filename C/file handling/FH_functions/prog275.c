
// ftell();
// rewind(*)

#include<stdio.h>

void main(){

	FILE *fp = fopen("info.txt","w");
	printf("%ld\n",ftell(fp));

	fprintf(fp,"hello");
	printf("%ld\n",ftell(fp));

	fprintf(fp,"s2rs");
	printf("%ld\n",ftell(fp));

	rewind(fp   );
	fprintf(fp,"s2rs-2");
}
