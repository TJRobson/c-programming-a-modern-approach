/* Chapter 16 Exercise 19 */

struct pinball_machine {
  char name[40+1];
  int year;
  enum {EM, SS} type;
  int players;
};
