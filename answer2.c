#include<stdio.h>
#include<stdlib.h>
void swap(char *x,char *y){
char t=*x;
*x=*y;
*y=t;
}
int sort(char a[],int n){
int i,j,m;
int k=0;
for(i=0;i<n-1;i++){
    m=i;
    for(j=i;j<n;j++)
        if(a[i]>a[j])
            m=j;
            if(i!=m){
                swap(&a[i],&a[m]);
                k++;
            }
            }
            return k;
}
int main(void){
int i,n;
scanf("%c\n",&n);
char a[n];
for(i=0;i<n;i++){
 scanf("%c\n",&a[i]);
}
printf("%s\n",a);
int r=sort(a,n);
printf("%d ",r);
}

