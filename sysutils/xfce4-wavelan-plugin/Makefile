# Created by: Manuel Rabade Garica <mig@mig-29.net>
# $FreeBSD: head/sysutils/xfce4-wavelan-plugin/Makefile 559193 2020-12-24 21:19:05Z madpilot $

PORTNAME=	xfce4-wavelan-plugin
PORTVERSION=	0.6.2
PORTREVISION=	1
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Displays various information about a WaveLAN device

LICENSE=	BSD3CLAUSE

BROKEN=		Fails to compile with xfce4-panel 4.16

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf2 gtk30 glib20 intltool
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
