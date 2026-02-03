#include <stdio.h>

int main() {
    int n,count=0;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    for(int i=0;i<n;i++){
        int dup=0;
        for(int j=0;j<i;j++)
            if(a[i]==a[j]) dup=1;

        if(!dup) count++;
    }

    printf("%d",count);
    return 0;
}
