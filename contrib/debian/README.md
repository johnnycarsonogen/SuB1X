
Debian
====================
This directory contains files used to package sub1xd/sub1x-qt
for Debian-based Linux systems. If you compile sub1xd/sub1x-qt yourself, there are some useful files here.

## sub1x: URI support ##


sub1x-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install sub1x-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your sub1xqt binary to `/usr/bin`
and the `../../share/pixmaps/sub1x128.png` to `/usr/share/pixmaps`

sub1x-qt.protocol (KDE)

