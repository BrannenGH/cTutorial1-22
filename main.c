#include <stdio.h>
#include <stdbool.h>

#define FULL //Long mutable string that is transformed throughout function.

extern char full;
extern int n; //shows where line was last cut-off; used soley for array and enum.

main() {
  //TO-DO:
  //get file from os
  //run through parser
  //throw error for null
  //save result if not null
  //party like its 1999
}

bool checkInput(char full){
  if ( sizeof(full) / sizeof(full[0]) > 4500 ){
    //4500 to account for newlines, probably could be made more efficient by counting how many possible newlines per min line legnth.
      return 1;
  }
  return 0;
}
char incrementString(char full, int pos, int n){
  //pos starts at end of string, moves recursively throughout function enlarging.
  if (pos != n){
    full[pos+1] = full[pos];
    incrementString(full, (pos-1), n);
  }
  else{
    full[n] = "\n";
    return full;
  }
}
char foldLine(char full, int linelength) {
  if checkInput(full){
    return '\0';
  }
  else{
    n = 0; //saving where line cut off
    if ((full[linelength+n] == "\t" || full[linelength+n] == " ")&&(full[linelength+n-1] != "\t" || full[linelength+n-1] != " ")){
      n = (linelength+n) + 1;
      full = incrementString(full, sizeof(full), n);
    }
    else{
      n -= 1;
    }
  }
  return full;
}

void openFile(char loc) {

}
