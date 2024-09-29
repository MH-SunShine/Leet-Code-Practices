#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4};
    int result_array[4];
    result_array[0] = arr[0];
    printf("{");
    for ( int i = 0; i <= 3; i++)
    {
        
       result_array[i+1] = result_array[i] + arr[i+1];
       
       printf(" %d ",result_array[i]);
       
    }
    printf("}");
}
    
    



