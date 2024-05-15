#define _GNU_SOURCE

#ifndef SIMPLE_BUSH_UTILS_GREP

#include <getopt.h>
#include <regex.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_LINE_LENGTH 1000

typedef struct {
  int regex_flag;
  int e;
  int v;
  int c;
  int l;
  int n;
  int h;
  int s;
  int f;
  int o;
  char *patterns;
  int error;
  int fileIndex;
  int patternIndex;

} Flags;

void Grep(Flags flags, char *patterns, char **files);
void GrepFile(FILE *file, Flags flags, regex_t *preg, char *files);
void Flag_o(regex_t *preg, char *line);
void Flag_el(Flags flags, int c_counter, char *files, int lkey);
void Fi_name(Flags flags, char *files);
void Li_number(Flags flags, int linenumber);
Flags GrepPars(int argc, char *argv[], char *patterns, char **files);
void MFile(Flags *flags, char **files, int argc, char *argv[]);
void ProcArgs(int argc, char *argv[], Flags *flags, char *patterns,
              char **files);
void Flag_e(Flags *flags, char *patterns);
void Flag_f(Flags *flags, char *patterns);
#endif
