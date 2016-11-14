#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    int q; 
    scanf("%d %d %d",&n,&k,&q);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for(int a0 = 0; a0 < q; a0++){
        int m; 
        scanf("%d",&m);
    }
    int son=5;
    
    printf("%d",a[0]);
    
  for (int b=k;a>0;b--){
      for(int x= 0; x < n-1; x++){
          a[x]=a[x+1]; }
      a[0]=son;}
    printf("%d",a[0]);
    
    return 0;
}

