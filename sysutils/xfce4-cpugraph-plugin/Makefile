# Created by: Matt Lancereau <matt@rimasec.net>
# $FreeBSD: head/sysutils/xfce4-cpugraph-plugin/Makefile 513616 2019-10-02 19:43:22Z pkubaj $

PORTNAME=	xfce4-cpugraph-plugin
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Graphical representation of the CPU load

LICENSE=	GPLv2

BROKEN=		Fails to compile with xfce4-panel 4.16

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_CSTD=	c99
USE_GNOME=	cairo gtk30 intltool
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
