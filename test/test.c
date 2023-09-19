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
    log_itrace("trace log message");
    log_idebug("debug log message");
    log_iinfo("info log message");
    log_inote("note log message");
    log_iwarn("warn log message");
    log_ierror("error log message");
    log_ifatal("fatal log message");
    return 0;
}
