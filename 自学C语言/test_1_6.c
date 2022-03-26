#include<stdio.h>
#if 0
int main()
{
    printf("%s\n",__FILE__);
    printf("%s\n",__DATE__);
    printf("%d\n",__LINE__);
    printf("%s\n",__TIME__);
    printf("%d\n",__STDC_HOSTED__);
    return 0;
}
#endif

// int main()
// {
//     FILE* pf = fopen("log.txt","a+");
//     if(pf==NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     for(int i = 0;i < 10;i++)
//     {
//         fprintf(pf,"%s %s %s %d\n",__TIME__,__DATE__,__FILE__,i);
//     }
//     fclose(pf);
//     pf=NULL;
//     return 0;
// }
// #define PRINT(X,FORMAT)printf("the value of "#X" is "FORMAT"\n",X);
// int main()
// {
//     int a = 10;
//     PRINT(a,"%d");
//     float b = 5.5f;
//     PRINT(b,"%f");
//     return 0;
// }
