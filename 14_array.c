#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n],min=0,found=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0 && (!found || a[i]<min)){
            min=a[i];
            found=1;
        }
    }

    if(found) printf("%d",min);
    else printf("No positive");

    return 0;
}
