/* Listing 2. A Recursive Function and a helper (problem 5.6 page 6) */
int nodox(int obfuscated){ return undox(obfuscated, 0); }

int undox(int obfusc, int deta)
{
  int retval;
  if(obfusc != 0)
  {
    int c     = obfusc%10;
    int obfus = obfusc/10;
    int detac = 10*deta + c;
    printf("undox(obfusc=%d, deta=%d)", obfusc, deta);
    printf(" uses c=%d, obfus=%d, detac=%d\n", c, obfus, detac);
    retval = undox(obfus, detac);
  } else { 
    retval = deta; 
  }
  printf("undox(obfusc=%d, deta=%d)", obfusc, deta);
  printf(" returns %d\n", retval);
  return retval;
}
