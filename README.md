# detect-gcc-default-stdc-version

This is a sample code to check the version of the C language standard specification applied by default in gcc.

# Requirements

- [GCC](https://gcc.gnu.org/)
- [Task](https://taskfile.dev/#/)

# How to run

The following was executed on Gitpod.

```sh
$ task --list
task: Available tasks for this project:
* cmd-only:         Command only (no source code)
* normal-way:       Normal way (with source code)


$ task normal-way
task: [normal-way] gcc --version
gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

task: [normal-way] gcc -o app main.c
task: [normal-way] ./app
C Standard: 201710
task: [normal-way] rm ./app


$ task cmd-only
# https://mikoto2000.blogspot.com/2020/08/gcc-std.html
task: [cmd-only] echo | gcc -dM -E - | grep STDC_V
#define __STDC_VERSION__ 201710L
```


# REFERENCES

- [gcc の std オプションのデフォルト値を調べる](https://mikoto2000.blogspot.com/2020/08/gcc-std.html)
