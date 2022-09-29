#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
int n,i,sum,ind,flag,k,sred;
sum=0;
sred=0;
flag=0;
srand(time(NULL)); 
printf("Enter amount of elements\n");
scanf("%d",&n);
int arr[n];
for (i=0; i<n; i++){
arr[i] = rand() % 41 - 20;
printf("%d   ",arr[i]);}
for (i=0; i<n; i++){
sred=sred+arr[i];}
k=sred/n;
printf("\n");
for (i=0; i<n; i++){
if (arr[i]>k)  flag++;}
printf("The number of elements greater than the average value of the array elements:  %d\n",flag);
for (i=0; i<n; i++){
if (arr[i]<0)  {ind=i; break;}
else ind=-555;}
if (ind==-555) printf("There are no negative numbers i array\n");
else { i=ind+1;
for (i; i<n; i++ ){
sum=sum+abs(arr[i]);}}
printf("The sum of the modules of the array elements located after the first negative element: %d\n",sum);
return 0;}
