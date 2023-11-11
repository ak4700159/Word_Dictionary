#ifndef __ENGINE_H__
#define __ENGINE_H__

#include <stdio.h>
#include <stdlib.h>
enum ProgramMode{INSERT = 1, DELETE, MODIFY, PRINT, QUIT};
typedef enum ProgramMode Mode;

void menu();
void Run(const char* fname);
Mode GetMode();

#endif
