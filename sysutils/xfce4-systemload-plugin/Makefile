# Created by: Thorsten Greiner <thorsten.greiner@web.de>
# $FreeBSD: head/sysutils/xfce4-systemload-plugin/Makefile 558815 2020-12-21 12:23:13Z madpilot $

PORTNAME=	xfce4-systemload-plugin
PORTVERSION=	1.2.4
PORTREVISION=	1
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	System Load plugin for Xfce4 panel

LICENSE=	BSD2CLAUSE

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool
USE_XFCE=	panel

SSP_UNSAFE=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS UPOWER
OPTIONS_DEFAULT=	UPOWER
OPTIONS_SUB=		yes

UPOWER_DESC=		Use upower for adapting update interval to power state

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

UPOWER_CONFIGURE_ENABLE=upower
UPOWER_LIB_DEPENDS=	libupower-glib.so:sysutils/upower

.include <bsd.port.mk>
