#include "Word_Dictionary_Func.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void modify_File(const char* fname, char* modify_msg);
void insert_File(const char* fname, char* insert_msg);
void delete_File(const char* fname, char* delete_msg);

void init_Tree(TreeType* root, const char* fname){
	root = (TreeType*)malloc(sizeof(TreeType));
	strcpy(root->data.word, "hello...");
	strcpy(root->data.meaning, "Hi...");
	root->left = NULL;
	root->right = NULL;
}
void insert_Tree(TreeType* n, char* word, char* meaning);
void modify_word_Tree(TreeType* n, char* word);
void delete_word_Tree(TreeType* n, char* word);
void print_Tree(TreeType* n);

void insert_Dictionary(TreeType* root){
	char meaning[100];
	char word[100];
	printf("Input word : ");
	scanf("%s", word);

	printf("Input meaning : ");
	scanf("%s", meaning);
}
void modify_Dictionary(TreeType* root){

}
void delete_Dictionary(TreeType* root){

}
