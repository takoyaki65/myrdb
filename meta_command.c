#include "meta_command.h"
#include <stdlib.h>
#include <string.h>

MetaCommandResult do_meta_command(const char* command) {
  if (strcmp(command, ".exit") == 0) {
    exit(EXIT_SUCCESS);
  } else {
    return META_COMMAND_UNRECOGNIZED_COMMAND;
  }
}