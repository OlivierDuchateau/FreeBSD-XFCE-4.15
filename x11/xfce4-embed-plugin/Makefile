# Created by: Olivier Duchateau
# $FreeBSD: head/x11/xfce4-embed-plugin/Makefile 513556 2019-10-02 08:32:22Z pkubaj $

PORTNAME=	xfce4-embed-plugin
PORTVERSION=	1.6.0
PORTREVISION=	3
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Embed arbitrary windows into the Xfce panel

LICENSE=	GPLv2

BROKEN=		Depends on removed gtk2 panel library
DEPRECATED=	Unsupported upstream, cannot work with XFCE 4.16
EXPIRATION_DATE=	2021-01-31

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce:gtk2 xorg
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk20 intltool
USE_XFCE=	panel
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
