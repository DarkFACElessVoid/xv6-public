#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int n = 25;
  if(argc > 1)
    n = atoi(argv[1]);

  printf(1, "settickets(%d) -> %d\n", n, settickets(n));
  sleep(500);  
  exit();
}
