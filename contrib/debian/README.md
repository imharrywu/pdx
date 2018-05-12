
Debian
====================
This directory contains files used to package Predixd/Predix-qt
for Debian-based Linux systems. If you compile Predixd/Predix-qt yourself, there are some useful files here.

## Predix: URI support ##


Predix-qt.desktop  (Gnome / Open Desktop)
To install:

        sudo desktop-file-install Predix-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your Predix-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoin128.png` to `/usr/share/pixmaps`

Predix-qt.protocol (KDE)

