#include <stdio.h>
int max_of_four(int a, int b, int c, int d){
    int big1,big2;
    if (a>b){
        big1=a;
    }
    else{
        big1=b;
    }
    if (c>d){
        big2=c;
    }
    else{
        big2=d;
    }
    if (big1>big2){
        return big1;
    }
    else{
        return big2;
    }
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
