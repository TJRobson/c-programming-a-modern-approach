/* Chapter 17 Exercise 19 */
#include <stdio.h>
#include <string.h>

#define NUM_CMDS (int) (sizeof(file_cmd) / sizeof(file_cmd[1]))

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
void parce_cmd(char *cmd);

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

}

void print_cmd_list(void)
{
  int i;

  printf("\nList of commands:\n")
  for (i = 0; i < NUM_CMDS; i++) {
    printf("\t%s\n", file_cmd[i].cmd_name);
  }
}

void get_cmd(char *cmd, int n)
{
  printf("Enter a command: ");
  fgets(cmd, n, stdin);
  cmd[strlen(cmd)-1] = '\0'; /* Replace '\n' with null char */
}

void parce_cmd(char *cmd)
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
  printf("Inside 'new' function\n");
}

void open_cmd(void)
{
  printf("Inside 'close' function\n");
}

void close_all_cmd(void)
{
  printf("Inside 'close all' function\n");
}

void save_cmd(void)
{
  printf("Inside 'save' function\n");
}

void save_as_cmd(void)
{
  printf("Inside 'save as' function\n")
}

void save_all_cmd(void)
{
  printf("Inside 'save all' function\n");
}

void print_cmd(void)
{
  printf("Inside 'print' function\n");
}

void exit_cmd(void)
{
  exit(EXIT_SUCCESS);
}
