#include <stdio.h>

int main() {
    int n,sum=0,count=0;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    float avg=(float)sum/n;

    for(int i=0;i<n;i++)
        if(a[i]>avg) count++;

    printf("%d",count);
    return 0;
}
