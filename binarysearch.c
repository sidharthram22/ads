#include<stdio.h>
int main()
{
int i,n,key ,low ,high ,mid ,found =0;
printf("Enter the  Total number of Elements");
scanf("%d",&n);
int arr[n];
printf(" Enter %d elements in sorted order:\n",n);
for(i=0;i<n;i++) 
{
scanf("%d",&arr[1]);
}
printf("enter the number to be Searched");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==key)
{
printf("Element %d found at position %d\n",key,mid+1);
found=1 ;
break;
}
else if(arr[mid]<key)
{
low=mid+1;//search right half
}
else
{
high=mid-1;//search left half
}
}
if(found==0)
{
printf("element %d not found in array |n",key);
}
return 0;
}

