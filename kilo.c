#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

struct termios orig_termios;
void disableRawMode() {
  tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}


// turning off the ECHO feature
void enableRawMode() {
  tcgetattr(STDIN_FILENO, &orig_termios);
  atexit(disableRawMode);

  struct termios raw = orig_termios;

  // tcgetattr(STDIN_FILENO, &raw); //to read the current attributes into a struct

  raw.c_lflag &= ~(ECHO | ICANON); //modify the bitflag echo

  tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

int main() {
  enableRawMode();

  char c;
  while (read(STDIN_FILENO, &c, 1) == 1&& c != 'q'); // to read 1 byte from the standard input into the variable c, and to keep doing it until there are no more bytes to read
  return 0;
}