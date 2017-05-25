![logo](doc/logo.png)

f1x [ɛf-wʌn-ɛks] is a test-driven patch generation engine for C/C++ programs. It automatically finds and fixes software bugs by analyzing behaviour of passing and failing tests. f1x aims to be reliable, efficient and easy-to-use.

**Status:** f1x is under active development and maintenance. It provides good support for C language (tested on real-world projects such as PHP, Python, etc.) and initial C++ support (tested on small programs). f1x currently works on Linux-based systems (tested on Ubuntu 14.04 and Ubuntu 16.04).

## Documentation ##

In order to install f1x you can either [build it from source](doc/BuildFromSource.md) (recommended) or try an older version [available on VirtualBox VM](doc/VirtualBox.md).

The quickest way to get started with f1x is to go though our [tutorial](doc/Tutorial.md). More detailed information about the tool and the underlying algorithms is given in the [manual](doc/Manual.md). If you encourter a problem while using f1x, please consult the [troubleshooting guide](doc/Troubleshooting.md) or ask us by email (Sergey Mechtaev, `mechtaev@comp.nus.edu.sg`). If you plan to modify f1x, please refer to [developer documentation](doc/Development.md).

f1x have been evaluated on several automated program repair benchmarks. We provide scripts for reproducing [experiments with Genprog ICSE'12 benchmark](https://github.com/mechtaev/f1x-genprog-icse12) and [experiments with IntroClass benchmark](https://github.com/stan6/f1x-introclass).

## People ##

* Abhik Roychoudhury, Professor, Principal investigator
* Sergey Mechtaev, PhD student, Developer
* Gao Xiang, PhD student, Developer
* Shin Hwei Tan, PhD Student, Contributor
