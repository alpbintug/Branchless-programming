#include <stdio.h>
void branched_functionCall(int value) {

	if (value == 0)
        display("Option 1");
    else if(value == 1)
        display("Option 2");
    else if(value == 2)
        display("Option 3");
    else
        display("Exit");
}

void branchless_functionCall(int value) {
	(value==0&&display("Option 1"))||(value==1&&display("Option 2"))||(value==2&&display("Option 3"))||(value>2&&display("Exit"));
}
void display(char *message){
    printf("%s\n",message);
}
int main()
{
    int i = 0;
    //CHANGE THE FUNCTION IN ORDER TO SEE EXECUTION TIMES
	for(i;i<10000;i++)
        branchless_functionCall(i%5);
	return 0;
}
