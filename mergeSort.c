#include <stdio.h>

void merge(int v[], int inicio, int meio, int fim) 
{ 
    int i, j, k; 
    int n1 = meio - inicio + 1; 
    int n2 =  fim - meio; 
 
    int L[n1], R[n2]; 
  
    
    for (i = 0; i < n1; i++) 
        L[i] = v[inicio + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = v[meio + 1+ j]; 
  
   
    i = 0; 
    j = 0; 
    k = inicio;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            v[k] = L[i]; 
            i++; 
        } 
        else
        { 
            v[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  

    while (i < n1) 
    { 
        v[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        v[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(int v[], int inicio, int fim) 
{ 
    if (inicio < fim) 
    { 
        // Same as (inicio+fim)/2, but avoids overflow for 
        // large inicio and h 
        int meio = inicio+(fim-inicio)/2; 
  
        // Sort first and second halves 
        mergeSort(v, inicio, meio); 
        mergeSort(v, meio+1, fim); 
  
        merge(v, inicio, meio, fim); 
    } 
} 


int main() 
{ 
    int v[] = {12, 11, 13, 5, 6, 7}, i; 
    int v_size = sizeof(v)/sizeof(v[0]); 
  
    printf("Given array is \n"); 
	for(i=0;i<v_size;i++){
		printf("%d ", v[i]);
	}
  
    mergeSort(v, 0, v_size - 1); 
  
    printf("\nSorted array is \n"); 
for(i=0;i<v_size;i++){
		printf("%d ", v[i]);
	}
    return 0; 
} 


