#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "types.h"

int main() {
  /* test atom */
  atom a = { 5 };
  char* a_str = atom_to_str(&a);
  printf("atom value:  %s\n", a_str);

  /* test list */
  cell* first = NULL;
  cell* second = NULL;
  cell* third = NULL;

  first = (cell*)malloc(sizeof(cell));
  second = (cell*)malloc(sizeof(cell));
  third = (cell*)malloc(sizeof(cell));

  first->v = 1;
  first->next = second;

  second->v = 3;
  second->next = third;

  third->v = 9;
  third->next = NULL;

  printf("list values: ");
  display_list(first);

  /* dynamic creation of list */
  int candidates[] = {2, 4, 8};
  create_list(candidates);

  /* let's free everything */
  free(a_str);

  free(first);
  free(second);
  free(third);

  return 0;
}
