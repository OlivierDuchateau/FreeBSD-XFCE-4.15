# Created by: Sergey V. Dyatko <sergey.dyatko@gmail.com>
# $FreeBSD: head/deskutils/xfce4-volumed/Makefile 512378 2019-09-19 23:46:33Z madpilot $

PORTNAME=	xfce4-volumed
PORTVERSION=	0.1.13
PORTREVISION=	5
CATEGORIES=	deskutils xfce
MASTER_SITES=	XFCE/apps
DIST_SUBDIR=	xfce4

MAINTAINER=	sergey.dyatko@gmail.com
COMMENT=	Volume management daemon for the Xfce desktop

LICENSE=	GPLv3

BROKEN=		Depends on removed gtk2 library support

LIB_DEPENDS=	libnotify.so:devel/libnotify \
		libkeybinder.so:x11/keybinder \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		gmake gnome pkgconfig tar:bzip2 xfce:gtk2
USE_GNOME=	atk cairo gdkpixbuf2 glib20 gtk20 libxml2 pango
USE_GSTREAMER=	yes
USE_XFCE=	xfconf

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
