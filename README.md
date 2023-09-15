# c-log

A simple C logging library.

## Usage

You can log messages using the `log_level` functions (i.e. `log_info` or `log_warn`).

### Example

```c
int main() {
    log_info("This is an example");
    log_note("You should check out the log_set_level function: %p", (void*) log_set_level);
    return EXIT_SUCCESS;
}
```

## Log Levels

The following log levels are supported:

- `trace`
- `debug`
- `info`
- `note`
- `warn`
- `error`
- `fatal`

## Minimum Log Level

The minimum log level is used to filter out log messages by setting a minimum importance. It can be set through the utility function `log_set_level`.
