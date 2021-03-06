#ifndef __LE_EDITOR_H__
#define __LE_EDITOR_H__

#include <time.h>

#include "row.h"
#include "termios.h" // TODO editor config should not be concerned with terminal stuff

struct editorConfig {
  int cx, cy;
  int rx;
  int rowoff;
  int coloff;
  int screenrows;
  int screencols;
  int numrows;
  erow *row;
  int dirty;
  char *filename;
  char statusmsg[80];
  time_t statusmsg_time;
  struct termios orig_termios;
};

struct editorConfig E;

void initEditor();

#endif
