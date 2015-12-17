#include "oleg_print.h"
#include <stdio.h>


//-------------------------------------------------
// printrect
//-------------------------------------------------

void printrect (int w, int h, char t)
{
  for (int i=0; i<h; i++)
  {

       printline(w, t);

  }
}

//-------------------------------------------------
// printline
//-------------------------------------------------

void printline (int l, char t)
{
  {for (int i=0; i<l; i++)
   {
       printf("%c", t);
   }
   printf("\n");
  }
}
