#include "Word_Dictionary_Func.h"
#include "Engine.h"

#include <stdio.h>
#include <stdlib.h>


void menu(){
	printf("-------MENU------\n");
	printf("----1. INSERT----\n");
	printf("----2. DELETE----\n");
	printf("----3. MODIFY----\n");
	printf("----4. PRINT-----\n");
	printf("----5. QUIT------\n");
}
void Run(const char* fname){
	Mode mode;
	TreeType* root = (TreeType*)malloc(sizeof(TreeType));
	init_Tree(root, fname);
	printf("INIT root = %s %s\n", root->data.word, root->data.meaning);
	while(1){
		menu();
		mode = GetMode();
		if(mode == QUIT)
			break;

		switch(mode)
		{
		case INSERT	: printf("INSERT\n"); continue;
		case DELETE : printf("DELETE\n"); continue;
		case MODIFY : printf("MODIFY\n"); continue;
		case PRINT  : printf("PRINT\n");  continue;
		}
	}
}
Mode GetMode(){
	int choice = 0;
	printf("Select : ");
	scanf("%d", &choice);
	
	while(choice < 1 || choice > 5){
		printf("Again Select : ");
		scanf("%d", &choice);
	}

	if(choice == INSERT)
		return INSERT;
	else if(choice == DELETE)
		return DELETE;
	else if(choice == MODIFY)
		return MODIFY;
	else if(choice == PRINT)
		return PRINT;
	else if(choice == QUIT)
		return QUIT;
}

