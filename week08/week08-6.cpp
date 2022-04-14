#include <stdio.h>
#include <string.h>
char names[3][20];
int grades[3];
int main()
{
    FILE * fout=fopen("檔名.txt","w+");
    char name[20];
    int grade;
    for(int i=0;i<3;i++){
        scanf("%s",name);
        scanf("%d",&grade);
        strcpy( names[i],name);
        grades[i]=grade;
    }
    ///FILE * fout=fopen("檔名.txt","w+");
    for(int i=0;i<3;i++){
        printf("%s 得到 %d\n",names[i],grades[i]);
        ///fprintf(fout,"%s %d\n",names[i],grades[i]);
    }
}

