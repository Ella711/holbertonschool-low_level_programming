int _strstr(char *h, char *n)
{
  if (*n == *h && *n != '\0')
    return (_strstr(h++, n++));
  if (*n == '*')
    return (_strstr(h, n++));
  if (*n == '\0')
    return (1);
}

int wilddos(char *s1, char *s2)
{
  if (*s2 == *s1 || *s2 == '*')
    return (_strstr(s1, s2));
  else
    return (0);
}

int wildcmp(char *s1, char *s2)
{
    if (*s1 != '\0')
        return (wilddos(s1++, s2++));
    else 
        return (0);
}