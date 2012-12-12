This is a set of patches to fix build problem with clang for VirtualBox 
gestaddition 4.2.4 on FreeBSD ports.
-------------------------
This work has *not done* yet, because of a lot of files need some 
modifications.
-------------------------
This set of patches is for VirtualBox gestaddition v4.2.4.
It is recently version of gestaddition, but it has not still merged into 
ports tree.

If you want to use this version, you should get the archive from 
[http://people.freebsd.org/~decke/virtualbox/](http://people.freebsd.org/~decke/virtualbox/) 
or "svn checkout https://svn.redports.org/virtualbox/".

But currently redports still down...

How to use these patches
-------------------------
Overwrite your virtualbox/emulators/virtualbox-ose-additions/files/ by the files/ directory in this repository.

And, "make install clean".
