#include <stdio.h>
void branched_ifElse(int value) {

	if(value % 2 == 0)
        display("The number is even");
    else
        display("The number is odd");
    return;
}
void branchless_ifElse(int value) {
    (value%2==0)?display("The number is even"):display("The number is odd");
    return;
}
void display(char *message){
    printf("%s\n",message);
    return;
}
int main()
{
    int i;
    //Change the function between branchless_ifElse and branched_ifElse in order to compare execution times.
    for(i = 0; i<10000; i++)
        branchless_ifElse(i);
}
