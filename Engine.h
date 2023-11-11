#ifndef __ENGINE_H__
#define __ENGINE_H__

#include "Word_Dictionary_Func.h"

enum ProgramMode{INSERT = 1, DELETE = 2, MODIFY = 3, PRINT = 4, QUIT = 5};
void menu();
void Run(const char* fname);
enum ProgramMode GetMode();
void PlayProgramEngine();
void menu();

#endif
