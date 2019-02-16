#include <stdio.h>

void insertionSort(int v[], int n){
	int i, j, key;
	
	for(i=0;i<n;i++){
		key = v[i];
		j = i-1;
		while(j>=0 && v[j] > key){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key;
	}
}

int main(){
	int v[1000000], n, i;
	
	scanf("%d%*c", &n);
	
	for(i=0;i<n;i++){
		scanf("%d%*c", &v[i]);
	}
	
	insertionSort(v, n);
	
	for(i=0;i<n;i++){
		printf("%d ", v[i]);
	}
	
	return 0;
}
