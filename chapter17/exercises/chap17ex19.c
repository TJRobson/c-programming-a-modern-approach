/* Chapter 17 Exercise 19 */
#include <stdio.h>
#include <string.h>

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

}

void get_cmd(char *cmd, int n)
{

}

void parce_cmd(char *cmd)
{

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
