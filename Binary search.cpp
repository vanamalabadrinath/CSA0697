#include <stdio.h>
void sort(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("Sorted Array:");
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}
int binary_search(int *a,int l,int m,int r,int s)
{
	if(l==r && a[l]!=s) return -1;
	if(a[m]==s) return m;
	if(s<a[m])
	{
		r=m-1;
	}
	if(s>a[m])
	{
		l=m+1;
	}
	return binary_search(a,l,(l+r)/2,r,s);
}
int main()
{
	int a[10],n,s;
	printf("Enter the Array Size:");
	scanf("%d",&n);
	printf("Enter the Array:");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,n);
	printf("\nEnter the Element to Search:");
	scanf("%d",&s);
	int in=binary_search(a,0,(n-1)/2,n-1,s);
	if(in!=-1) printf("\nElement Found at %d Position",in+1);
	else printf("\nElement Not Found!!");
}
