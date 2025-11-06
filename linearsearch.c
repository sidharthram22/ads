
#include<stdio.h>
int main()
{
int n,i,key,found=0;
printf("Enter no of Elements");
scanf("%d",&n);
int arr[n];
printf("Enter %d the Elements of Array ",n);
for(i=0;i<n;i++)
 {
scanf("%d",&arr[i]);
 }
printf("Enter the NUMBER for Search");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(arr[i]==key)
{
 printf("Element %d is fount at %d\n",key,i+1);
 found =1;
 break;
}
}
if(found==0)
{
printf("element %d not found  in array\n",key);
}
return 0;
}
