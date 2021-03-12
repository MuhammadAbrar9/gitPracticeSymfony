char *my_strcat(char *t, char *s)
{
   
   char *p = t;
   
   while (*p)
   ++p;
   
   while (*p++ = *s++);
   return t;
}
