#ifndef __WORD_DICTIONARY_FUNC_H__
#define __WORD_DICTIONARY_FUNC_H__

#include <stdlib.h>
#include <stdio.h>

// 이진 탐색트리 사용"key == word"
typedef struct element{
	char* word; // key
	char* meaning;
}element;

typedef struct TreeType{
	struct TreeType* left;
	struct TreeType* right;
	element data;
}TreeType;

void insert_File(const char* fname, TreeType* root);
void init_Tree(TreeType* root, const char* fname);

void insert_Tree(TreeType* n, char* word, char* meaning);
void modify_word_Tree(TreeType* n, char* word);
void delete_word_Tree(TreeType* n, char* word);
void print_Tree(TreeType* n);

void insert_Dictionary(TreeType* root);
void modify_Dictionary(TreeType* root);
void delete_Dictionary(TreeType* root);

#endif
