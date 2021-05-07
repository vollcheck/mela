#include "types.h"

/* atoms  */

char* atom_to_str(const atom *a) {
  int length = snprintf(NULL, 0, "%d", a->v);
  char* str = malloc(length + 1);
  snprintf(str, length + 1, "%d", a->v);
  return str;
}


/* lists */

void insert(cell** root, const int value) {
  cell* tmp = (cell*)malloc(sizeof(cell));
  tmp->v = value;
  tmp->next = *root;
  *root = tmp;
}


cell* create_list(int xs[], const size_t len) {
  cell* root = NULL;

  for (int i = len-1; i >= 0; i--) {
    insert(&root, xs[i]);
  }

  return root;
}


void free_list(cell* c) {
  cell* tmp;

  while (c) {
    tmp = c;
    c = c->next;
    free(tmp);
  }
}

/* returns value of heading */
int car(cell* c) {
  return c->v;
}

/* returns whole collection values except first cell */
/* cell* cdr(cell* c, uint len) { */

/*   while (c->next) { */

/*   } */
/*   return c->next; */
/* } */

int last(cell* c, const size_t len) {
  int res = 0;

  for (size_t i = 0; i < len; i++) {
    if (!c->next) {
      res = c->v;
    }
    c = c->next;
  }
  return res;
}

cell* reverse(cell* c, const size_t len) {}

int* to_arr(cell* c, const size_t len) {
  int* arr;
  arr = malloc(sizeof(int) * len - 1);

  for (size_t i = 0; i < len; i++) {
    arr[i] = c->v;
    c = c->next;
  }
  return arr;
}

void display_array(int* arr, const size_t len) {
  for (size_t i = 0; i < len; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");
}

void display_list(cell* c) {
  printf("[");

  while (c) {
    printf("%d", c->v);
    if (c->next)
      printf(", ");
    c = c->next;
  }

  printf("]\n");
}


#define endline() printf("\n");

int eval(expr* expression) {
  // tokenize
  // make the list of symbols

  char* result = for noew

  int index = 0;
  char character;
  do {
    character = expression->form[index];
    printf("%c", character);
    index++;
  } while (character != '\0');
  endline();
  return 1;
}
