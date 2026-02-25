#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compareNames(const void*a,const void*b);
int compareNames(const void*a,const void*b)
{
    return strcmp((const char*)a,(const char*)b);

}
int main()
{
    char nameofStudents[10][50];
    int n,i;
    printf("write no of student which you want");
    scanf("%d",&n);
    getchar();
    printf("Enter student names:\n");
    for(i=0;i<n;i++)
    {
        fgets(nameofStudents[i],sizeof(nameofStudents[0]),stdin);
        
    }
    qsort(nameofStudents,n,sizeof(nameofStudents[0]),compareNames);
    printf("\nSorted Names:\n");
    for(i=0;i<n;i++)
    {
        printf("%s",nameofStudents[i]);
    }
    return 0;
}



