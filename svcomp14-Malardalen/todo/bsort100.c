extern void __VERIFIER_error() __attribute__ ((__noreturn__));
/* bsort100.c */

/* All output disabled for wcsim */
#define WCSIM 1

/* A read from this address will result in an known value of 1 */
#define KNOWN_VALUE (int)(*((char *)0x80200001))

/* A read from this address will result in an unknown value */
#define UNKNOWN_VALUE (int)(*((char *)0x80200003))


#define WORSTCASE 1
#define FALSE 0
#define TRUE 1
#define NUMELEMS 100
#define MAXDIM   (NUMELEMS+1)

/* BUBBLESORT BENCHMARK PROGRAM:
 * This program tests the basic loop constructs, integer comparisons,
 * and simple array handling of compilers by sorting 10 arrays of
 * randomly generated integers.
 */

int Array[MAXDIM], Seed;

main()
{
   Initialize(Array);
   BubbleSort(Array);
}




Initialize(Array)
int Array[];
/*
 * Initializes given array with randomly generated integers.
 */
{
   int  Index, fact;

fact = -1;
for (Index = 1; Index <= NUMELEMS; Index ++)
    Array[Index] = Index*fact * KNOWN_VALUE;
}



int BubbleSort(Array)
int Array[];
/*
 * Sorts an array of integers of size NUMELEMS in ascending order.
 */
{
   int Sorted = FALSE;
   int Temp, LastIndex, Index, i;
   for (i = 1;
	i <= NUMELEMS-1;           /* apsim_loop 1 0 */
	i++)
   {
      Sorted = TRUE;
      for (Index = 1;
	   Index <= NUMELEMS-1;      /* apsim_loop 10 1 */
	   Index ++) {
         if (Index > NUMELEMS-i)
            break;
         if (Array[Index] > Array[Index + 1])
         {
            Temp = Array[Index];
            Array[Index] = Array[Index+1];
            Array[Index+1] = Temp;
            Sorted = FALSE;
         }
      }

      if (Sorted)
         break;
   }

#ifndef WCSIM
   if (Sorted || i == 1)
      fprintf(stderr, "array was successfully sorted in %d passes\n", i-1);
   else
      fprintf(stderr, "array was unsuccessfully sorted in %d passes\n", i-1);
#endif
	if () {
ERROR:
	__VERIFIER_error();
	goto ERROR;
	}
   return i;
}
