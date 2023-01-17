#include<stdio.h>
int max(int arr[100], int size){
    int max =arr[0];
    int val =0;
    for (int i=1; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
            val=i;
        }

    }
    return val;
}
int main(){
   int size1, size2;
   int arr[100];
   
    int val =1;
    scanf("%d",&size1);
    scanf("%d",&size2);
    for(int i=0; i<size1*size2; i++){
        scanf("%d",&arr[i]);

    }
    int max =arr[0];
        for (int i=1; i<size1*size2; i++){
        if(arr[i]>max){
            max=arr[i];
            val=i+1;
        }

    }
    printf("%d", val);
    

}