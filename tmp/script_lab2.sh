#!bin/sh
echo ""
echo "Process group N\n"
time ./a.out &
echo ""
echo "Process group C\n"
time ./a.out 1 &
echo ""
