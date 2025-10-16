#include<stdio.h>
int main(){
  int n,l,r,count=0;
  scanf("%d %d %d",&n,&l,&r);
  int a[n],b[n];
  for(int i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
    if(a[i]<=l && b[i]>=r){
    	count++;
    }
  }
  printf("%d",count);
}