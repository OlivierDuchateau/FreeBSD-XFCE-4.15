# Created by: James Earl <jdearl@telus.net>
# $FreeBSD: head/x11-toolkits/libxfce4gui/Makefile 512772 2019-09-25 08:30:04Z pkubaj $

PORTNAME=	libxfce4gui
PORTVERSION=	4.10.0
PORTREVISION=	8
CATEGORIES=	x11-toolkits xfce
MASTER_SITES=	XFCE/archive
DISTNAME=	libxfcegui4-${DISTVERSIONFULL}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Various Gtk widgets for the Xfce Desktop

LICENSE=	GPLv2

BROKEN=		Depends on removed gtk2 library support
DEPRECATED=	Unsupported upstream, cannot work with XFCE 4.16
EXPIRATION_DATE=	2021-01-31

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		compiler:c11 gettext-tools gmake gnome libtool pathfix \
		pkgconfig tar:bzip2 xfce:gtk2 xorg
USE_GNOME=	cairo gtk20 intltool libglade2
USE_XFCE=	libutil
USE_XORG=	ice sm x11
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CONFIGURE_ARGS=	--disable-gladeui --disable-static \
		--without-html-dir
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS STARTUP
OPTIONS_DEFAULT=	STARTUP
OPTIONS_SUB=		yes

STARTUP_DESC=		Startup notification

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

STARTUP_LIB_DEPENDS=	libstartup-notification-1.so:x11/startup-notification
STARTUP_CONFIGURE_ENABLE=	startup-notification

.include <bsd.port.mk>
