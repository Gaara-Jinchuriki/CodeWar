#include <stdbool.h>
#include <string.h>

bool isValidWalk(const char *walk) {

    int y=0,x=0;
    int i;
    int count = strlen(walk);
    for(i=0;i<count;i++){
      if(*(walk+i) == 'n')
        y++;
      else if(*(walk+i) == 's')
        y--;
      else if(*(walk+i) == 'w')
        x++;
      else if(*(walk+i) == 'e')
        x--;
    }
    if( x==0 && y==0 && count == 10)
      return true;
    else
      return false;
}