//trapping rain water
#include <stdio.h>
int main(){
    int leftMax[5];
    int height[5]={2,3,0,5,3};
    int rightMax[6];
    int water=0;
    leftMax[0]=height[0];
    for(int i=1;i<5;i++){
        if(height[i]>leftMax[i-1]){
            leftMax[i]=height[i];
        }else{
            leftMax[i]=leftMax[i-1];
        }
    }
    rightMax[4]=height[4];
    for(int i=3;i>=0;i--){
        if(height[i]>rightMax[i+1]){
            rightMax[i]=height[i];
        }else{
            rightMax[i]=rightMax[i+1];
        }
    }
    for(int i=0;i<5;i++){
        int minHeight;
        if(leftMax[i]<rightMax[i]){
            minHeight=leftMax[i];
        }else
        {
            minHeight=rightMax[i];
        }
        water=water+(minHeight-height[i]);
    }
    printf("%d",water);

}