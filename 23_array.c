#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n],closest;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    closest=a[0];

    for(int i=1;i<n;i++){
        if(abs(a[i])<abs(closest) ||
          (abs(a[i])==abs(closest) && a[i]>closest))
            closest=a[i];
    }

    printf("%d",closest);
    return 0;
}
