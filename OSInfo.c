#include <stdio.h>

int main(void)
{
//File
  printf("File : %s - %s(%d)\n",__FILE__,__func__,__LINE__);
  printf("Date : %s %s\n",__DATE__,__TIME__);

  printf("\n");
  printf("OS : ");
//OS
#if defined(_WIN32)         //Windows 32
  printf("Windows\n");
#elif defined(_WIN64)       //Windows 64
  printf("Windows\n");
#elif defined(__linux__)    //Linux
  printf("Linux\n");
#elif defined(__unix__)     //Unix
  printf("Unix\n");
#elif defined(__FreeBSD__)  //FreeBSD(Unix)
  printf("FreeBSD\n");
#elif defined(__NetBSD__)   //NetBSD(Unix)
  printf("NetBSD\n");
#elif defined(__APPLE__)    //Apple
  printf("OsX\n");
#else
  printf("Unknow\n");
#endif

//Cygwin
  printf("UNIX-Like : ");
#if defined(__CYGWIN__)
  printf("Cygwin\n");
#elif defined(__CYGWIN32__)
  printf("Cygwin32\n");
#elif defined(__MINGW32__)
  printf("MinGW32\n");
#else
  printf("None\n");
#endif

//Compiler
  printf("Compiler : ");
#if defined(_MSC_VER)
  #if _MSC_VER == 1800
    printf("MSC 2013\n");
  #elif _MSC_VER == 1800
    printf("MSC 2015\n");
  #elif _MSC_VER >= 1910 && _MSC_VER <=1915
    printf("MSC 2017\n");
  #else
    printf("MSC Unknow\n");
  #endif
#elif defined(__clang__)
  printf("Clang-%d.%d\n",__clang_major__,__clang_minor__);
#elif defined(__GNUC__)
  printf("GCC-%d.%d\n",__GNUC__,__GNUC_MINOR__);
#else
  printf("Unknow\n");
#endif

//Language
  printf("Language : ");
#ifdef __cplusplus
  printf("C++\n");
#else
  printf("C\n");
#endif

//Arch
  printf("Arch : ");
  if(sizeof(void*)==4)
    printf("x86\n");
  else if(sizeof(void*)==8)
    printf("x64\n");
  return 0;
}