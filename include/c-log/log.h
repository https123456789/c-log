#ifndef _C_LOG_LOG_H_
#define _C_LOG_LOG_H_

#define log_trace(...) log_log(LOG_TRACE, __VA_ARGS__)
#define log_debug(...) log_log(LOG_DEBUG, __VA_ARGS__)
#define log_info(...) log_log(LOG_INFO, __VA_ARGS__)
#define log_note(...) log_log(LOG_NOTE, __VA_ARGS__)
#define log_warn(...) log_log(LOG_WARN, __VA_ARGS__)
#define log_error(...) log_log(LOG_ERROR, __VA_ARGS__)
#define log_fatal(...) log_log(LOG_FATAL, __VA_ARGS__)

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

void log_log(enum log_level level, const char *format, ...);
void log_set_level(enum log_level level);

#endif  // _C_LOG_LOG_H_
