#include <stdio.h>

#define MAX_BUFFER_LENGTH 8

int main (void)
{
  char active_time[MAX_BUFFER_LENGTH];
  char* break_time[MAX_BUFFER_LENGTH];

  printf ("Enter minutes for active time: ");
  fgets (active_time, MAX_BUFFER_LENGTH, stdin);

  printf ("Enter minutes for break time: ");
  fgets (active_time, MAX_BUFFER_LENGTH, stdin);
}
