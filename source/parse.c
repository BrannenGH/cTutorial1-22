#include <stdio.h>
#include <stdbool.h>
#include "../headers/newlines.h"

extern char full[];
extern int n; //shows where line was last cut-off; used soley for array and enum.


char incrementString(char full[], int pos, int n){
  //pos starts at end of string, moves recursively throughout function enlarging.
  if (pos != n){
    full[pos+1] = full[pos];
    incrementString(full[], (pos-1), n);
  }
  else{
    full[n] = "\n";
    return full[];
  }
}
char foldLine(char full[], int linelength) {
  if checkInput(full[]){
    return '\0';
  }
  else{
    n = 0; //saving where line cut off
    if ((full[linelength+n] == "\t" || full[linelength+n] == " ")&&(full[linelength+n-1] != "\t" || full[linelength+n-1] != " ")){
      n = (linelength+n) + 1;
      full[] = incrementString(full[], sizeof(full[]), n);
    }
    else{
      n -= 1;
    }
  }
  return full;
}
