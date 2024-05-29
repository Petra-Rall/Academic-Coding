#include<stdio.h>
int main()
{

    int data[6]= {10,20,30,40,50};
    int item,n=5, loc;
    printf("Enter item = ");
    scanf("%d", &item);
    printf("%d", item);

    data[n] = item;
    loc = 0;
    while(data[loc] != item)
    {
        printf("\n");
        loc = loc + 1;
    }
    if(loc==n)
    {
        printf("item not found");
        //loc =0;
    }
    else
    {
        printf("item found at %d",loc);
    }
}