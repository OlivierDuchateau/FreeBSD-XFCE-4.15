# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: head/sysutils/xfburn/Makefile 516587 2019-11-03 19:14:10Z madpilot $

PORTNAME=	xfburn
PORTVERSION=	0.6.1
CATEGORIES=	sysutils
MASTER_SITES=	XFCE/apps
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	CD/DVD burning tool for Xfce

LICENSE=	GPLv2

LIB_DEPENDS=	libburn.so:devel/libburn \
		libisofs.so:devel/libisofs
RUN_DEPENDS=	cdrdao:sysutils/cdrdao

USES=		compiler:c11 desktop-file-utils gettext-tools gmake gnome \
		pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo glib20 gtk30 intltool
USE_XFCE=	libexo

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CONFIGURE_ARGS=	--disable-gudev

OPTIONS_DEFINE=			GSTREAMER NLS
OPTIONS_DEFAULT=		GSTREAMER
OPTIONS_SUB=			yes

GSTREAMER_CONFIGURE_ENABLE=	gstreamer
GSTREAMER_USE=			gstreamer1=yes,faac,flac,lame,vorbis,wavpack

NLS_CONFIGURE_ENABLE=		nls
NLS_USES=			gettext-runtime

.include <bsd.port.mk>
