#include <stdio.h>
#include <limits.h>

int main(){
    int i, j, k, prima = 0;

    for(i = 2; i <= INT_MAX; i++){
    	k = 0;
    	for(j = 2; j <= i; j++){
    		if(i % j == 0)
				k++;
		}
		if(k < 2) prima++;
		if(prima == 20210) break;
	}
	printf("Bilangan prima ke-20210 adalah %d", i);
	return 0;
}

/*
	i	j
	2	2
	3	2 x 3 	3 v
	4	2 v 4	3 x	4	4 v
*/
