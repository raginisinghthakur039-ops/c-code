//find the maximum and minimum element in an aaray
//1: maximum element
// #include <stdio.h>
// int main(){
//     int arr[5]={5,7,9,3,6};
//     int max=arr[0];
//     for(int i=0;i<4;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
     
//     }
//     printf("%d",max);
//     return 0;
// }
// output :  9



//2 : minimum element
#include <stdio.h>
int main(){
    int arr[5]={1,4,6,7,2};
    int min=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]<min){
            min=arr[i];
        }
     
    }
    printf("%d",min);
    return 0;

}
// output : 1