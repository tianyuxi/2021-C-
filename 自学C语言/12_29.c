#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// enum color
// {
//     red,green,blue
// };
// int main()
// {
//     enum color c = blue;
//     printf("%d\n",blue);
//     return 0;
// }
// enum Option
// {
//     Exit,Add,Sub,Mul,Div
// };
// int main()
// {
//     int input = 0;
//     do
//     {
//         printf("请输入");
//         scanf("%d",&input);
//         switch(input)
//         {
//         case Add:break;
//         case Sub:break;
//         case Mul:break;
//         case Div:break;
//         case Exit:break;
//         default:break;
//         }
//     } while (input);
// }

// union Un
// {
//     int i;
//     char c;
// };
// int main()
// {
//     union Un u;
//     printf("%p\n",&u);
//     printf("%p\n",&(u.c));
//     printf("%p\n",&(u.i));
//     printf("%d\n",sizeof(u));
//     return 0;
// }
// int check_sys()
// {
//     int a = 1;
//     if((*(char*)&a)==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int ret = check_sys();
//     if(ret=1)printf("小端");
//     if(ret=0)printf("大端");
//     return 0;
// }
// int check_sys()
// {
//     union U
//     {
//         int i;
//         char c;
//     }u;
//     return u.c = 1;
// }
// int main()
// {
//     int ret = check_sys();
//     if(ret=1)printf("小端");
//     if(ret=0)printf("大端");
//     return 0;
// }
// int main()
// {
//     int arr[] = {5,2,4,6,1,3};
//     int i = 0;//比较的轮数
//     int j = 0;//每轮比较的次数
//     int sz = sizeof(arr)/sizeof(arr[0]);//数组个数
//     int tmp = 0;
//     for(i = 0;i <= sz-1;i++)
//     {
//         for(j = 0;j < sz-1-i;j++)
//         {
//             if(arr[j]<arr[j+1])
//             {
//                 tmp=arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = tmp;
//             }
//         }
//     }
//     for(i = 0;i < sz;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int* p = (int*)malloc(10 * sizeof(int));
//     int i = 10;
//     if (p == NULL)
//     {
//         perror("main");
//         return 0;
//     }
//     for (i = 0; i < 10; i++)
//     {
//         *(p + i) = i;
//         printf("%d ", p[i]);
//     }
//     free(p);
//     p = NULL;
//     return 0;
// }

// int main()
// {
//     int *p = (int*)calloc(10,sizeof(int));
//     if(p==NULL)
//     {
//         return 1;
//     }
//     int i = 10;
//     for(i = 0;i < 10;i++)
//     {
//         printf("%d ",p[i]);
//     }
//     free(p);
//     p=NULL;
//     return 0;
//  }
// int main()
// {
//     int* p= (int*)calloc(10,sizeof(int));
//     if(p==NULL)
//     {
//         perror("main");
//         return 1;
//     }
//     int i = 10;
//     for(i = 0;i < 10;i++)
//     {
//         *(p+i) = 5;
//         printf("%d ",p[i]);
//     }
//     int* ptr = (int*)realloc(p,20*sizeof(int));
//     if(ptr!=NULL)
//     {
//         p=ptr;
//     }
//     free(p);
//     p=NULL;
//     return 0;
// }

// char* getmemory(char* p)
// {
//     char* p = (char*)malloc(100);
//     return p;
// }
// int main()
// {
//     char* str = NULL;
//     getmemory(str);
//     strcpy(str,"holle world");
//     printf("%s",str);
//     free(str);
//     str = NULL;
//     return 0;
// }

// struct S
// {
//     int n;
//     int* arr;
// };
// int main()
// {
//     struct S* ps = (struct S*)malloc(sizeof(struct S));
//     if (ps == NULL)
//     {
//         return 1;
//     }
//     ps->arr = (int*)malloc(10 * sizeof(int));
//     if (ps->arr == NULL)
//     {
//         return 1;
//     }
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         ps->arr[i] = i;
//         printf("%d ", ps->arr[i]);
//     }
//     free(ps->arr);
//     ps->arr=NULL;
//     free(ps);
//     ps=NULL;
//     return 0;
// }

// struct S
// {
//     int n;//柔性数组前面必须有一个成员
//     int* arr[0];//大小是未知
// };
// int main()
// {
//     printf("%d",sizeof(struct S));
//     struct S* ps = (struct S*)malloc(sizeof(struct S)+(10*sizeof(int)));
//     int i = 0;
//     for(i = 0;i < 10;i++)
//     {
//         ps->arr[i] = i;
//         printf("%d ",ps->arr[i]=i);
//     }
//     int* ptr = (struct S*)realloc(ps,sizeof(struct S));
//     if(ptr!=NULL)
//     {
//         ps = ptr;
//     }
//     free(ps);
//     ps=NULL;
// }

int main()
{
   int n = 0;
   while (scanf("%d", &n) != EOF)
   {
       int i = 0;
       int j = 0;
       for (i = 0; i < n; i++)
       {
           for (j = 0; j < n; j++)
           {
               if (i == j)
                   printf("x");
               else if (i + j == n - 1)
                   printf("x");
               else
                   printf(" ");
           }
           printf("\n");
       }
   }
   return 0;
}
