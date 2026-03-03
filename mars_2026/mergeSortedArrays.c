#include<stdio.h>

/*
A: [1, 2, 3, 4, 4]
B: [2, 4, 5, 5]
C: [1, 2, 2, 3, 4, 4, 4, 5, 5]

const A = [1,2,3,3,4];
const B = [1,2,2,3,3,4];
const C=[];
for(let i=0;i<A.length;i++){
	C[i]=A[i];

}

for(let j=0;j<B.length;j++){
	C[A.length+j]=B[j];
}

for(let k=0;k<C.length;k++){
	console.log(C[k]);
}
*/
// Make sure to use malloc to create the returned array
/*
int* mergeSortedArrays(int* A, int* B, int sizeA, int sizeB) {
    for(int i=0;i<sizeA;i++){
    	C[i]=A[i];
    }
    for(int j=0; j<sizeB;j++){
    	C[sizeA+j]=B[j];
    }

}*/
void merge_sort(int a[], int length);
void merge_sort_recursion(int a[],int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);

int main(){

	int array[]={1,2,1,2,5,6,7,8,9,4};
	int length=10;

	merge_sort(array,length);

	for(int i=0; i<length;i++)
		printf("%d", array[i]);
	printf("\n");


	return 0;
}

void merge_sort(int a[], int length)
{
	merge_sort_recursion(a,0,length-1);
}

void merge_sort_recursion(int a[], int l, int r)
{
	if(l<r)
	{
		int m= l+(r-l)/2;

		merge_sort_recursion(a,l,m);
		merge_sort_recursion(a,m+1,r);
		merge_sorted_arrays(a,l,m,r);
	}
}

void merge_sorted_arrays(int a[], int l, int m, int r)
{
	int left_length=m-l+1;
	int right_length=r-m;

	int temp_left[left_length];
	int temp_right[right_length];

	int i,j,k;

	for(int i=0; i<left_length;i++)
		temp_left[i]=a[l+i];

	for(int i=0; i<right_length;i++)
		temp_right[i]=a[m+1+i];

	for(i=0,j=0,k=l; k<=r; k++)
	{
		if((i<left_length) &&
			(j>=right_length) || temp_left[i] <= temp_right[j])
		{
			a[k]=temp_left[i];
			i++;
		}
		else
		{
			a[k]=temp_right[j];
			j++;
		}
	}
}