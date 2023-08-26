#include <stdio.h>
#include <unistd.h>

int main () {
	
  char hostname[256];
  int len;
  len = gethostname(hostname, sizeof(hostname));
  printf("Hostname: %s\n", len);
  return 0;
}
