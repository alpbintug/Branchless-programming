#include <stdio.h>
#include <time.h>


void branched_checker(double x, int i) {
	for(i=1;i<=10000;i++){
		if(i%2==0){
			x*=2;
		}
		if(i%3==0){
			x/=11;
		}
		if(i%5==0){
			x+=7;
		}
		if(i%7==0){
			x-=5;
		}
	}
}

void branchless_checker(double x, int i){
	for(i=1;i<=10000;i++){
		x*=(2*(i%2==0)+!(i%2==0));
		x/=(11*(i%3==0)+!(i%3==0));
		x+=7*(i%5==0);
		x-=5*(i%7==0);
	}
}
int main()
{
	double x,execTime;
	int i;


	x=1;
	for(int j = 0;j<10000;j++)
  //Change this function between branchless and branched in order to check execute times
		branchless_checker(x,i);
	return 0;
}
