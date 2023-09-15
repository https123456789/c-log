#include <c-log/log.h>

int main() {
    log_set_level(LOG_TRACE);
    log_trace("trace log message");
    log_debug("debug log message");
    log_info("info log message");
    log_note("note log message");
    log_warn("warn log message");
    log_error("error log message");
    log_fatal("fatal log message");
    return 0;
}
