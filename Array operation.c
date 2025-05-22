#include <stdio.h>
int main() {
     int n,m,num=123,a[12],i,j;
     printf("1.Insert....\n");
     printf("2.Update....\n");
     printf("3.Delete.....\n");
     printf("4.Display....\n");
     printf("5.Sort.....\n");
     printf("6.Linear Search...\n");
     printf("\n");
    while(num>0){
    printf("Which operation you want to do :");
    scanf("%d",&n);
    printf("\n");
    switch(n){
     case 1:{
        printf("How many numbers you want to insert:");
        scanf("%d",&m);
        for(i=0;i<m;i++){
          scanf("%d",&a[i]);
        }for(i=0;i<m;i++){
         printf("%d ",a[i]);
         }
         printf("\n");
         break;
     }
    case 2:{
       int x,i;
       printf("Enter the value and index where you want to update:");
       scanf("%d %d",&x,&i);
       a[i]=x;
       for(i=0;i<m;i++){
           printf("%d ",a[i]);
       }printf("\n");
        break;
    }
    case 3:{
       int x,b;
       printf("Enter which index and value you want to delete :");
       scanf("%d %d",&x,&b);
       for(i=x;i<=m;i++){
        a[i]=a[i+1];
       }
       m--;
       for(i=0;i<m;i++){
         printf("%d ",a[i]);
       }printf("\n");
       break;
    }
    case 4:{
        printf("Display all elements :");
        for(i=0;i<m;i++){
          printf("%d ",a[i]);
        }printf("\n");
    }printf("\n");
         break;
    case 5:{
      int d,temp;
      printf("Asecnding or descending\n");
      printf("Press 1 for Ascending and press 2 for descending :");
      scanf("%d",&d);
      if(d==1){
        printf("Ascending :");
        for(i=0;i<m;i++){
         for(j=i+1;j<m;j++){
          if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
        }
      }if(d==2){
        printf("Descending :");
        for(i=0;i<m;i++){
          for(j=i+1;j<m;j++){
          if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
        }
      }for(i=0;i<m;i++){
          printf("%d ",a[i]);
    }
    }printf("\n");
    break;
    case 6:{
        int k,l=0,h;
        printf("Enter the value you are searching :");
        scanf("%d",&k);
        for(i=0;i<m;i++){
          if(a[i]==k){
            l=1;
            h=i;
        }
        }
        if(l==0)
            printf("Value not found");
        else
            printf("Value found at index %d.\n",h);
            printf("\n");
        break;
    }
    }
    printf("If you want to continue press 1 or press 0 :");
    scanf("%d",&num);
    printf("\n");
    }
return 0;
}
