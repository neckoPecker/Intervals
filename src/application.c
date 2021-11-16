#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_BUFFER_LENGTH 8
#define CLEARSCREEN printf("\e[1;1H\e[2J")

void start_timer (unsigned int seconds)
{
  fflush (stdout);
  for (unsigned int i = seconds; i > 0; i--)
    {
      CLEARSCREEN;
      printf (" %d\n", i);
      sleep (1);
    }
}

int main (void)
{
  CLEARSCREEN;
  
  char active_time[MAX_BUFFER_LENGTH];
  char break_time[MAX_BUFFER_LENGTH];

  printf ("> Enter minutes for active time:\t");
  fgets (active_time, MAX_BUFFER_LENGTH, stdin);
  printf ("> Enter minutes for break time:\t\t");
  fgets (break_time, MAX_BUFFER_LENGTH, stdin);

  if (atoi (active_time) == 0 || atoi (break_time) == 0)
    {
      printf ("Invalid input. Enter integers.\n");
      return -1;
    }

  CLEARSCREEN;

  while (1)
    {
      // Active timer
      printf ("[Press enter to start active timer...]\n\n");
      getc (stdin);
      CLEARSCREEN;
      start_timer (atoi (active_time));
      printf ("Finished active timer.\n");

      // Break timer
      printf ("[Press enter to start break timer...]\n\n");
      getc (stdin);
      CLEARSCREEN;
      start_timer (atoi (break_time));
      printf ("Finished break timer.\n");
    }

  return 0;
}
