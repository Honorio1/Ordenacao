#include <stdio.h>

void selectionSort(int v[], int n){
	int i, j, min, temp;
	
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(v[j] < v[min]){
				min = j;
			}
		}
		temp = v[min];
		v[min] = v[i];
		v[i] = temp;
	}
}
	
int main(){
	int v[1000000], n, i;
		
	scanf("%d%*c", &n);
	
	for(i=0;i<n;i++){
		scanf("%d%*c", &v[i]);
	}
	
	selectionSort(v, n);
	
	for(i=0;i<n;i++){
		printf("%d ", v[i]);
	}
	
	return 0;
}
