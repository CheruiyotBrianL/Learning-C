#include <stdio.h>

int main() {
    int score = 00;
  
    if (score >= 75)
        printf("You passed.\n");

        else if(score>=50)
        printf("Not bad meehn.\n");

        else if(score>=35)
        printf("Pull up your socks, boy!\n");

        else if (score)
        printf("FAILED!\n"); 
	    
	    else
			printf("Missing marks.\n");  
    return 0;
}

