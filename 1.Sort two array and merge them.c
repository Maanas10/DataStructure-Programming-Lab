#include<stdio.h>
void main()
{
int arr1[20], arr2[20], arr3[40];
int m,n;
void read_array (int[],int);
void print_array (int[],int);
void merge (int[],int[],int[],int,int);
printf("No of elements in 1st array:");
scanf("%d",&m);
read_array(arr1,m);
printf("No of elements in 2nd array:");
scanf("%d",&n);
read_array(arr2,n);
merge (arr1,arr2,arr3,m,n);
printf("merged");
print_array(arr3,m+n);
}

void read_array(int arr[],int n)
{
int i;
printf("Enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d", &arr[i]);
}

void print_array(int arr[],int n)
{
int i;
printf(" elements are:\n");
for(i=0;i<n;i++)
printf("%d \n", arr[i]);
}

void merge (int a[],int b[],int c[],int m, int n)
{
int i=0,j=0,k=0;
while(i<m&&j<n){
if(a[i]<b[j])
{
c[k]=a[i];
i=i+1;
k=k+1;
}
else
{
c[k]=b[j];
j=j+1;
k=k+1;
}}
while (i<m){
c[k++]=a[i++];}
while (j<n){
c[k++]=b[j++];
}}





