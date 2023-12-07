#ifndef DEBUG_MANAGER_H
#define DEBUG_MANAGER_H

#include <stdio.h>

#define	APP_EMERG	"<0>"	/* system is unusable			*/
#define	APP_ALERT	"<1>"	/* action must be taken immediately	*/
#define	APP_CRIT	"<2>"	/* critical conditions			*/
#define	APP_ERR	    "<3>"	/* error conditions			*/
#define	APP_WARNING	"<4>"	/* warning conditions			*/
#define	APP_NOTICE	"<5>"	/* normal but significant condition	*/
#define	APP_INFO	"<6>"	/* informational			*/
#define	APP_DEBUG	"<7>"	/* debug-level messages			*/

// set default debug level
#define DEFAULT_DBG_LEVEL 4

#ifndef PRINT__LEVEL
#define DEBUG_LEVEL DEBUG//INFO   //默认级别
#else
#define DEBUG_LEVEL PRINT__LEVEL
#endif

#define DEBUG         5
#define ENTRY         4
#define INFO          3
#define WARN          2
#define ERROR         1
#define NONE          0

/*
字色              背景              颜色
---------------------------------------
30                40              黑色
31                41              紅色
32                42              綠色
33                43              黃色
34                44              藍色
35                45              紫紅色
36                46              青藍色
37                47              白色
*/
#define LOG_DEBUG(args,...)\
    do{\
             if (DEBUG_LEVEL >= DEBUG)\
             {\
                        printf("\033[32;47m[D] (%s, %d) "args" \033[0m", __FILE__, __LINE__, ##__VA_ARGS__);\
                    }\
     }while(0)

#define LOG_ENTRY(args,...)\
    do{\
            if (DEBUG_LEVEL >= ENTRY)\
            {\
                        printf("[L] (%s, %d) "args"", __FILE__, __LINE__, ##__VA_ARGS__);\
                    }\
    }while(0)

#define LOG_INFO(args,...)\
    do{\
            if (DEBUG_LEVEL >= INFO)\
            {\
                        printf("\033[34;47m[I] (%s, %d) "args" \033[0m", __FILE__, __LINE__, ##__VA_ARGS__);\
                    }\
    }while(0)

#define LOG_WARN(args,...)\
    do{\
            if (DEBUG_LEVEL >= WARN)\
            {\
                        printf("\033[35;47m[W] (%s, %d) "args" \033[0m", __FILE__, __LINE__, ##__VA_ARGS__);\
                    }\
    }while(0)

#define LOG_ERROR(args,...)\
    do{\
            if (DEBUG_LEVEL >= ERROR)\
            {\
                        printf("\033[31;47m[E] (%s, %d) "args" \033[0m", __FILE__, __LINE__, ##__VA_ARGS__);\
                    }\
    }while(0)

#define LOG_NONE(args,...)\
    do{\
            if (DEBUG_LEVEL >= NONE)\
            {\
                        printf("[N] (%s, %d) "args"", __FILE__, __LINE__, ##__VA_ARGS__);\
                    }\
    }while(0)

#endif // !DEBUG_MANAGER_H

