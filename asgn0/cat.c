#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 8192

int main( int argc, char *argv[] )
{
  /* Check for Valid Usage */
  if(argc == 0) {
    printf( "usage: %s filename(s)", argv[0]);
    return (EXIT_FAILURE);
  }
  /* Loop through each argument */
  int filenr;
  ssize_t ret_in, ret_out;
  char buffer[BUF_SIZE];
  for (filenr = 1; filenr < argc; filenr++) {
    char *filename = argv[filenr];
    int filedesc = open(filename, O_RDONLY);
    if(filedesc < 0) {
      perror("File Does Not Exist");
      exit(1);
    }
    while((ret_in = read( filedesc, &buffer, BUF_SIZE)) > 0) {
      ret_out = write(1, &buffer, (ssize_t) ret_in);
      if(ret_out != ret_in) {
	perror("Failed to write to STDOUT");
	exit(1);
      }
    }
    close(filedesc);
  }
  return (EXIT_SUCCESS);
}
