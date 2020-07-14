#include <string.h>

int branched_counter(char* string, int len, char c) {
	int i,count = 0;
	for(i=0;i<len;i++){
		if(string[i]==c)
			count++;
	}
	return count;
}

int branchless_counter(char* string, int len, char c){
	int i,count=0;
	for(i=0;i<len;i++)
		count+=(string[i]==c);
	return count;
}
int main()
{
//Generated string from www.lipsum.com
	char string[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam vel ultricies magna. Vestibulum non felis sit amet enim semper pulvinar. Praesent faucibus massa sed venenatis cursus. Proin id semper justo. Vivamus quis ipsum lacus. Fusce ornare ut diam eget commodo. Vivamus ut leo egestas, pulvinar lectus vitae, convallis turpis. Proin imperdiet nisl ac elementum imperdiet. Morbi ullamcorper, tellus id tempor mattis, enim risus tempor leo, vitae viverra turpis diam sodales tortor. Curabitur non.";
	int len = strlen(string), count=0;
	for(int j = 0;j<10000;j++)
	//Change this line of code between branched_counter and branchless_counter in order to compare execution times.
		count = branched_counter(string,len,'c');
	return 0;
}
