#include <stdio.h>
#include <conio.h>
#include <assert.h>
#include <math.h>


//-------------------------------------------------
// Solves equation ax=b
//-------------------------------------------------

void ax_eq_b

      (double  a,      // input, factor of x
       double  b,      // input, right hand
       int     *type,  // output, 1: good x, 2-no solution, 3-any number
       double  *x)     // output, solution ax=b (for type=1)
{
  if (a)
  {
      if (x) *x = b/a;
      if (type) *type = 1;
  }
  else
  {
      if (b)
      {
          if (type) *type = 2;
      }
      else
      {
          if (type) *type = 3;
      }
  }
}

//-------------------------------------------------
//
//-------------------------------------------------

void my_minmax

   (int   a,
    int   b,
    int   *ab_min,
    int   *ab_max)
{
  if (a> b)
  {
      if (ab_min)
      {
        *ab_min = b;
      }

      if (ab_max)
      {
          *ab_max = a;
      }
  }
  else
  {
      if (ab_min)
      {
          *ab_min = a;
      }
      if (ab_max)
      {
          *ab_max = b;
      }
  }
}

//-------------------------------------------------
//
//-------------------------------------------------

int maximum (int a, int b)
{
   if (a > b)
   {
       return a;
   }
   else
   {
       return b;
   }
}

//-------------------------------------------------
// Main function
//-------------------------------------------------

int main()
{
    //--------------------------
    // Test "my_minmax"
    //--------------------------

    if (0)
    {
       int x = 10;
       int y = 20;
       int xy_min=-9999;
       int xy_max;

       //my_minmax (x, y, &xy_min, &xy_max);
       my_minmax (x, y, 0, &xy_max);

       printf("var1 = %d var2 = %d, min = %d max = %d\n", x, y, xy_min, xy_max);

    }

    //--------------------------
    // Test "maximum"
    //--------------------------

    if (0)
    {
       int x = 10;
       int y = 20;
       int z = maximum(x, y);
       printf("max (%d, %d) = %d\n", x, y, z);

       for (x=-10; x<=10; x++)       {
       for (y=-10; y<=10; y++)
       {
            z = maximum(x, y);

            if (z<x || z<y)
             {assert(0);}

            assert (z>=x && z>=y);

            //if (z<x || z<y)
            //{
            //    printf ("Error testing \"maximum()\" ( x=%d y=%d) ", x, y);
            //    assert(0);
            //}
          }
       }
    }

    //--------------------------
    // Test "equation"
    //--------------------------

    if (1)
    {
        double a = 0;
        double b = 4;
        double x;
        int    type;

        ax_eq_b (a, b, &type, &x);
        if (type==1)
        {
            printf("x = %lf\n", x);
        }
        else if (type==2)
        {
            printf ("No solution\n");
        }
        else if (type==3)
        {
            printf ("Any number\n");
        }
        else
        {
            printf ("Bug: wrong reply of ax_eq_b\n");
        }


/*
        double err = fabs (a*x - b);
        if (err > 1e-5)
        {
            printf ("Error\n");
            assert(0);
        }

       for (a=-10; a<=10; a++)
       for (b=-10; b<=10; b++)
       {

           if (fabs (a*x - b) > 1e-5)
           {
               printf ("Error\n");
               assert(0);
           }

       }
*/
//        printf("%lf", x);
    }

    //--------------------------
    // bye...
    //--------------------------

    getch();
    return 0;
}
