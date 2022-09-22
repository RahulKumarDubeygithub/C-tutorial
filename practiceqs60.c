//make a structure to store Bank Account information of a customer of ABC Bank. Also, make an alias for it.
#include<stdio.h>
typedef struct BankAccount
{
    int account_no;
    char name[100];
}bk;
int main()
{
    bk p ={25465,"Rahul Kumar Dubey"};
    bk *ptr = &p;
    printf("Account number:%d\n",ptr->account_no);
    printf("Account number:%s\n",ptr->name);

    return 0;
}
