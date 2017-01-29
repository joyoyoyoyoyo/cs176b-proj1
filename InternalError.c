//
// Created by angel on 1/28/17.
//

#include "InternalError.h"

static Error* error(char * message) {
  Error* p = malloc(sizeof(InternalError));
  p->message = message;
  return p;
};

