/* Chapter 17 Exercise 19 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_CMDS (int) (sizeof(file_cmd) / sizeof(file_cmd[1]))
#define N 25

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

void print_cmd_list(void);
void get_cmd(char *cmd, int n);
void parse_cmd(char *cmd);

struct {
  char *cmd_name;
  void (*cmd_pointer) (void);
} file_cmd[] =
  {{"new",        new_cmd},
   {"open",       open_cmd},
   {"close",      close_cmd},
   {"close all",  close_all_cmd},
   {"save",       save_cmd},
   {"save as",    save_as_cmd},
   {"save all",   save_all_cmd},
   {"print",      print_cmd},
   {"exit",       exit_cmd}
 };

int main(void)
{
  char cmd[N];

  print_cmd_list();
  get_cmd(cmd, N);

  do {
    parse_cmd(cmd);
    get_cmd(cmd, N);
  } while ((strcmp(cmd, "")) != 0);

}

void print_cmd_list(void)
{
  int i;

  printf("\nList of commands:\n");
  for (i = 0; i < NUM_CMDS; i++) {
    printf("\t\t\t%s\n", file_cmd[i].cmd_name);
  }
}

void get_cmd(char *cmd, int n)
{
  printf("\n\tEnter a command: ");
  fgets(cmd, n, stdin);
  cmd[strlen(cmd)-1] = '\0'; /* Replace '\n' with null char */
}

void parse_cmd(char *cmd)
{
  int i;

  for (i = 0; i < NUM_CMDS; i++) {
    if (strcmp(cmd, file_cmd[i].cmd_name) == 0) {
      file_cmd[i].cmd_pointer();
    }
  }
}

void new_cmd(void)
{
  printf("\tInside 'new' function\n");
}

void open_cmd(void)
{
  printf("\tInside 'open' function\n");
}

void close_cmd(void)
{
  printf("\tInside 'close' function\n");
}

void close_all_cmd(void)
{
  printf("\tInside 'close all' function\n");
}

void save_cmd(void)
{
  printf("\tInside 'save' function\n");
}

void save_as_cmd(void)
{
  printf("\tInside 'save as' function\n");
}

void save_all_cmd(void)
{
  printf("\tInside 'save all' function\n");
}

void print_cmd(void)
{
  printf("\tInside 'print' function\n");
}

void exit_cmd(void)
{
  exit(EXIT_SUCCESS);
}
