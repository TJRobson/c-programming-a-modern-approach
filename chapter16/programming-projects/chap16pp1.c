/* Chapter 16 Programming Project 1 */
#include <stdio.h>

#define LEN (int) (sizeof(country_codes) / sizeof(country_codes[0]))

const struct {
  char *country;
  int code;
} country_codes[] =
  {{"Argentina",            54}, {"Bangladesh",     889},
   {"Brazil",               55}, {"Burma (Myanmar)", 95},
   {"China",                86}, {"Colombia",        57},
   {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
   {"Ethiopia",            251}, {"France",          33},
   {"Germany",              49}, {"India",           91},
   {"Indonesia",            62}, {"Iran",            98},
   {"Italy",                39}, {"Japan",           81},
   {"Mexico",               52}, {"Nigeria",        234},
   {"Pakistan",             92}, {"Philippines",     63},
   {"Poland",               48}, {"Russia",           7},
   {"South Africa",         27}, {"South Korea",     82},
   {"Spain",                34}, {"Sudan",          249},
   {"Thailand",             66}, {"Turkey",          90},
   {"Ukraine",             380}, {"United Kingdom",  44},
   {"United States",         1}, {"Vietnam",         84}};

int main(void)
{
  int i, country_code;

  printf("\nEnter a country code: ");
  scanf("%d", &country_code);

  for (i = 0; i < LEN; i++) {
    if (country_code == country_codes[i].code) {
      printf("%s's country code.\n", country_codes[i].country);
      return 0;
    }
  }
  printf("Error: Country code does not match to country\n");

  return 0;
}
