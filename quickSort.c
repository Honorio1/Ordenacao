#include <stdio.h>

int partition(int v[], int low, int high){
	int pivot = v[high], temp;
	int i = low-1, j;
	
	for(j=low;j<=high-1;j++){	
		if(v[j] <= pivot){
			i++;
			temp = v[i];
			v[i] = v[j];
			v[j] = temp;
		}
	}
	temp = v[i+1];
	v[i+1] = v[high];
	v[high] = temp;
	
	return i+1;
}

void quickSort(int v[], int low, int high){
	if(low < high){
		int pi = partition(v, low, high);
		quickSort(v, low, pi-1);
		quickSort(v, pi+1, high);
	}
}

int main(){
	int v[1000000], n, i;
	
	scanf("%d%*c", &n);
	
	for(i=0;i<n;i++){
		scanf("%d%*c", &v[i]);
	}
	
	quickSort(v, 0, n-1);
	
	for(i=0;i<n;i++){
		printf("%d ", v[i]);
	}
	
	return 0;
}
