
//count the number of occurrences of an element 
#include <stdio.h>
int main(){
    int arr[7]={1,2,3,2,4,2,5};
    int element=2;
    int count=0;
    for(int i=0;i<7;i++){
        if(arr[i]==element){
            count++;
        }
    }
    printf("The element %d occurs %d times in the array.\n",element,count);
    return 0;
}
    
