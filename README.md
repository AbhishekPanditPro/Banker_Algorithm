# Banker_Algorithm
Banker Algorithm is a deadlock avoidance algorithm. The algorithm makes sure that amount of resources allocated and the maximum resources needed in a process is always less than the total available resources. The algorithm also maintains the safe state for the multiple processes.

## Note: C++ compiler is inbuilt in the Unix/Linux
To run in program in Windows, you need to have C++ compiler installed and add the compiler path to the system variables.
## Importing the file locally
Clone the repository
```console
foo@bar % git clone https://github.com/AbhishekPanditPro/Banker_Algorithm.git
```
## Executing the program
In the Shell or Command Line Interface (CLI):
```console
foo@bar % g++ banker.cpp -o banker -std=c++11
foo@bar % ./banker

```

## Output
The output will look like similar to this:

```console
Allocating Process P0
Allocating Process P1
Allocating Process P2
Allocating Process P3
Allocating Process P4
Allocation: 
0 1 0 
2 0 0 
3 0 2 
2 1 1 
0 0 2 
Max: 
7 5 3 
3 2 2 
9 0 2 
2 2 2 
4 3 3 
Need: 
7 4 3 
1 2 2 
6 0 0 
0 1 1 
4 3 1 
Available: 3 3 2 
Need: 
7 4 3 
1 2 2 
6 0 0 
0 1 1 
4 3 1 
Is the sequence safe?
Yes
Safe Sequence: P1 P3 P4 P0 P2 
```
