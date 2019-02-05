/* Chapter 20 Exercise 16 */
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int DWORD;  /* int 32bit */
typedef unsigned short WORD; /* short 16bit */
typedef unsigned char BYTE;  /* char 8bit */

union {
  struct {
    DWORD eax, ebx, ecx, edx;
  } dword;
  struct {
    WORD axl, axh;
    WORD bxl, bxh;
    WORD cxl, cxh;
    WORD dxl, dxh;
  } word;
  struct {
    BYTE axll, axlh, axhl, axhh;
    BYTE bxll, bxlh, bxhl, bxhh;
    BYTE cxll, cxlh, cxhl, cxhh;
    BYTE dxll, dxlh, dxhl, dxhh;
  } byte;
} regs;

int main(void) {
  // printf("\nSize of int: %ld", sizeof(unsigned int));
  // printf("\nSize of long: %ld\n", sizeof(unsigned long));
  regs.dword.ecx = 0x10111987;
  printf("\nCX low : %x\n", regs.word.cxl);
  printf("CX high: %x\n", regs.word.cxh);
  printf("ECX    : %x\n", regs.dword.ecx);

  regs.word.cxl = 0x1248;
  printf("CX low : %x\n", regs.word.cxl);
  printf("CX high: %x\n", regs.word.cxh);
  printf("ECX    : %x\n", regs.dword.ecx);

  printf("CXL low : %x\n", regs.byte.cxll);
  printf("CXL high: %x\n", regs.byte.cxlh);
  printf("CXH low : %x\n", regs.byte.cxhl);
  printf("CXH high: %x\n", regs.byte.cxhh);

  return 0;
}
