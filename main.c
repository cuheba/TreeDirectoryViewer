#include <stdio.h>
#include <dirent.h>

int walk(const char *path) {
  DIR *dir = opendir(path);
  if (!dir) {
    perror("opendir");
    return 1;
  }

  struct dirent = *dp;
  while ((dp = readdir(dp)) != NULL) {
  
  }

  closedir(dir);
  return 0;
}

int main(int argc, char**argv) {
  const char *path = '.'; // default path is current dir

  if (argc > 1) {
    path = argv[1];
  }

  int err = walk(path);

  return err;
}
