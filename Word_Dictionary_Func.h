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


// 단어의 삽입 삭제 수정 : 
// 파일 먼저 수정, 삭제 -> 트리 수정, 삭제
// 파일로부터 입출력한 데이터를 트리에 업데이트
void modify_File(const char* fname, char* modify_msg);
void insert_File(const char* fname, char* insert_msg);
void delete_File(const char* fname, char* delete_msg);

void init_Tree(TreeType* root, const char* fname);
void insert_Tree(TreeType* n, char* word, char* meaning);
void modify_word_Tree(TreeType* n, char* word);
void delete_word_Tree(TreeType* n, char* word);
void print_Tree(TreeType* n);

void insert_Dictionary(TreeType* root);
void modify_Dictionary(TreeType* root);
void delete_Dictionary(TreeType* root);

#endif
