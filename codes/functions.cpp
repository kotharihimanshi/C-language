#include<stdio.h>
void namaste();
void bonjour();

int  main()

{ char ch;
	printf("indian or french: ");
	scanf("%d", &ch);
	if(ch == 'i'){
		 namaste();
	}
	else
         bonjour();
	return 0;
}
void namaste(){
	printf("namaste");
}
void bonjour(){
	printf("bonjour");
}
