/* Find peak element in array
 * The array may have duplicate elements
 * Input
 * A={1,2,3,4,5}
 * Output=5
 * Input
 * A={5,17,100,11}
 * Output=100
 *                                            */

# include <stdio.h>
int peakV (int arr[],int size) {
	int peak=-1 ;
	int start=0 ;
	int end=size-1 ;

	while (start<=end) {
		int mid=(start+end)/2 ;

		if (start==end) {
			if (arr[start]>=peak)
				peak=arr[start] ;
		}

		if (arr[mid]>=arr[mid-1] && arr[mid+1]<=arr[mid]) {
			peak=arr[mid] ;
			start=mid+1 ;
		}

		if (arr[mid]<arr[mid+1])
			start=mid+1 ;

		if (arr[mid]<arr[mid-1] && arr[mid+1]<arr[mid-1])
			end=mid-1 ;
	}
	return peak ;
}
void main () {
        int size ;
        printf("Enter size of an array\n") ;
        scanf("%d",&size) ;

        int arr[size] ;
        printf("Enter elements in an array\n") ;
        for (int i=0 ; i<size ; i++) {
                scanf("%d",&arr[i]) ;
        }

        int ret=peakV(arr,size) ;
        printf("%d is peak value\n",ret) ;
}



