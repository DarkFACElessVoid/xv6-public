#include "types.h"
#include "user.h"

int
main(void)
{
  printf(1, "about to yield...\n");
  yield();
  printf(1, "back from yield\n");
  exit();
}
