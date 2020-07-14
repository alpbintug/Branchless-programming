# Branchless-programming
Branches are too slow, lets get rid of them.

### Why branches are too slow?

CPU Instruction cycle uses fetch-decode-execute pattern. In simple CPUs this cycle is executed sequentially, in most of the modern CPUs, the instruction cycles are instead executed concurrently. Usually when a piece of instruction is executed, the next instruction will be in decode phase to speed the execution time of the program. If there is a branch in the code (Switch or If statements), the next instruction to enter the cycle is unclear. Compilers often guess one branch to enter to instruction cycle before executing the branch condition. And if the wrong branch is selected, CPU has to clear instruction cycle and restart it with the correct branch, which leads excessive amounts of performance loss. 

GPUs usually fetch different branches of a condition concurrently and then select the correct one, while programming something for GPUs, branchless programming frees GPU cores and increases the performance even more (sometimes by 100x).

### How to overcome this problem?

If your compiler is not smart enough to convert your branched code into branchless instructions, you will have to do it by yourself. Instead of using branches, you can use logical operations and mathematical expressions to mimic the branch.

## Prerequisites

Codes are written in ***C*** and compiled with ***MinGW*** on ***Windows 10***, to not encounter problems, use this compiler of C to run the codes.

## Installation and Running

- ***Clone*** the repository
- ***Compile*** the codes severally with ***MinGW***
- ***Run*** the executable file

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors
Alp Bintuğ Uzun

## Contact
- [@alpbintug](https://github.com/alpbintug) on GitHub
- [Alp Bintug Uzun](www.linkedin.com/in/alpbintug) on LinkedIn
- alp.bintug@gmail.com

## License
[GNU General Public License 3.0](https://www.gnu.org/licenses/gpl-3.0.en.html)
