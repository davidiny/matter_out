/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __DBUSWPANETWORK_H__
#define __DBUSWPANETWORK_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for fi.w1.wpa_supplicant1.Network */

#define WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK (wpa_fi_w1_wpa_supplicant1_network_get_type ())
#define WPA_FI_W1_WPA_SUPPLICANT1_NETWORK(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK, WpaFiW1Wpa_supplicant1Network))
#define WPA_IS_FI_W1_WPA_SUPPLICANT1_NETWORK(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK))
#define WPA_FI_W1_WPA_SUPPLICANT1_NETWORK_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK, WpaFiW1Wpa_supplicant1NetworkIface))

struct _WpaFiW1Wpa_supplicant1Network;
typedef struct _WpaFiW1Wpa_supplicant1Network WpaFiW1Wpa_supplicant1Network;
typedef struct _WpaFiW1Wpa_supplicant1NetworkIface WpaFiW1Wpa_supplicant1NetworkIface;

struct _WpaFiW1Wpa_supplicant1NetworkIface
{
  GTypeInterface parent_iface;


  gboolean  (*get_enabled) (WpaFiW1Wpa_supplicant1Network *object);

  GVariant * (*get_properties) (WpaFiW1Wpa_supplicant1Network *object);

  void (*properties_changed) (
    WpaFiW1Wpa_supplicant1Network *object,
    GVariant *arg_properties);

};

GType wpa_fi_w1_wpa_supplicant1_network_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *wpa_fi_w1_wpa_supplicant1_network_interface_info (void);
guint wpa_fi_w1_wpa_supplicant1_network_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void wpa_fi_w1_wpa_supplicant1_network_emit_properties_changed (
    WpaFiW1Wpa_supplicant1Network *object,
    GVariant *arg_properties);



/* D-Bus property accessors: */
GVariant *wpa_fi_w1_wpa_supplicant1_network_get_properties (WpaFiW1Wpa_supplicant1Network *object);
GVariant *wpa_fi_w1_wpa_supplicant1_network_dup_properties (WpaFiW1Wpa_supplicant1Network *object);
void wpa_fi_w1_wpa_supplicant1_network_set_properties (WpaFiW1Wpa_supplicant1Network *object, GVariant *value);

gboolean wpa_fi_w1_wpa_supplicant1_network_get_enabled (WpaFiW1Wpa_supplicant1Network *object);
void wpa_fi_w1_wpa_supplicant1_network_set_enabled (WpaFiW1Wpa_supplicant1Network *object, gboolean value);


/* ---- */

#define WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY (wpa_fi_w1_wpa_supplicant1_network_proxy_get_type ())
#define WPA_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY, WpaFiW1Wpa_supplicant1NetworkProxy))
#define WPA_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY, WpaFiW1Wpa_supplicant1NetworkProxyClass))
#define WPA_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY, WpaFiW1Wpa_supplicant1NetworkProxyClass))
#define WPA_IS_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY))
#define WPA_IS_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_PROXY))

typedef struct _WpaFiW1Wpa_supplicant1NetworkProxy WpaFiW1Wpa_supplicant1NetworkProxy;
typedef struct _WpaFiW1Wpa_supplicant1NetworkProxyClass WpaFiW1Wpa_supplicant1NetworkProxyClass;
typedef struct _WpaFiW1Wpa_supplicant1NetworkProxyPrivate WpaFiW1Wpa_supplicant1NetworkProxyPrivate;

struct _WpaFiW1Wpa_supplicant1NetworkProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  WpaFiW1Wpa_supplicant1NetworkProxyPrivate *priv;
};

struct _WpaFiW1Wpa_supplicant1NetworkProxyClass
{
  GDBusProxyClass parent_class;
};

GType wpa_fi_w1_wpa_supplicant1_network_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (WpaFiW1Wpa_supplicant1NetworkProxy, g_object_unref)
#endif

void wpa_fi_w1_wpa_supplicant1_network_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
WpaFiW1Wpa_supplicant1Network *wpa_fi_w1_wpa_supplicant1_network_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
WpaFiW1Wpa_supplicant1Network *wpa_fi_w1_wpa_supplicant1_network_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void wpa_fi_w1_wpa_supplicant1_network_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
WpaFiW1Wpa_supplicant1Network *wpa_fi_w1_wpa_supplicant1_network_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
WpaFiW1Wpa_supplicant1Network *wpa_fi_w1_wpa_supplicant1_network_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON (wpa_fi_w1_wpa_supplicant1_network_skeleton_get_type ())
#define WPA_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON, WpaFiW1Wpa_supplicant1NetworkSkeleton))
#define WPA_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON, WpaFiW1Wpa_supplicant1NetworkSkeletonClass))
#define WPA_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON, WpaFiW1Wpa_supplicant1NetworkSkeletonClass))
#define WPA_IS_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON))
#define WPA_IS_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), WPA_TYPE_FI_W1_WPA_SUPPLICANT1_NETWORK_SKELETON))

typedef struct _WpaFiW1Wpa_supplicant1NetworkSkeleton WpaFiW1Wpa_supplicant1NetworkSkeleton;
typedef struct _WpaFiW1Wpa_supplicant1NetworkSkeletonClass WpaFiW1Wpa_supplicant1NetworkSkeletonClass;
typedef struct _WpaFiW1Wpa_supplicant1NetworkSkeletonPrivate WpaFiW1Wpa_supplicant1NetworkSkeletonPrivate;

struct _WpaFiW1Wpa_supplicant1NetworkSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  WpaFiW1Wpa_supplicant1NetworkSkeletonPrivate *priv;
};

struct _WpaFiW1Wpa_supplicant1NetworkSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType wpa_fi_w1_wpa_supplicant1_network_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (WpaFiW1Wpa_supplicant1NetworkSkeleton, g_object_unref)
#endif

WpaFiW1Wpa_supplicant1Network *wpa_fi_w1_wpa_supplicant1_network_skeleton_new (void);


G_END_DECLS

#endif /* __DBUSWPANETWORK_H__ */
