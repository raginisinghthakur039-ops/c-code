//maximum product subarray
#include <stdio.h>
int main(){
    int arr[5]={2,3,-2,4,-1};

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<5;i++){
        int prod=1;
        for(int j=i;j<5;j++){
            prod=prod*arr[j];
            if(prod>max){
                max=prod;
            }
        }
    }
    printf("%d",max);
    return 0;

}