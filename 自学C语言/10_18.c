#include<stdio.h>
int main()
{
    struct Stu
{
    char name[20];//����
    int age;      //����
    char sex[5];  //�Ա�
    char id[15]; //ѧ��
};
//��ӡ�ṹ����Ϣ
struct Stu s = { "����"   "��"  "20180101" };
//.Ϊ�ṹ��Ա���ʲ�����
printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//->������
struct Stu* ps = &s;
printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps -> id);

}

