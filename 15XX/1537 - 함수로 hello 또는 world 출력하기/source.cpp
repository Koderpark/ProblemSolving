void f(int x)
{
  printf("%s\n", x==1?"hello":x==2?"world":'\0');
  return;
}
