#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif
