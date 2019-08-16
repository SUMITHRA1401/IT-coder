#include <stdio.h>
int main() {
	int sec, hrs, min, second;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	hrs = (sec/3600); 
	
	min = (sec -(3600*h))/60;
	
	second = (sec -(3600*h)-(m*60));
	
	printf("Hrs:Min:Second - %d:%d:%d\n",hrs,min,second);
	
	return 0;
}
