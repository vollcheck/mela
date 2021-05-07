#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef HEADER_FILE
#define HEADER_FILE


/* atoms  */

typedef struct Atom {
  int v;
} atom;

char* atom_to_str(const atom *a);


/* lists */

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

typedef struct Cell {
  int v;
  char* s;
  struct Cell* next;
} cell;


/* creation/deletion functions */

void insert(cell** root, const int value);
cell* create_list(int xs[], const size_t len);
void free_list(cell* c);


/* operation functions */

int car(cell* c);
int* rest(cell* c, const size_t len);
int* to_arr(cell* c, const size_t len);
int last(cell* c, const size_t len);

void display_array(int* arr, const size_t len);
void display_list(cell* c);



/* expressions */

typedef struct Expr {
  char* form;
  atom value;
} expr;

int eval(expr* e);

#endif
