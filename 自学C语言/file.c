#include<stdio.h>
#include <stddef.h>
#include<stdlib.h>
// int main()
// {
//     fputc('h',stdout);
//     return 0;
//}
// int main()
// {
//     FILE* pf = fopen("file.txt","r");
//     if(pf==NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //fputc('d',pf);
//     int ret = fgetc(pf);
//     printf("%c\n",ret);
//     ret = fgetc(pf);
//     printf("%c\n",ret);
//     ret = fgetc(pf);
//     printf("%c\n",ret);
//     fclose(pf);
//     pf=NULL;
//     return 0;
// }

// int main()
// {
//     int ret = fgetc(stdin);
//     printf("%c",ret);
//     return 0;
// }
// int main()
// {
//     FILE*pf = fopen("file.txt","r");
//     if(pf==NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //fputs("holle world\n",pf);
//     //fputs("c program\n",pf);
//     char arr[10] = {0};
//     fgets(arr,6,pf);
//     printf("%s\n",arr);
//     fclose(pf);
//     pf=NULL;
// }

// int main()
// {
//     //struct S s = {"abcdef",10,5.5f};
//     struct S s = {0};
//     FILE* pf=fopen("file.txt","r");
//     if(pf==NULL)
//     {
//         perror("fopen");
//         return 1;
//     }

//     //fprintf(pf,"%s %f %d",s.arr,s.num,s.sc);
//     fscanf(pf,"%s %f %d",s.arr,&(s.num),&(s.sc));
//     fprintf(stdout,"%s %f %d",s.arr,s.num,s.sc);

//     fclose(pf);
//     pf=NULL;
//     return 0;
// }

// int main()
// {
//     struct S s = {0};
//     FILE* pf = fopen("file.txt","r");
//     if(pf==NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //fwrite(&s,sizeof(struct S),3,pf);
//     fread(&s,sizeof(struct S),3,pf);
//     fprintf(stdout,"%s %f %d\n",s.arr,s.num,s.sc);

//     fclose(pf);
//     pf=NULL;
//     return 0;
// }

// struct S
// {
//     char arr[10];
//     int age;
//     float f;
// };
// int main()
// {
//     struct S s = {"hello",20,5.5f};
//     struct S tmp = {0};

//     char buf[100] = {0};
//     //sprintf把一个格式化的数据，转化成字符串
//     sprintf(buf,"%s %d %f",s.arr,s.age,s.f);
//     printf("%s\n",buf);

//     //把buf字符串中还原出一个结构体数据
//     sscanf(buf,"%s %d %f",tmp.arr,&(tmp.age),&(tmp.f));
//     printf("%s %d %f\n",tmp.arr,tmp.age,tmp.f);

//     return 0;
// }

// int main()
// {
//     FILE* pf = fopen("file.txt","r");
//     if(pf==NULL)
//     {
//         perror("fopen");
//         return 1;
//     }

//     int ch = getc(pf);
//     printf("%c\n",ch);

//     fseek(pf,4,SEEK_CUR);
//     ch = getc(pf);
//     printf("%c\n",ch);

//     int ret = ftell(pf);
//     printf("%d\n",ret);

//     rewind(pf);
//     ch = getc(pf);
//     printf("%c\n",ch);

//     free(pf);
//     pf=NULL;
//     return 0;
// }

// int main()
// {
//     int a = 10000;
//     FILE* pf = fopen("file.txt","wb");
//     if(pf==NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     fwrite(&a,sizeof(int),1,pf);

//     fclose(pf);
//     pf=NULL;
//     return 0;
// }

int main()
{
    FILE* pfread = fopen("file.txt","r");
    if(pfread==NULL)
    {
        perror("pfread");
        return 1;
    }
    FILE* pfwrite = fopen("test.txt","w");
    if(pfwrite==NULL)
    {
        fclose(pfread);
        pfread=NULL;
        return 1;
    }
    int ch = 0;
    while((ch = fgetc(pfread)) != EOF)
    {
        fputc(ch,pfwrite);
    }
    if(feof(pfread))
    {
        printf("遇到文件结束标准，文件正常结束");
    }
    if(ferror(fread))
    {
        printf("文件读取失败");
    }
    fclose(pfread);
    pfread=NULL;
    fclose(pfwrite);
    pfwrite=NULL;
    return 0;
}