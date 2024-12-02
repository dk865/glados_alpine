# Compiler and flags for Alpine Linux
CC=gcc
CFLAGS=-Wall -Werror

# Targets for building
TARGETS=glados apply notes

# Build rule for all targets
$(TARGETS): %: %.c
	$(CC) $^ -o $@ $(CFLAGS)

# Clean up build artifacts
clean:
	rm -f $(TARGETS)

