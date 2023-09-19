#include <stddef.h>
#include <string.h>

#ifndef _C_LOG_LOG_H_
#define _C_LOG_LOG_H_

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define log_trace(format, ...) log_log(LOG_TRACE, NULL, 0, format, ##__VA_ARGS__)
#define log_debug(format, ...) log_log(LOG_DEBUG, NULL, 0, format, ##__VA_ARGS__)
#define log_info(format, ...) log_log(LOG_INFO, NULL, 0, format, ##__VA_ARGS__)
#define log_note(format, ...) log_log(LOG_NOTE, NULL, 0, format, ##__VA_ARGS__)
#define log_warn(format, ...) log_log(LOG_WARN, NULL, 0, format, ##__VA_ARGS__)
#define log_error(format, ...) log_log(LOG_ERROR, NULL, 0, format, ##__VA_ARGS__)
#define log_fatal(format, ...) log_log(LOG_FATAL, NULL, 0, format, ##__VA_ARGS__)

/* With Info */
#define log_itrace(format, ...) log_log(LOG_TRACE, __FILENAME__,  __LINE__, format, ##__VA_ARGS__)
#define log_idebug(format, ...) log_log(LOG_DEBUG, __FILENAME__, __LINE__, format, ##__VA_ARGS__)
#define log_iinfo(format, ...) log_log(LOG_INFO, __FILENAME__, __LINE__, format, ##__VA_ARGS__)
#define log_inote(format, ...) log_log(LOG_NOTE, __FILENAME__, __LINE__, format, ##__VA_ARGS__)
#define log_iwarn(format, ...) log_log(LOG_WARN, __FILENAME__, __LINE__, format, ##__VA_ARGS__)
#define log_ierror(format, ...) log_log(LOG_ERROR, __FILENAME__, __LINE__, format, ##__VA_ARGS__)
#define log_ifatal(format, ...) log_log(LOG_FATAL, __FILENAME__, __LINE__, format, ##__VA_ARGS__)

enum log_level {
    LOG_TRACE,
    LOG_DEBUG,
    LOG_INFO,
    LOG_NOTE,
    LOG_WARN,
    LOG_ERROR,
    LOG_FATAL,
    LOG_LEVEL_ENUM_END
};

extern enum log_level LOG_LEVEL;

void log_log(
    enum log_level level,
    const char *file,
    int line,
    const char *format,
    ...
);
void log_set_level(enum log_level level);

#endif  // _C_LOG_LOG_H_
