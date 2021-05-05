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

int last(cell* c, uint len) {
  int res;

  for (int i = 0; i < len; i++) {
    if (!c->next) {
      res = c->v;
    }
    c = c->next;
  }
  return res;
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
