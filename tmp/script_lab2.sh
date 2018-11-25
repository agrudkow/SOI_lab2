#!bin/sh
cp a.out ./n1.out
cp a.out ./n2.out
cp a.out ./c1.out
cp a.out ./c2.out
echo ""
echo "Process group N\n"
./n1.out 0 &
./n2.out 0 &
echo ""
echo "Process group C\n"
./c1.out 1 &
./c2.out 1 &
echo ""
