#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio,h>
strut stu
{
     float score;
     struct stu* next;
};

void player(int n, struct stu* head)
{
    int i = 0;
    struct stu* p, * q;
    for (; in; i++)
    {
        p = (struct stu*)malloc(sizeof(struct stu));
        scanf(% f, p - score);
        if (head == NULL) head = p;
        else q - next = p;
    }
    p - next = NULL;
}
int main()
{
    int n, m = 0;
    struct stu* head = NULL, * p;
    player(n, head);
    p = head;
    for (; m = n; m++)
    {
        printf(% 5.2f, p - score);
        p = p - next;
    }
    getch();
}
