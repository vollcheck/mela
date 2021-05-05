#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "types.h"

int main() {
  /* test atom */
  atom a = { 5 };
  char* atom_str = atom_to_str(&a);
  printf("atom value:  %s\n", atom_str);
  free(atom_str);

  /* dynamic creation of list */
  int candidates[] = {2, 4, 8};
  uint len = ARRAY_SIZE(candidates);
  cell* head = create_list(candidates, len);

  printf("list values: ");
  display_list(head);

  free_list(head);
  return 0;
}
