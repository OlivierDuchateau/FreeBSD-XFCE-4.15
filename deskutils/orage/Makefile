# Created by: Matt Lancereau <matt@rimasec.net>
# $FreeBSD: head/deskutils/orage/Makefile 515676 2019-10-26 09:21:16Z linimon $

PORTNAME=	orage
PORTVERSION=	4.12.1
PORTREVISION=	11
CATEGORIES=	deskutils xfce
MASTER_SITES=	XFCE/apps
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Calendar application for the Xfce Desktop

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN=		Depends on removed gtk2 panel library
DEPRECATED=	Unsupported upstream, cannot work with XFCE 4.16
EXPIRATION_DATE=	2021-01-31

LIB_DEPENDS=	libpopt.so:devel/popt \
		libdbus-glib-1.so:devel/dbus-glib \
		libdbus-1.so:devel/dbus \
		libical.so:devel/libical \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		compiler:c++11-lang desktop-file-utils gettext gmake gnome \
		libtool pkgconfig tar:bzip2 xfce xorg
USE_GNOME=	cairo gtk20 intltool
USE_XFCE=	panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CFLAGS+=	-I${LOCALBASE}/include/libical
CONFIGURE_ARGS=	--enable-dbus

PORTSCOUT=	limitw:1,even

OPTIONS_DEFINE=		NLS NOTIFY
OPTIONS_DEFAULT=	NOTIFY
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

NOTIFY_LIB_DEPENDS=	libnotify.so:devel/libnotify
NOTIFY_CONFIGURE_ENABLE=libnotify

post-patch:
	@${REINPLACE_CMD} -e 's|(datadir)/orage/doc/C|(datadir)/doc/orage/C|' \
		${WRKSRC}/doc/C/Makefile.in \
		${WRKSRC}/doc/C/images/Makefile.in

.include <bsd.port.mk>
