#include <stdio.h>

int main() {
    int n,index=0;
    scanf("%d",&n);

    int a[n],b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
        if(a[i]!=0) b[index++]=a[i];

    while(index<n) b[index++]=0;

    for(int i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}
