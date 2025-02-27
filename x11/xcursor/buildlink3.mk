# $NetBSD: buildlink3.mk,v 1.23 2006/12/15 20:33:05 joerg Exp $

.include "../../mk/bsd.fast.prefs.mk"

BUILDLINK_TREE+=	xcursor

.if !defined(XCURSOR_BUILDLINK3_MK)
XCURSOR_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.xcursor+=	xcursor>=1.0
BUILDLINK_ABI_DEPENDS.xcursor+=	xcursor>=1.1.2nb1
BUILDLINK_PKGSRCDIR.xcursor?=	../../x11/xcursor

.include "../../x11/libXfixes/buildlink3.mk"
.include "../../x11/libXrender/buildlink3.mk"
.endif # XCURSOR_BUILDLINK3_MK

BUILDLINK_TREE+=	-xcursor
