# FreeBSD ports overlay to test XFCE 4.15

**These are experimental ports, not ready for production use. Use at your own risk.**

## Introduction

This repository contains a [FreeBSD ports](https://www.freebsd.org/doc/en_US.ISO8859-1/books/handbook/ports-using.html) overlay with [XFCE desktop environment](https://xfce.org/) ports updated to version 4.15 of the desktop, which is the development desktop on which the future version 4.16 will be based.

It will be used to test updated for the ports tree required by the next XFCE release.

There is no implicit or explicit warranty about the working state of the ports present here, this is a work in progress.

(details on how these can be used for testing will be added here at a later time)

## Notable changes since 4.14

* GTK2 support dropped. All components not ported to GTK3 will be deprecated, marked broken and removed from the ports tree, since they will not be able to compile and work anymore.

## Relevant external links

* https://mail.xfce.org/pipermail/xfce-announce/2019-October/000794.html
