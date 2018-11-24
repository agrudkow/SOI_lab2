#include </usr/include/lib.h>
#include </usr/include/stdio.h>
#include </usr/include/stdlib.h>

void setgroup(int pid, char group);

void main(int argc, char const *argv[]) {
  pid_t pid = getpid();
  if (argc != 1) {
    while (i < 1000000000)
      i++;
    printf("Process pid (%d) group: N FINISHED\n", pid);
    return 0;
  }else if (argc == 2) {
    char group = 'C';

    setgroup(pid, group);

    while (i < 1000000000)
      i++;
    printf("Process pid (%d) group: C FINISHED\n", pid);
    return 0;
  }

  return 0;
}

void setgroup(int pid, char group) {
  message m;
  m.m1_i1 = pid;
  m.m1_i2 = group;
  _syscall(MM, SETGROUP, &m);
}
