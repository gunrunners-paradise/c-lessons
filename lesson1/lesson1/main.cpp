#include <conio.h>
#include <stdio.h>




//-------------------------------------------------
// printrect
//-------------------------------------------------

void printline (int l, char t);

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

//-------------------------------------------------
// main
//-------------------------------------------------

int main()
{
    //-------------------------
    // 1st test
    //-------------------------

    if (0)
    {
       int k;

       printf ("kuku oleg\n");
       printf ("kuku oleg\n");

       for (k=0; k<10; k++)
       {
           printf ("*");
       }
       printf ("\n");
    }

    //-------------------------
    // Print rectangle
    //
    //   *****   w=5
    //   *****   h=3
    //   *****
    //-------------------------

    if (0)
    {
        int i;
        int k;
        int w = 10;
        int h = 5;
        for (i=0; i<h; i++) {
            for (k=0; k<w; k++)  {
              printf("*");
            }
            printf("\n");
        }


    }

    //-------------------------
    // empty rect
    //-------------------------

    if (0)
    {
        int i;
        int k;
        int w = 5;
        int h = 10;


        for (k=0; k<w; k++)
        {
          printf("*");
        }

        printf("\n");
        for (k=0; k<h; k++)
        {
            printf("*");
            for (i=0; i<w-2; i++)
            {

               printf(" ");

            }
            printf("*");
            printf("\n");
        }
        for (k=0; k<w; k++)
        {
          printf("*");
        }
        printf("\n");
    }

    //-------------------------
    // triangle
    //-------------------------

    if (0)
    {
      int i;
      int k;
      int h = 20;
      int w = 20;

      for (i=0; i<h; i++)
      {
          for (k=0; k<w; k++)
          {
              printf("*");
          }
          printf("\n");
          w = w - 1;
      }
    }

    //-------------------------
    // inverted triangle
    //-------------------------
    if (0)
    {
      int i;
      int k;
      int h = 20;
      int w = 20;
      int inv_w = 0;

      for (i=0; i<h; i++)
      {
          for (k=0; k<inv_w; k++)
          {
              printf(" ");
          }
          for (k=0; k<w; k++)
          {
              printf("*");
          }
          printf("\n");
          w = w - 1;
          inv_w = inv_w + 1;
      }
    }

    //-------------------------
    // empty triangle
    //-------------------------

    if (0)
    {
      int i;
      int k;
      int h = 20;
      int w = 20;

      for (i=0; i<w; i++)
      {
         printf("*");
      }
      printf("\n");
      w = w - 1;
      for (i=0; i<h-2; i++)
      {
         printf("*");
         for (k=0; k<w-2; k++)
         {
           printf(" ");
         }
         printf("*\n");
         w = w - 1;
      }
      printf("*");
    }

    //-------------------------
    // first functions
    //-------------------------

    if(1)
    {
      printline(10, 'P');
      printf("\n");
      printrect(5, 6, '$');
    }

    //-------------------------
    // getch
    //-------------------------
    getch();
    return 0;
}
