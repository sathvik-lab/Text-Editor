
# Kilo Text-Editor

I have created a text editor which can run inside your terminal itself, in less than 1k lines of code.


This is a modification of http://antirez.com/news/108 



## Features

- Saving files
- Syntax Decoration
- Searching
- Cross platform
- No external libraries used




## Installation and Setup

Windows:
    
- You will need to install some kind of Linux environment within Windows.I suggest using bash or Cygwin.
- Bash on Windows:
    - Only works on 64-bit Windows.See the [Installation guide](https://learn.microsoft.com/en-us/windows/wsl/install) .
    - Inside ```bash``` run ```sudo apt-get install gcc make``` to install the GNU Compiler Collection and the ```make``` program.
- Cygwin:
    - Download the installer from [cygwin](cygwin.com/install.html).  
    - When the installer asks you to select packages to install, look in the ```devel``` category and select the ```gcc-core``` and ```make``` packages.

macOS:

- When you try to run the ```cc``` command, a window should pop up asking if you want to install the command line developer tools. Run:

```bash
  xcode-select --install
```
Linux:

```bash
  sudo apt-get install gcc make
```
    
    
    



