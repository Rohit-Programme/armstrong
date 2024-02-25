#include<stdio.h>
#include<math.h>
int main(){
    int no;
    printf("enter armstrong no 3 digit only\n");
    scanf("%d",&no);

    int no1;
    printf("enter first no of above no\n");
    scanf("%d",&no1);

    int no2;
    printf("enter second no above you give\n");
    scanf("%d",&no2);

    int no3;
    printf("enter third no above you give\n");
    scanf("%d",&no3);

    int power1 =pow(no1,no3);
    printf("the power 1^3 =%d\n",power1);
   
    int power2 =pow(no2,no3);
    printf("the power 5^3 =%d\n",power2);

    int power3 =pow(no3,no3);
    printf("the power 3^3 =%d\n",power3);

    int sum = power1+power2+power3+1;
    printf("sum is =%d\n",sum);

    if(sum==no){
        printf("your giving no is armstrong");
    }
    else{
        printf("your no is not armstrong");
    }
    return 0;
}