#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubblesort(int array[],int n){
	for(int i=0;i<n-1;i++){
		for(int g=0;g<n-i-1;g++){
			if(array[g]>array[g+1]){
				int t =  array[g];
				array[g] = array[g+1];
				array[g+1] = t;
			}
		}
	}	
}

void bubblesort_min(int array[],int n){
	for(int m=0;m<n-1;m++){
		for(int j=0;j<n-m-1;j++){
			if(array[j]<array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int main(){
	int N;
	srand(time(NULL));
	int a[10];
	
	for(int q=0;q<10;q++){
		a[q] =(int)rand()%1000;
		printf("a[%d]:%d\n",q,a[q]);
	}

	printf("\n");
	
	bubblesort(a,10);
	
	printf("low to high:");
	
	for(int w=0;w<10;w++){
		printf("%d ",a[w]);
	}
	
	bubblesort_min(a,10);

	printf("\nhigh to low:");

	for(int h=0;h<10;h++){
		printf("%d ",a[h]);
	}
	
	
	return 0;
}
