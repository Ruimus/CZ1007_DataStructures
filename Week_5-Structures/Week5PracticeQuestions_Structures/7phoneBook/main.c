#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct
{
    char name[20];
    char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);

int main()
{
    PhoneBk s[MAX];
    char t[20];
    int size;

    size = readin(s);
    printf("Enter search name: \n");
    gets(t);
    search(s,size,t);
    return 0;
}

int readin(PhoneBk *p)
{
    int i=0;
    char dummychar;

    for (i=0;i<MAX;i++)
    {
        printf("Enter name: \n");
        gets(p[i].name);

        if (strcmp(p[i].name,"#")==0)
        {
            return i;
        }

        printf("Enter tel: \n");
        gets(p[i].telno);
    }
}

void search(PhoneBk *p, int size, char *target)
{
    int i=0;

    while (i<size)
    {
        if (strcmp(p[i].name,target)==0)
        {
            printf("Name = %s, Tel = %s \n", p[i].name, p[i].telno);
            return;
        }
        i++;
    }
    printf("Name not found! \n");
}
