#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int i;
void printarray(int stream[], int n) 
{ 
    for ( i = 0; i < n; i++) 
        printf("%d ", stream[i]); 
    printf("\n"); 
}  
void selectKItems(int stream[], int n, int k) 
{ 
    int reservoir[k]; 
    for (i = 0; i < k; i++) 
        reservoir[i] = stream[i]; 
    srand(time(NULL)); 
    for (; i < n; i++) 
    { 
        int j = rand() % (i+1); 
        if (j < k) 
          reservoir[j] = stream[i]; 
    } 
    printf("Following are k randomly selected items \n"); 
    printarray(reservoir, k); 
}  
int main() 
{ 
    int stream[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
    int n = sizeof(stream)/sizeof(stream[0]); 
    int k = 5; 
    selectKItems(stream, n, k); 
    return 0; 
} 
