#include <curl/curl.h>

#define CURLINFO(a) {#a, CURLINFO_##a}

NameValue CurlInfoNames[] = 
{
#if 0
        CURLINFO(EFFECTIVE_URL),
	CURLINFO(RESPONSE_CODE ),
	CURLINFO(TOTAL_TIME    ),
	CURLINFO(NAMELOOKUP_TIME),
	CURLINFO(CONNECT_TIME   ),
	CURLINFO(PRETRANSFER_TIME),
	CURLINFO(SIZE_UPLOAD     ),
	CURLINFO(SIZE_DOWNLOAD   ),
	CURLINFO(SPEED_DOWNLOAD  ),
	CURLINFO(SPEED_UPLOAD    ),
	CURLINFO(HEADER_SIZE     ),
	CURLINFO(REQUEST_SIZE    ),
	CURLINFO(SSL_VERIFYRESULT ),
	CURLINFO(FILETIME         ),
	CURLINFO(CONTENT_LENGTH_DOWNLOAD),
	CURLINFO(CONTENT_LENGTH_UPLOAD  ),
	CURLINFO(STARTTRANSFER_TIME),
	CURLINFO(CONTENT_TYPE     ),
	CURLINFO(REDIRECT_TIME    ),
	CURLINFO(REDIRECT_COUNT   ),
	CURLINFO(PRIVATE          ),
	CURLINFO(HTTP_CONNECTCODE ),
	CURLINFO(HTTPAUTH_AVAIL   ),
	CURLINFO(PROXYAUTH_AVAIL  )
#else
#include "CURLINFOTable.h"
#endif
};

