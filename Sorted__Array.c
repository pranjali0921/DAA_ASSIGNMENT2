#include <stdio.h>

int main()
{
    int a1[10],a2[10],i,j,n,a,b;
    
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){

        printf("Enter a1[%d] and a2[%d] : ",i,i);
        scanf("%d%d",&a1[i],&a2[i]);
    }
    
    printf("Array:\n");
    for(i=0;i<n;i++){
        printf("[%d,%d]\n",a1[i],a2[i]);
    }
    printf("Enter choice:");
    scanf("%d",&a);
    switch(a){
    {
        case 1:
            printf("Sort on the basis of first element :\n");
            for (i = 0; i < n; i++) {
             for (j = i + 1; j < n; j++) {
               if (a1[i] > a1[j]) {
                b = a1[i];
                a1[i] = a1[j];
                a1[j] = b;
                
                b = a2[i];
                a2[i]= a2[j];
                a2[j]= b;
            }

         }
         
       }
       for (i = 0; i < n; ++i){
       printf("[%d,%d]\n",a1[i],a2[i]);
       }
       break;
    
    }
       case 2:
   
            printf("Sort on the basis of second element\n");
            for (i = 0; i < n; i++) {
             for (j = i + 1; j < n; j++) {
               if (a2[i] > a2[j]) {
                b = a1[i];
                a1[i] = a1[j];
                a1[j] = b;
                
                b = a2[i];
                a2[i]= a2[j];
                a2[j]= b;
                
            }
  
         }
         
       }
       for (i = 0; i < n; ++i){
       printf("[%d,%d]\n",a1[i],a2[i]);
       }
  
    }
}