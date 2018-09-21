/* Chapter 17 Programming Project 7 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
#define DAY_STR_LEN 2

struct vstring {
  int len;
  char chars[];
};

void *my_malloc(int bytes);
// int read_line(char str[], int n);

int main(void)
{
    struct vstring **reminders, *vstring_msg, **pp, *temp;
    char *day_str, *msg_str;
    int day, size = 1, num_remind = 0;

    reminders = my_malloc(sizeof(struct vstring *));

    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
          printf("\nwtf %d", num_remind);
          printf("-- No space left --\n");
          break;
        }

        day_str = my_malloc(DAY_STR_LEN + 1);
        msg_str = my_malloc(MSG_LEN + 1);

        printf("Enter a day and reminder: ");
        scanf("%2d", &day);
        if (day == 0) {
          break;
        }
        sprintf(day_str, "%2d", day);
        // read_line(msg_str, MSG_LEN);
        fgets(msg_str, MSG_LEN, stdin);
        if (msg_str[strlen(msg_str) - 1] == '\n') {
          msg_str[strlen(msg_str) - 1] = '\0'; /* Remove new line char */
        }

        vstring_msg = my_malloc(sizeof(struct vstring) +
                                2 + strlen(msg_str) + 1);

        strcpy(vstring_msg->chars, day_str);
        strcat(vstring_msg->chars, msg_str);
        vstring_msg->len = strlen(msg_str);

        for (pp = reminders; pp < reminders + num_remind; pp++) {
          if (strcmp(vstring_msg->chars, (*pp)->chars) < 0) {
            temp = *pp;
            *pp = vstring_msg;
            vstring_msg = temp;
          }
        }

        *(reminders + num_remind) = vstring_msg;

        num_remind++;

        if (num_remind == size) {
          reminders = realloc(reminders,
                              sizeof(struct vstring *) * (size *= 2));
        }
    }

    printf("\nDay Reminder\n");
    for (pp = reminders; pp < reminders + num_remind; pp++) {
      printf(" %s\n", (*pp)->chars);
    }

    return 0;
}

void *my_malloc(int bytes)
{
  void *p;

  if ((p = malloc(bytes)) == NULL) {
    printf("\nError: NULL pointer, malloc failed.\n");
    exit(EXIT_FAILURE);
  }
  return p;
}

// int read_line(char *str, int n)
// {
//   char *p = str;
//
//   for (; (*p = getchar()) != '\n' && p < str + n; p++) ;
//
//   if (p[strlen(p)-1] == '\n') {
//     p[strlen(p)-1] = '\0';
//   }
//
//   return p - str;
// }
