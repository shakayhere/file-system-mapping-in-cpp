# Logical to Physical File System Mapping In C++
This repository contains a code which creates logical to physical mapping between data blocks after reading a FAT table from a text file. An example fat table is stored in the 'input.txt'. The "-" means that file has ended here. Tested and worked on Ubuntu 18.04 LTS.

## Getting Started
Here's how it works. The code will ask the user to enter a starting block number. Say user enters 217. Our code will assume that 217 is the 0th logical block. So it will print all the physical blocks in order to their logical appearance. For example, the following will be a sample output of our code:

```
Size of FAT Table is: 20

Please enter the 0th physical block number : 217

0:217
1:618
2:339

Your file has 3 data blocks.
```

#### Before you Start
You must have `gcc` compiler and `make` installed on your system before testing.


## Install GCC and make on Ubuntu
Start by updating the packages list:
```
sudo apt update
````

Install the `build-essential` package by typing:
```
sudo apt install build-essential
```

The command installs a bunch of new packages including `gcc`, `g++` and `make`.

You may also want to install the manual pages about using GNU/Linux for development:
```
sudo apt-get install manpages-dev
```

To validate that the GCC compiler is successfully installed, use the `gcc --version` command which prints the GCC version:
```
g++ --version
```

## How to Build and Install
Just run `make` from the root of this repository. A binary called `exec.out` will be produced. To run this file, enter the following:
```
./exec.out
```

## License
Copyright (c) 2021 Ahmad Ashfaq

Permission is hereby granted, free of charge, to any person obtaining a copy of this code, to deal in any Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software.
