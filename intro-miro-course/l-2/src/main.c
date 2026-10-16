// lesson 2

int main (void) {
  int counter = 0;
  while (counter < 21) {
    ++counter;
    if ((counter & 1) != 0) {
      // do sth when the counter is odd
    } else {
      // do sth when the counter is even
    }
  }
  
  return 0;
}
