#include <stdarg.h>
#include <stdio.h>
#include <c-log/log.h>

static const char *log_names[7] = {
    "TRACE",
    "DEBUG",
    "INFO ",
    "NOTE ",
    "WARN ",
    "ERROR",
    "FATAL"
};

static const char *log_colors[7] = {
    "\x1b[34m",
    "\x1b[90m",
    "\x1b[36m",
    "\x1b[35m",
    "\x1b[33m",
    "\x1b[31m",
    "\x1b[31m"
};

enum log_level LOG_LEVEL = LOG_INFO;

void log_log(
    enum log_level level,
    const char *file,
    int line,
    const char *format,
    ...
) {
    if (level < LOG_LEVEL) return;

    fprintf(stderr, "%s%s  \x1b[0m", log_colors[level], log_names[level]);
    
    if (file != NULL) {
        fprintf(stderr, "\x1b[90m%s:%d\x1b[0m ", file, line);
    }

    va_list args;
    va_start(args, format);

    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");

    va_end(args);
}

void log_set_level(enum log_level level) {
    LOG_LEVEL = level;
}
