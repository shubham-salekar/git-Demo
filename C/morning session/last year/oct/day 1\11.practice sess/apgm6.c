# include <stdio.h>
void main () {
	int x ;
	printf("Enter number of rows\n") ;
	scanf("%d",&x) ;

	char ch='A' ;

	for (int i=1 ; i<=x ; i++) {
		if (i%2==1) {
			ch=ch+x+i-2 ;
		}
		else {
			ch=ch+31+(i/2) ;
		}

		for (int j=1 ; j<=x ; j++) {
			if (i%2==1) {
				if ((i+j)%2==0) {
					printf("%c ",ch) ;
					ch=ch+31 ;
				}
				else {
					printf("%c ",ch) ;
					ch=ch-33 ;
				}
			}
			else {
				if ((i+j)%2==1) {
					printf("%c ",ch) ;
					ch=ch-31 ;
				}
				else {
					printf("%c ",ch) ;
					ch=ch+33 ;
				}
			}
		}
		ch='A' ;
		printf("\n") ;
	}
}
