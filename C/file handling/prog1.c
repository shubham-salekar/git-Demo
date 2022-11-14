#include<stdio.h>
void main(){

	unsigned short _cur_column;
	signed char _vtable_offset;
	char _shortbuf[1];

	printf("%ld\n",sizeof(_cur_column));
	printf("%ld\n",sizeof(_vtable_offset));
	printf("%ld\n",sizeof(_shortbuf[1]));

	char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

	printf("%ld\n",sizeof(_unused2));

	
	printf("%ld\n",sizeof(__offset));

	printf("%ld\n",sizeof(struct _IO_FILE));
 	
	
}
