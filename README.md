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
* https://xfce.org/about/news/?post=1608595200

## Lists of "doomed" ports

### These are outdated, unmaintained software which will stop  working with the update. They will be removed at the time of update or markeqd deprecated with a short spiration.

- deskutils/orage
- print/xfce4-print
- science/xfce4-equake-plugin
- x11-toolkits/libxfce4gui
- x11/xfce4-embed-plugin
- x11/xfce4-quicklauncher-plugin
- x11/xfce4-wmdock-plugin

### These have updates sitting in their repos and the next release will fix them. They will be marked BROKEN for the time being, but updates are expected soon.

- deskutils/xfce4-notes-plugin
- x11-clocks/xfce4-stopwatch-plugin

### These are not maintained by xfce@, so while maintainers will be informed I will only mark them as broken at time of update.

- deskutils/xfce4-generic-slider
- deskutils/xfce4-volumed
- sysutils/xfce4-bsdcpufreq-plugin
