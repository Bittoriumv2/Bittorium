
Debian
====================
This directory contains files used to package bittroiumd/bittorium-qt
for Debian-based Linux systems. If you compile bittoriumd/bittorium-qt yourself, there are some useful files here.

## pivx: URI support ##


bittorium-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bittroium-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bittoriumqt binary to `/usr/bin`
and the `../../share/pixmaps/pivx128.png` to `/usr/share/pixmaps`

bittorium-qt.protocol (KDE)

