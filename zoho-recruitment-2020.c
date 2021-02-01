//Write a program to print a snake matrix in the following pattern without using arrays and if conditions.
#inlude<studio.h>
void main()
{
  int n,i.j,k=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=(2*n)-i;j++)
	{
	if(j<=n-i)
	{
	printf("");
	}
	else if(i%2==1)
	{
	k++;
	printf("%d",k);
  	}
	else
	{
	printf("%d",k);
	k--;
	}
       }k+=n;
     printf("/n");
}
}


   
