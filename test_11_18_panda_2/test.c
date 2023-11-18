#include<stdio.h>

//int main()
//{
//	int a, b, t;
//	scanf("%d%d",&a,&b);
//	t = a;
//	a = b;
//	b = t;
//	printf("a = %d b = %d",a,b);
//	return 0;
//}

//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d",a,b);
//	return 0;
//}
//
//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	printf("a = %d b = %d",b,a);
//	return 0;
//}

//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d b = %d",a,b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	a^=b^=a^=b;
//	printf("a = %d b = %d",a,b);
//	return 0;
//}


//鸡兔同笼
//int main()
//{
//	int a,b,m,n;
//	scanf("%d%d",&n,&m);
//	a = (4*n - m)/2;
//	b = (m - 2*n)/2;
//	if(m % 2 !=0 || a < 0||b < 0)
//		printf("No answer\n");
//	else
//		printf("a = %d b = %d",a,b);
//	return 0;
//}


//#include <stdlib.h>     /* qsort */
//
//int values[] = { 40, 10, 100, 90, 20, 25 };
//
//int compare (const void * a, const void * b)
//{
//	return ( *(int*)a - *(int*)b );
//}
//
//int main ()
//{
//	int n;
//	qsort (values, 6, sizeof(int), compare);
//	for (n=0; n<6; n++)
//		printf ("%d ",values[n]);
//	return 0;
//}


//#include<stdlib.h>
//
//int compare(const void*,const void*);
//
//int main()
//{
//	int i = 0;
//	int arr[]={3,4,6,1,2,8,9,5,0,7};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),compare);
//	for(i = 0; i < sz; i++ )
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//
//int compare(const void*p1,const void*p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}

//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//
//	return 0;
//}

//int Max(int* a , int* b)
//{
//	(*a)^=(*b)^=(*a)^=(*b);
//}
//
//
//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b) 
//		Max(&a,&b);
//	if(a>c)
//		Max(&a,&c);
//	if(b>c)
//		Max(&b,&c);
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
