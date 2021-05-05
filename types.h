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


/* lists */

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))


typedef struct Cell {
  int v;
  struct Cell* next;
} cell;


void insert(cell** root, const int value) {
  cell* tmp = (cell*)malloc(sizeof(cell));
  tmp->v = value;
  tmp->next = *root;
  *root = tmp;
}


cell* create_list(int xs[], const uint len) {
  cell* root = NULL;

  for (int i = len-1; i >= 0; i--) {
    insert(&root, xs[i]);
  }

  return root;
}


void display_list(cell* c) {
  printf("[");
  while (c) {
    if (c->next) {
      printf("%d, ", c->v);
    } else {
      printf("%d]\n", c->v);
    }
    c = c->next;
  }
}

void free_list(cell* c) {
  cell* tmp;

  while (c != NULL) {
    /* or simply `if (c) {}` */
    tmp = c;
    c = c->next;
    free(tmp);
  }
}
