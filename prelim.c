#include <stdio.h>
#include <unistd.h>

int main () {
	
  char hostname[256];
  gethostname(hostname, sizeof(hostname));
  printf("Hostname: %s\n", hostname);
  return 0;
}
