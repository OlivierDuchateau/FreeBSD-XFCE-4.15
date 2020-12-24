# FreeBSD ports overlay to test XFCE 4.15

**These are experimental ports, not ready for production use. Use at your own risk.**

## Introduction

This repository contains a [FreeBSD ports](https://www.freebsd.org/doc/en_US.ISO8859-1/books/handbook/ports-using.html) overlay with [XFCE desktop environment](https://xfce.org/) ports updated to version 4.15 of the desktop, which is the development desktop on which the future version 4.16 will be based.

It will be used to test updated for the ports tree required by the next XFCE release.

There is no implicit or explicit warranty about the working state of the ports present here, this is a work in progress.

(details on how these can be used for testing will be added here at a later time)

## Notable changes since 4.14

* GTK2 support dropped. All components not ported to GTK3 will be deprecated, marked broken and removed from the ports tree, since they will not be able to compile and work anymore.

## Bugs reported upstream

None

## Relevant external links

* https://simon.shimmerproject.org/2019/10/19/xfce-4-15-development-phase-starting/
* https://wiki.xfce.org/releng/4.16/roadmap

## List of ports marked BROKEN due to gtk2 support removal

These are ports from software not being updated by its upstream, and not likely to be ported to gtk3. So these are most probably going to be removed from the FreeBSD ports tree.

- print/xfce4-print
- science/xfce4-equake-plugin
- deskutils/xfce4-generic-slider
- deskutils/xfce4-volumed
- deskutils/orage
- x11/xfce4-wmdock-plugin
- x11/xfce4-quicklauncher-plugin
- x11/xfce4-embed-plugin
- x11-toolkits/libxfce4gui

## List of ports failing to build due to other issues

These ones are failing to build due to various changes to XFCE core libraries.

I'm guessing these have a better chance of being fixed. The fixes are trivial for some. Some of these already got fixes in the head of their repository

- sysutils/xfce4-bsdcpufreq-plugin
- www/xfce4-smartbookmark-plugin (*)
- deskutils/xfce4-xkb-plugin (*)
- deskutils/xfce4-notes-plugin (*)
- sysutils/xfce4-cpugraph-plugin (*)
- sysutils/xfce4-wavelan-plugin (*)
- x11/xfce4-verve-plugin (*)
- x11-clocks/xfce4-stopwatch-plugin (*)

(*) has commits with fixes in upstream repo (not tested)
