# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/deskutils/xfce4-generic-slider/Makefile 512378 2019-09-19 23:46:33Z madpilot $

PORTNAME=	xfce4-generic-slider
PORTVERSION=	0.0.20171223
PORTREVISION=	2
CATEGORIES=	deskutils

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Slider plugin to adjust and/or monitor any numeric variable

LICENSE=	GPLv3

BROKEN=		Depends on removed gtk2 panel library

BUILD_DEPENDS=	xdt-autogen:devel/xfce4-dev-tools
LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		gettext gmake gnome libtool pkgconfig xfce:gtk2
USE_GNOME=	atk cairo gdkpixbuf2 glib20 gtk20 intltool pango
USE_XFCE=	libmenu panel

USE_GITHUB=	yes
GH_ACCOUNT=	xfce-mirror
GH_TAGNAME=	d1fc31f

PLIST_FILES=	lib/xfce4/panel/plugins/libgeneric-slider.so \
		share/xfce4/panel/plugins/generic-slider.desktop

pre-configure:
	(cd ${WRKSRC} && ./autogen.sh)

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/xfce4/panel/plugins/libgeneric-slider.so

.include <bsd.port.mk>
