//
// Created by angel on 1/28/17.
//

#ifndef PROJECT1_ERROR_H
#define PROJECT1_ERROR_H

#include <malloc.h>

typedef struct Error {
  char* message;
} Error;

typedef struct InvalidOrMissingOptionsError{
  static Error* error(char *);
} InvalidOrMissingOptionsError;

Error* error(char * message) {
  Error* p = malloc(sizeof(InvalidOrMissingOptionsError));
  p->message = message;
  return p;
};


//typedef struct {
//  const int DEFAULT_MESSAGE_SIZE ;
//  #define MESSAGE "internal error\n\0";
//
//} InternalError;
//

#endif //PROJECT1_ERROR_H
