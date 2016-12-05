#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
  if(argc == 0) {
    printf( "usage: %s filename(s)", argv[0]);
  }
  int filenr;
  for (filenr = 1; filenr < argc; filenr++) {
    printf( "%s\n", argv[filenr]);
  }
}
