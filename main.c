#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id,salary;
    char name[30];
};
struct employee e[100];
int n,i,num,g;

void data()
{
    printf("\n#### EMPLOYEE INFO CHART ####\n");
    printf("\n   1.Add employee data\n");
    printf("   2.Search employee data\n");
    printf("   3.Show employees data\n");
    printf("   4.Update employee data\n");
    printf("   0.Exit\n");
    printf("------------------------------\n");
}


void addempl()
{
    printf("\nEnter number of Employees:");
    scanf("%d",&n);
   for(i=g;i<g+n;i++)
   {
   printf("\nEnter Employee Number %d Details\n",i+1);
   printf("ID of employee     :");
   scanf(" %d",&e[i].id);
   printf("NAME of employee   :");
   scanf(" %s",&e[i].name);
   printf("SALARY of employee :");
   scanf(" %d",&e[i].salary);
   }
   g=g+n;
}


void searchempl()
{
    int k;
    k:
    printf("\nEnter ID of employee:");
    scanf("%d",&num);
    for(i=0;i<g;i++)
    {
        if(num==e[i].id)
        {
        printf("\nName of employee   : %s\n",e[i].name);
        printf("Salary of employee : %d\n",e[i].salary);
        }
    }

}


void showempl()
{
    for(i=0;i<g;i++)
    {
        printf("\nDetails of %d Employees\n",i+1);
        printf("  ID     : %d\n",e[i].id);
        printf("  NAME   : %s\n",e[i].name);
        printf("  SALARY : %d\n",e[i].salary);
    }
    printf("\n");
}


void updateempl()
{
    int yn,h=1,ch;
    printf("\nEnter employee ID:");
    scanf("%d",&num);
    for(i=0;i<g;i++)
    {
        if(num==e[i].id)
        {
           printf("Do you want to update?\n");
           printf("1.Yes\n");
           printf("2.No\n");
           printf("\nChoose any one=");
           scanf("%d",&yn);
        }
           if(yn==1)
           {
                printf("\nWhat do you want to update\n");
                printf("1.NAME of employee\n");
                printf("2.SALARY of employee\n");
                printf("0.EXIT\n");
            while(h)
                {
                  printf("\nEnter your choice:");
                  scanf("%d",&ch);
                  switch(ch)
                  {

                  case 1:
                        printf("Old Name of employee       : %s\n",e[i].name);
                        printf("Enter new Name of employee : ");
                        scanf(" %s",&e[i].name);
                        printf("Updated Name is            : %s\n",e[i].name);

                    break;
                    case 2:
                        printf("Old Salary of employee       : %d\n",e[i].salary);
                        printf("Enter new Salary of employee : ");
                        scanf(" %d",&e[i].salary);
                        printf("Updated Salary is            : %d\n",e[i].salary);
                    break;
                    case 0:
                        h=0;
                       printf("Exit\n");
                    break;
                    default:
                        printf("Enter valid id of employee\n");

                  }

                }
           }
    }
}


void all()
{
    int k=1,choice;

    while(k)
    {
    data();
    printf("\nEnter your choice:- ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        addempl();
        printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        break;
    case 2:

        searchempl();
        printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        break;
    case 3:

        showempl();
         printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        break;
    case 4:
        updateempl();
        printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        break;
    case 0:
        k=0;
        printf("Exit\n");
        break;
    default:
        printf("Invalid Choice..Enter Correct choice\n");
    }


    }
}


int main()
{
    printf("****** WELCOME TO HARSH COMPANY PRI. LTD. ******\n");

    all();

    return 0;
}
