DOCUMENTATION
---

## REQUIREMENTS

Requirements for compilation: libcurl-dev, libcurl3-openssl-dev

---------------------------------------------------------------

## FILE_P.H

Simplify File operations. Supports Local Files, HTTP and HTTPS.

### Globals

**REQUEST_ERROR** : Flag set to 1 if an error occured during a Request.

**CURL_HANDLE** : The CURL Handler. Can be eighter initialized manually or will be initialized at function calls. Manual Initialization will enable to set certain headers with "curl_easy_setopt". The CURL Hander will always be cleaned up after each function call (set to NULL).

### Functions

**std::string fileGetContents( std::string *location* )** : Send File GET Request. Supported are Local Files, HTTP and HTTPS. Return the Content as a String.

**std::string filePostContents( std::string *location*, char *params* )** : Send File POST Request. Supported are HTTP and HTTPS. Return the Content as a String.

**std::vector &lt;std::string&gt; fileGetLines( std::string *location* )** : Same 
functionallity 
as fileGetContents. Return the Content as Lines.

**std::vector &lt;std::string&gt; filePostLines( std::string *location*, char *params*  
)** : 
Same functionallity as filePostContents. Return the Content as Lines.

**bool filePutContents( std::string *location*, std::string *content* )** : Save Data to a local File.

## STRING_P.H

Useful functions for Strings.

### Functions

**std::string convertVectorToString( std::vector<std::string> *lines* )** : Convert a Vector of Lines and return them as a String.

**std::vector<std::string> split( std::string *content*, char *delimiter* )** || 
**std::vector<std::string> split( std::string *content*, std::string *delimiter* )** : Split a String at a certain character or sequence.

**std::string glue( std::vector<std::string> *pieces*, char *glue* )** || 
**std::string glue( std::vector<std::string> *pieces*, std::string *glue* )** : Connect Pieces of Text with a character or sequence.

## STDIO_P.H

Functions for stdin and stdout.

### Functions

**std::vector<std::string> getSTDINLong()** : Get STDIN until EOF (CTRL-D).

**std::string getSTDINShort()** : Get STDIN Line.
