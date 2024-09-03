#include <stdlib.h>
#include <string.h>

// Copying functions

char* my_strcpy(char *dest, const char *str){
	int size = strlen(str) + 1;
	dest = realloc(dest, size * sizeof(char));
	for(int i = 0; i < size; i++){
		dest[i] = str[i];
	}
	return dest;
}

char* my_strncpy(char* dest, const char* srs, size_t n){
 	dest = realloc(dest, n + 1);
	for(int i = 0; i < n; i++){
		dest[i] = srs[i];
	}
	dest[n] = '\0';
	return dest;
}
// Concatenation functions
char* my_strcat(char *dest, const char *src){
	int index = strlen(dest);
	dest = (char*)realloc(dest, (index + strlen(src) + 1)  * sizeof(char));
	while(*src){
		dest[index++] = *src++;
	}	
	dest[index] = '\0';
	return dest;
}

char* my_strncat(char *dest, const char *src, size_t n){
	int index = strlen(dest);
	
	dest = (char*)realloc(dest,(index + n) * sizeof(char));
	while(n && *src != '\0'){
		dest[index ++] = *src++;
		n--;	
	}
	dest[index] = '\0';
	return dest;
}

// Comparison functions
int my_strcmp(const char *str1, const char *str2){
      while (*str1 != '\0' && *str2 != '\0') {
          if (*str1 > *str2) {
                 return 1;
          } else if (*str2 > *str1) {
                  return -1;
          } else {
                  ++str1;
                  ++str2;
          }
      }
  
      if (*str1 == '\0' && *str2 == '\0') {
          return 0;
      }
  
      if (*str1 == '\0') {
          return -1;
      }
  
      if (*str2 == '\0') {
          return 1;
      }
		

}

int my_strncmp(const char *str1, const char *str2, size_t n){
     while (*str1 != '\0' && *str2 != '\0' && n > 0) {
         if (*str1 > *str2) {
                 return 1;
         } else if (*str2 > *str1) {
                 return -1;
         } else {
                 ++str1;
                 ++str2;
                 n--;
         }
     }
     
     if (n == 0) {
         return 0;
     }
     
     if (*str1 == '\0') {
         return -1;
     }
     
     if (*str2 == '\0') {
         return 1;
     }

}
 // String length functions
size_t my_strlen(const char *str){
  size_t length = 0;
    
    // Iterate through the string until the null terminator is reached
    while (str[length] != '\0') {
        length++;
    }   
    return length;
}
 



  // String search functions
char* my_strchr(const char *str, int c){
	 while (*str) {//is the same as *str != '\0'
         if (*str == (char)c) {
             return (char *)str;
         } 
         str++;
     }
     return NULL;
	
} 
char* my_strrchr(const char *str, int c){
    const char* last = str + (my_strlen(str) - 1);
     while (last >= str) {
         if (*last ==(char)c) {
             return (char*)last;
         }
         --last;
     }
     return NULL;
}
char* my_strstr(const char *str, const char *substr){
	if(*substr == '\0')return NULL;
	for(int i = 0; *str != '\0';i++){
		int j = 0;
		while(str[i + j] != '\0' && substr[j] !='\0' && str[i + j] == substr[j])
				j++;

		if(substr[j]  == '\0')return(char*)str + i;
	}
	return NULL;
}
