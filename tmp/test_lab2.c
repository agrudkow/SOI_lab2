#include </usr/include/lib.h>
#include </usr/include/stdio.h>
#include </usr/include/stdlib.h>

void setgroup(int pid, int group);

int main(int argc, char const *argv[]) {
  pid_t pid = getpid();
  int i, group;
  if (argc != 2) {
    printf("Input error\n");
    return 1;
  }

    group = atoi(argv[1]);

    setgroup(pid, group);

    while (i < 10000000000)
      i++;
    printf("Process pid (%d) group: %dFINISHED\n", pid, group);
    return 0;
}

void setgroup(int pid, int group) {
  message m;
  m.m1_i1 = pid;
  m.m1_i2 = group;
  _syscall(MM, SETGROUP, &m);
}
