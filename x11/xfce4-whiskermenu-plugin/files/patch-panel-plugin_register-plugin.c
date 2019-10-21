--- panel-plugin/register-plugin.c.orig	2019-08-07 14:24:14 UTC
+++ panel-plugin/register-plugin.c
@@ -16,6 +16,7 @@
  */
 
 #include <libxfce4panel/xfce-panel-plugin.h>
+#include <libxfce4panel/xfce-panel-macros.h>
 
 extern void whiskermenu_construct(XfcePanelPlugin* plugin);
 
