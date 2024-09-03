#ifndef DYN_STRING_H
#define DYN_STRING_H



 // Copying functions
 char* my_strcpy(char *dest,const char *str);
 char* my_strncpy(char* dest,const char* srs, size_t n);

  // Concatenation functions
  char* my_strcat(char *dest, const char *src);
  char* my_strncat(char *dest, const char *src, size_t n); 

  // Comparison functions
  int my_strcmp(const char *str1, const char *str2);
  int my_strncmp(const char *str1, const char *str2, size_t n); 
   
  // String length functions
  size_t my_strlen(const char *str);
   
  // String search functions
  char* my_strchr(const char *str, int c); 
  char* my_strrchr(const char *str, int c); 
  char* my_strstr(const char *str, const char *substr);
	




#endif //DYN_STRING_H
