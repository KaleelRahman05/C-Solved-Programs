#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int l=0, r=num-1;
    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }

    if(num==sizeof(arr)){
        
    }
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
