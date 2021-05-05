/* atoms  */

typedef struct Atom {
  int v;
} atom;

char* atom_to_str(const atom *a) {
  int length = snprintf(NULL, 0, "%d", a->v);
  char* str = malloc(length + 1);
  snprintf(str, length + 1, "%d", a->v);
  return str;
}


/* arrays */

typedef struct Cell {
  int v;
  struct Cell* next;
} cell;

void display_list(cell* c) {
  printf("[");
  while (c != NULL) {
    if (c->next) {
      printf("%d, ", c->v);
    } else {
      printf("%d]\n", c->v);
    }
    c = c->next;
  }
}

void create_list(const int xs[]) {
  printf("list creation\n");
}
