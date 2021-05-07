#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "types.h"

int main() {
  char* f = "1 + 2";

  expr e = { f };
  eval(&e);

  return 0;
}
