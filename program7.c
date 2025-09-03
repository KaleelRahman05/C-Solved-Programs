#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {


    int n,a[100],sum=0;
    
    scanf("%d",&n);
    
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d\n",sum);
    return 0;
}
