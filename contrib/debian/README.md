
Debian
====================
This directory contains files used to package skyrusd/skyrus-qt
for Debian-based Linux systems. If you compile skyrusd/skyrus-qt yourself, there are some useful files here.

## skyrus: URI support ##


skyrus-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install skyrus-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your skyrus-qt binary to `/usr/bin`
and the `../../share/pixmaps/skyrus128.png` to `/usr/share/pixmaps`

skyrus-qt.protocol (KDE)

