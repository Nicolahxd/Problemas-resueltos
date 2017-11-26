#include <stdio.h>
#include <math.h>
//	version propia correcta pero con timelimit :(
int main(){
	int n;
	int max,min;
	int tam;
	scanf("%d",&n);
	int i,j;
	int div;
	for(i=0;i<n;i++){
		scanf("%d %d",&max,&min);
		tam=(max-min);
		printf("Case #%d",i+1);
		if(tam==0) printf("0");
		if(min==0 && max!=0){
			printf(" 1 ");
		}
		if(tam>min){
			for(j=min;j <= (int)tam/2 ; j++){
				div=tam%j;
				if(div==0){
					if(min<j){
						printf(" %d",j);
					}
				}
        	}
        printf(" %d",tam);                                                            
    	printf("\n");
    	}
    }
	return 0;
}