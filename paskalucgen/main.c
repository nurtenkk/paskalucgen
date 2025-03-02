#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,b;
int main() {
printf("basamak sayýsý giriniz"); scanf("%d",&x);
int dizi[x];
for(int i = 1;i <= x;i++) {
if(i == 1) {
printf("%d\n",i);
a = i; b = i;
}
else {
if(a == 1 || b == 1) {
printf("%d\t%d\n",a,b);
dizi[i] = a + b;
}
printf("%d\t",a);
for(int m = i;m < i + 1;m++) {
printf("%d\t",dizi[m]);
}
printf("%d\n",b);
}
}


}

    return 0;
}
