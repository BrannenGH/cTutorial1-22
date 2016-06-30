#include <stdio.h>
#include <stdbool.h>
#include "../headers/newlines.h" //checks ../* instead of where header files are

extern char full[];
extern int n; //shows where line was last cut-off; used soley for array and enum.

main(int argc, char *argv[]) {
  if argc != 3 && {
    printf("Please use cTutorial1-22 (absolute path to file) (legnth of line)");
    break;
  }
  FILE *working;
  char abspath = argv[1];

  char new[] = foldLine(fopen(abspath, "w"), argv[2]);

  if output == "\0" {
    printf("File is null");
    break;
  }
  fprintf(working, "%s", new[]);
  printf("Successful!")
  return 0;
}

bool checkInput(char full[]){
  if ( sizeof(full[]) / sizeof(full[0]) > 4500 ){
    //4500 to account for newlines, probably could be made more efficient by counting how many possible newlines per min line legnth.
      return 1;
  }
  return 0;
}
