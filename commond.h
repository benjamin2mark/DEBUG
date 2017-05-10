#define CHAMPON_CLI_DEBUG
#define CHAMPON_LOG_DEBUG

#ifdef CHAMPON_LOG_DEBUG

#define filename(x) strrchr(x,'/')?strrchr(x,'/')+1:x

#define chp_d(_fmt_, ...)  \
		wmprintf(_fmt_ "\r\n",  ##__VA_ARGS__)

#define chp_entry_d(_fmt_, ...)				\
		wmprintf("[%s(%d) - %s] " _fmt_ "\r\n", filename(__FILE__), __LINE__, __func__, ##__VA_ARGS__)
#else
#define chp_d(...)
#define chp_entry_d(...)
#endif 

