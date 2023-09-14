
#ifndef WATCHUSER_H
#define WATCHUSER_H

bool matchuser (const char *name);
void *watchusers ();
void addwatcheduser(const char *name);
void removewatcheduser(const char *name);
void watchuser_cleanup ();

#endif
