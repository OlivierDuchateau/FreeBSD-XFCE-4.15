# $FreeBSD: head/x11-clocks/xfce4-stopwatch-plugin/Makefile 537953 2020-06-04 20:04:54Z madpilot $

PORTNAME=	xfce4-stopwatch-plugin
PORTVERSION=	0.4.0
CATEGORIES=	x11-clocks xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	XFCE panel plugin to keep track of elapsed time

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN=		Fails to compile with xfce4-panel 4.16

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo gtk30 intltool
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
