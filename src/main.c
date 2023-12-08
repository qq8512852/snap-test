#include <stdio.h>
#include <stdlib.h>

//#include <openssl/err.h>
//#include <openssl/ssl.h>

#include "debug.h"

int main(void)
{
  /*  unsigned long openssl_version = OpenSSL_version_num();
    int openssl_major = (openssl_version >> 28) & 0xFF;
    int openssl_minor = (openssl_version >> 20) & 0xFF;
    int openssl_patch = (openssl_version >> 12) & 0xFF;
    int openssl_status = openssl_version & 0xFF;
  */
    while(1)
    {
  //  	LOG_DEBUG("OpenSSL version: %d.%d.%d%c\n", openssl_major, openssl_minor, openssl_patch, openssl_status);

	LOG_INFO("ABB Blizzard!\n");

	sleep(2);
    }
	
	return 0;
}




