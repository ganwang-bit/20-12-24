////#include <stdio.h>
////#include <stdlib.h>
////
////int main()
////{
////    printf("Hello world!\n");
////    return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    scanf("%d",&n);
//    for (i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            if(j<n-1-i)
//                printf(" ");
//            else
//                printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for (i=0;i<n;i++)
//        {
//            for(j=0;j<n;j++)
//            {
//                if(j<n-1-i)
//                    printf(" ");
//                else
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for (i=0;i<n;i++)
//        {
//            for(j=0;j<n;j++)
//            {
//                if(j<i)
//                    printf(" ");
//                else
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<n+1;j++)
//            {
//                if(j<n-i)
//                    printf(" ");
//                else
//                    printf("* ");
//            }
//            printf(" \n");
//        }
//        for(i=0;i<n+1;i++)
//            printf("* ");
//        printf(" \n");
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<n+1;j++)
//            {
//                if(j<i+1)
//                    printf(" ");
//                else
//                    printf("* ");
//            }
//            printf(" \n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for (i=0;i<n*2+1;i++)
//        {
//            for(j=0;j<n+1;j++)
//            {
//                if(j<n+1-i||j<i-n+1)
//                    printf("* ");
//                else
//                    printf(" ");
//            }
//            printf(" \n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for (i=0;i<2*n+1;i++)
//        {
//            for(j=0;j<n+1;j++)
//            {
//                if(j<n-i||j<i-n)
//                    printf("  ");
//                else
//                    printf("*");
//            }
//            printf(" \n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for (i=0;i<n;i++)
//        {
//            for(j=0;j<n;j++)
//            {
//                if(j==i)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=n-1;i>=0;i--)
//        {
//            for(j=0;j<n;j++)
//                if(j==i)
//                    printf("*");
//                else
//                    printf(" ");
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<n;j++)
//                if(j==i||j==n-i-1)
//                    printf("*");
//                else
//                    printf(" ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<n;j++)
//                if(!i||!j||j==n-1||i==n-1)
//                    printf("* ");
//                else
//                    printf("  ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<n;j++)
//                if(!j||i==n-1||i==j)
//                    printf("* ");
//                else
//                    printf("  ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
