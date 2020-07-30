# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/devel/xfce4-dev-tools/Makefile 517048 2019-11-08 11:39:00Z tobik $

PORTNAME=	xfce4-dev-tools
PORTVERSION=	4.15.0
CATEGORIES=	devel xfce
MASTER_SITES=	XFCE
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce development tools

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	autoconf>=2.69:devel/autoconf \
		automake>=1.15:devel/automake \
		libtoolize:devel/libtool \
		bash:shells/bash

USES=		gnome pkgconfig shebangfix tar:bzip2 xfce
USE_GNOME=	glib20
SHEBANG_FILES=	helpers/xfce-get-translations

GNU_CONFIGURE=	yes

PORTSCOUT=	limitw:1,even

.include <bsd.port.mk>
