/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef BGP_CONFIGURATOR_H
#define BGP_CONFIGURATOR_H

#include <thrift/c_glib/processor/thrift_dispatch_processor.h>

#include "vpnservice_types.h"

/* BgpConfigurator service interface */
typedef struct _BgpConfiguratorIf BgpConfiguratorIf;  /* dummy object */

struct _BgpConfiguratorIfInterface
{
  GTypeInterface parent;

  gboolean (*start_bgp) (BgpConfiguratorIf *iface, gint32* _return, const gint64 asNumber, const gchar * routerId, const gint32 port, const gint32 holdTime, const gint32 keepAliveTime, const gint32 stalepathTime, const gboolean announceFbit, GError **error);
  gboolean (*stop_bgp) (BgpConfiguratorIf *iface, gint32* _return, const gint64 asNumber, GError **error);
  gboolean (*create_peer) (BgpConfiguratorIf *iface, gint32* _return, const gchar * ipAddress, const gint64 asNumber, GError **error);
  gboolean (*delete_peer) (BgpConfiguratorIf *iface, gint32* _return, const gchar * ipAddress, GError **error);
  gboolean (*add_vrf) (BgpConfiguratorIf *iface, gint32* _return, const gchar * rd, const GPtrArray * irts, const GPtrArray * erts, GError **error);
  gboolean (*del_vrf) (BgpConfiguratorIf *iface, gint32* _return, const gchar * rd, GError **error);
  gboolean (*push_route) (BgpConfiguratorIf *iface, gint32* _return, const gchar * prefix, const gchar * nexthop, const gchar * rd, const gint32 label, GError **error);
  gboolean (*withdraw_route) (BgpConfiguratorIf *iface, gint32* _return, const gchar * prefix, const gchar * rd, GError **error);
  gboolean (*set_ebgp_multihop) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const gint32 nHops, GError **error);
  gboolean (*unset_ebgp_multihop) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, GError **error);
  gboolean (*set_update_source) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const gchar * srcIp, GError **error);
  gboolean (*unset_update_source) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, GError **error);
  gboolean (*enable_address_family) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError **error);
  gboolean (*disable_address_family) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError **error);
  gboolean (*set_log_config) (BgpConfiguratorIf *iface, gint32* _return, const gchar * logFileName, const gchar * logLevel, GError **error);
  gboolean (*enable_graceful_restart) (BgpConfiguratorIf *iface, gint32* _return, const gint32 stalepathTime, GError **error);
  gboolean (*disable_graceful_restart) (BgpConfiguratorIf *iface, gint32* _return, GError **error);
  gboolean (*get_routes) (BgpConfiguratorIf *iface, Routes ** _return, const gint32 optype, const gint32 winSize, GError **error);
};
typedef struct _BgpConfiguratorIfInterface BgpConfiguratorIfInterface;

GType bgp_configurator_if_get_type (void);
#define TYPE_BGP_CONFIGURATOR_IF (bgp_configurator_if_get_type())
#define BGP_CONFIGURATOR_IF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BGP_CONFIGURATOR_IF, BgpConfiguratorIf))
#define IS_BGP_CONFIGURATOR_IF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BGP_CONFIGURATOR_IF))
#define BGP_CONFIGURATOR_IF_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), TYPE_BGP_CONFIGURATOR_IF, BgpConfiguratorIfInterface))

gboolean bgp_configurator_if_start_bgp (BgpConfiguratorIf *iface, gint32* _return, const gint64 asNumber, const gchar * routerId, const gint32 port, const gint32 holdTime, const gint32 keepAliveTime, const gint32 stalepathTime, const gboolean announceFbit, GError **error);
gboolean bgp_configurator_if_stop_bgp (BgpConfiguratorIf *iface, gint32* _return, const gint64 asNumber, GError **error);
gboolean bgp_configurator_if_create_peer (BgpConfiguratorIf *iface, gint32* _return, const gchar * ipAddress, const gint64 asNumber, GError **error);
gboolean bgp_configurator_if_delete_peer (BgpConfiguratorIf *iface, gint32* _return, const gchar * ipAddress, GError **error);
gboolean bgp_configurator_if_add_vrf (BgpConfiguratorIf *iface, gint32* _return, const gchar * rd, const GPtrArray * irts, const GPtrArray * erts, GError **error);
gboolean bgp_configurator_if_del_vrf (BgpConfiguratorIf *iface, gint32* _return, const gchar * rd, GError **error);
gboolean bgp_configurator_if_push_route (BgpConfiguratorIf *iface, gint32* _return, const gchar * prefix, const gchar * nexthop, const gchar * rd, const gint32 label, GError **error);
gboolean bgp_configurator_if_withdraw_route (BgpConfiguratorIf *iface, gint32* _return, const gchar * prefix, const gchar * rd, GError **error);
gboolean bgp_configurator_if_set_ebgp_multihop (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const gint32 nHops, GError **error);
gboolean bgp_configurator_if_unset_ebgp_multihop (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, GError **error);
gboolean bgp_configurator_if_set_update_source (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const gchar * srcIp, GError **error);
gboolean bgp_configurator_if_unset_update_source (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, GError **error);
gboolean bgp_configurator_if_enable_address_family (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError **error);
gboolean bgp_configurator_if_disable_address_family (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError **error);
gboolean bgp_configurator_if_set_log_config (BgpConfiguratorIf *iface, gint32* _return, const gchar * logFileName, const gchar * logLevel, GError **error);
gboolean bgp_configurator_if_enable_graceful_restart (BgpConfiguratorIf *iface, gint32* _return, const gint32 stalepathTime, GError **error);
gboolean bgp_configurator_if_disable_graceful_restart (BgpConfiguratorIf *iface, gint32* _return, GError **error);
gboolean bgp_configurator_if_get_routes (BgpConfiguratorIf *iface, Routes ** _return, const gint32 optype, const gint32 winSize, GError **error);

/* BgpConfigurator service client */
struct _BgpConfiguratorClient
{
  GObject parent;

  ThriftProtocol *input_protocol;
  ThriftProtocol *output_protocol;
};
typedef struct _BgpConfiguratorClient BgpConfiguratorClient;

struct _BgpConfiguratorClientClass
{
  GObjectClass parent;
};
typedef struct _BgpConfiguratorClientClass BgpConfiguratorClientClass;

GType bgp_configurator_client_get_type (void);
#define TYPE_BGP_CONFIGURATOR_CLIENT (bgp_configurator_client_get_type())
#define BGP_CONFIGURATOR_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BGP_CONFIGURATOR_CLIENT, BgpConfiguratorClient))
#define BGP_CONFIGURATOR_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_BGP_CONFIGURATOR_CLIENT, BgpConfiguratorClientClass))
#define BGP_CONFIGURATOR_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BGP_CONFIGURATOR_CLIENT))
#define BGP_CONFIGURATOR_IS_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_BGP_CONFIGURATOR_CLIENT))
#define BGP_CONFIGURATOR_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BGP_CONFIGURATOR_CLIENT, BgpConfiguratorClientClass))

gboolean bgp_configurator_client_start_bgp (BgpConfiguratorIf * iface, gint32* _return, const gint64 asNumber, const gchar * routerId, const gint32 port, const gint32 holdTime, const gint32 keepAliveTime, const gint32 stalepathTime, const gboolean announceFbit, GError ** error);
gboolean bgp_configurator_client_send_start_bgp (BgpConfiguratorIf * iface, const gint64 asNumber, const gchar * routerId, const gint32 port, const gint32 holdTime, const gint32 keepAliveTime, const gint32 stalepathTime, const gboolean announceFbit, GError ** error);
gboolean bgp_configurator_client_recv_start_bgp (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_stop_bgp (BgpConfiguratorIf * iface, gint32* _return, const gint64 asNumber, GError ** error);
gboolean bgp_configurator_client_send_stop_bgp (BgpConfiguratorIf * iface, const gint64 asNumber, GError ** error);
gboolean bgp_configurator_client_recv_stop_bgp (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_create_peer (BgpConfiguratorIf * iface, gint32* _return, const gchar * ipAddress, const gint64 asNumber, GError ** error);
gboolean bgp_configurator_client_send_create_peer (BgpConfiguratorIf * iface, const gchar * ipAddress, const gint64 asNumber, GError ** error);
gboolean bgp_configurator_client_recv_create_peer (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_delete_peer (BgpConfiguratorIf * iface, gint32* _return, const gchar * ipAddress, GError ** error);
gboolean bgp_configurator_client_send_delete_peer (BgpConfiguratorIf * iface, const gchar * ipAddress, GError ** error);
gboolean bgp_configurator_client_recv_delete_peer (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_add_vrf (BgpConfiguratorIf * iface, gint32* _return, const gchar * rd, const GPtrArray * irts, const GPtrArray * erts, GError ** error);
gboolean bgp_configurator_client_send_add_vrf (BgpConfiguratorIf * iface, const gchar * rd, const GPtrArray * irts, const GPtrArray * erts, GError ** error);
gboolean bgp_configurator_client_recv_add_vrf (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_del_vrf (BgpConfiguratorIf * iface, gint32* _return, const gchar * rd, GError ** error);
gboolean bgp_configurator_client_send_del_vrf (BgpConfiguratorIf * iface, const gchar * rd, GError ** error);
gboolean bgp_configurator_client_recv_del_vrf (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_push_route (BgpConfiguratorIf * iface, gint32* _return, const gchar * prefix, const gchar * nexthop, const gchar * rd, const gint32 label, GError ** error);
gboolean bgp_configurator_client_send_push_route (BgpConfiguratorIf * iface, const gchar * prefix, const gchar * nexthop, const gchar * rd, const gint32 label, GError ** error);
gboolean bgp_configurator_client_recv_push_route (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_withdraw_route (BgpConfiguratorIf * iface, gint32* _return, const gchar * prefix, const gchar * rd, GError ** error);
gboolean bgp_configurator_client_send_withdraw_route (BgpConfiguratorIf * iface, const gchar * prefix, const gchar * rd, GError ** error);
gboolean bgp_configurator_client_recv_withdraw_route (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_set_ebgp_multihop (BgpConfiguratorIf * iface, gint32* _return, const gchar * peerIp, const gint32 nHops, GError ** error);
gboolean bgp_configurator_client_send_set_ebgp_multihop (BgpConfiguratorIf * iface, const gchar * peerIp, const gint32 nHops, GError ** error);
gboolean bgp_configurator_client_recv_set_ebgp_multihop (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_unset_ebgp_multihop (BgpConfiguratorIf * iface, gint32* _return, const gchar * peerIp, GError ** error);
gboolean bgp_configurator_client_send_unset_ebgp_multihop (BgpConfiguratorIf * iface, const gchar * peerIp, GError ** error);
gboolean bgp_configurator_client_recv_unset_ebgp_multihop (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_set_update_source (BgpConfiguratorIf * iface, gint32* _return, const gchar * peerIp, const gchar * srcIp, GError ** error);
gboolean bgp_configurator_client_send_set_update_source (BgpConfiguratorIf * iface, const gchar * peerIp, const gchar * srcIp, GError ** error);
gboolean bgp_configurator_client_recv_set_update_source (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_unset_update_source (BgpConfiguratorIf * iface, gint32* _return, const gchar * peerIp, GError ** error);
gboolean bgp_configurator_client_send_unset_update_source (BgpConfiguratorIf * iface, const gchar * peerIp, GError ** error);
gboolean bgp_configurator_client_recv_unset_update_source (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_enable_address_family (BgpConfiguratorIf * iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError ** error);
gboolean bgp_configurator_client_send_enable_address_family (BgpConfiguratorIf * iface, const gchar * peerIp, const af_afi afi, const af_safi safi, GError ** error);
gboolean bgp_configurator_client_recv_enable_address_family (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_disable_address_family (BgpConfiguratorIf * iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError ** error);
gboolean bgp_configurator_client_send_disable_address_family (BgpConfiguratorIf * iface, const gchar * peerIp, const af_afi afi, const af_safi safi, GError ** error);
gboolean bgp_configurator_client_recv_disable_address_family (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_set_log_config (BgpConfiguratorIf * iface, gint32* _return, const gchar * logFileName, const gchar * logLevel, GError ** error);
gboolean bgp_configurator_client_send_set_log_config (BgpConfiguratorIf * iface, const gchar * logFileName, const gchar * logLevel, GError ** error);
gboolean bgp_configurator_client_recv_set_log_config (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_enable_graceful_restart (BgpConfiguratorIf * iface, gint32* _return, const gint32 stalepathTime, GError ** error);
gboolean bgp_configurator_client_send_enable_graceful_restart (BgpConfiguratorIf * iface, const gint32 stalepathTime, GError ** error);
gboolean bgp_configurator_client_recv_enable_graceful_restart (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_disable_graceful_restart (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_send_disable_graceful_restart (BgpConfiguratorIf * iface, GError ** error);
gboolean bgp_configurator_client_recv_disable_graceful_restart (BgpConfiguratorIf * iface, gint32* _return, GError ** error);
gboolean bgp_configurator_client_get_routes (BgpConfiguratorIf * iface, Routes ** _return, const gint32 optype, const gint32 winSize, GError ** error);
gboolean bgp_configurator_client_send_get_routes (BgpConfiguratorIf * iface, const gint32 optype, const gint32 winSize, GError ** error);
gboolean bgp_configurator_client_recv_get_routes (BgpConfiguratorIf * iface, Routes ** _return, GError ** error);
void bgp_configurator_client_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
void bgp_configurator_client_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);

/* BgpConfigurator handler (abstract base class) */
struct _BgpConfiguratorHandler
{
  GObject parent;
};
typedef struct _BgpConfiguratorHandler BgpConfiguratorHandler;

struct _BgpConfiguratorHandlerClass
{
  GObjectClass parent;

  gboolean (*start_bgp) (BgpConfiguratorIf *iface, gint32* _return, const gint64 asNumber, const gchar * routerId, const gint32 port, const gint32 holdTime, const gint32 keepAliveTime, const gint32 stalepathTime, const gboolean announceFbit, GError **error);
  gboolean (*stop_bgp) (BgpConfiguratorIf *iface, gint32* _return, const gint64 asNumber, GError **error);
  gboolean (*create_peer) (BgpConfiguratorIf *iface, gint32* _return, const gchar * ipAddress, const gint64 asNumber, GError **error);
  gboolean (*delete_peer) (BgpConfiguratorIf *iface, gint32* _return, const gchar * ipAddress, GError **error);
  gboolean (*add_vrf) (BgpConfiguratorIf *iface, gint32* _return, const gchar * rd, const GPtrArray * irts, const GPtrArray * erts, GError **error);
  gboolean (*del_vrf) (BgpConfiguratorIf *iface, gint32* _return, const gchar * rd, GError **error);
  gboolean (*push_route) (BgpConfiguratorIf *iface, gint32* _return, const gchar * prefix, const gchar * nexthop, const gchar * rd, const gint32 label, GError **error);
  gboolean (*withdraw_route) (BgpConfiguratorIf *iface, gint32* _return, const gchar * prefix, const gchar * rd, GError **error);
  gboolean (*set_ebgp_multihop) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const gint32 nHops, GError **error);
  gboolean (*unset_ebgp_multihop) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, GError **error);
  gboolean (*set_update_source) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const gchar * srcIp, GError **error);
  gboolean (*unset_update_source) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, GError **error);
  gboolean (*enable_address_family) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError **error);
  gboolean (*disable_address_family) (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError **error);
  gboolean (*set_log_config) (BgpConfiguratorIf *iface, gint32* _return, const gchar * logFileName, const gchar * logLevel, GError **error);
  gboolean (*enable_graceful_restart) (BgpConfiguratorIf *iface, gint32* _return, const gint32 stalepathTime, GError **error);
  gboolean (*disable_graceful_restart) (BgpConfiguratorIf *iface, gint32* _return, GError **error);
  gboolean (*get_routes) (BgpConfiguratorIf *iface, Routes ** _return, const gint32 optype, const gint32 winSize, GError **error);
};
typedef struct _BgpConfiguratorHandlerClass BgpConfiguratorHandlerClass;

GType bgp_configurator_handler_get_type (void);
#define TYPE_BGP_CONFIGURATOR_HANDLER (bgp_configurator_handler_get_type())
#define BGP_CONFIGURATOR_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BGP_CONFIGURATOR_HANDLER, BgpConfiguratorHandler))
#define IS_BGP_CONFIGURATOR_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BGP_CONFIGURATOR_HANDLER))
#define BGP_CONFIGURATOR_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_BGP_CONFIGURATOR_HANDLER, BgpConfiguratorHandlerClass))
#define IS_BGP_CONFIGURATOR_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_BGP_CONFIGURATOR_HANDLER))
#define BGP_CONFIGURATOR_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BGP_CONFIGURATOR_HANDLER, BgpConfiguratorHandlerClass))

gboolean bgp_configurator_handler_start_bgp (BgpConfiguratorIf *iface, gint32* _return, const gint64 asNumber, const gchar * routerId, const gint32 port, const gint32 holdTime, const gint32 keepAliveTime, const gint32 stalepathTime, const gboolean announceFbit, GError **error);
gboolean bgp_configurator_handler_stop_bgp (BgpConfiguratorIf *iface, gint32* _return, const gint64 asNumber, GError **error);
gboolean bgp_configurator_handler_create_peer (BgpConfiguratorIf *iface, gint32* _return, const gchar * ipAddress, const gint64 asNumber, GError **error);
gboolean bgp_configurator_handler_delete_peer (BgpConfiguratorIf *iface, gint32* _return, const gchar * ipAddress, GError **error);
gboolean bgp_configurator_handler_add_vrf (BgpConfiguratorIf *iface, gint32* _return, const gchar * rd, const GPtrArray * irts, const GPtrArray * erts, GError **error);
gboolean bgp_configurator_handler_del_vrf (BgpConfiguratorIf *iface, gint32* _return, const gchar * rd, GError **error);
gboolean bgp_configurator_handler_push_route (BgpConfiguratorIf *iface, gint32* _return, const gchar * prefix, const gchar * nexthop, const gchar * rd, const gint32 label, GError **error);
gboolean bgp_configurator_handler_withdraw_route (BgpConfiguratorIf *iface, gint32* _return, const gchar * prefix, const gchar * rd, GError **error);
gboolean bgp_configurator_handler_set_ebgp_multihop (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const gint32 nHops, GError **error);
gboolean bgp_configurator_handler_unset_ebgp_multihop (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, GError **error);
gboolean bgp_configurator_handler_set_update_source (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const gchar * srcIp, GError **error);
gboolean bgp_configurator_handler_unset_update_source (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, GError **error);
gboolean bgp_configurator_handler_enable_address_family (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError **error);
gboolean bgp_configurator_handler_disable_address_family (BgpConfiguratorIf *iface, gint32* _return, const gchar * peerIp, const af_afi afi, const af_safi safi, GError **error);
gboolean bgp_configurator_handler_set_log_config (BgpConfiguratorIf *iface, gint32* _return, const gchar * logFileName, const gchar * logLevel, GError **error);
gboolean bgp_configurator_handler_enable_graceful_restart (BgpConfiguratorIf *iface, gint32* _return, const gint32 stalepathTime, GError **error);
gboolean bgp_configurator_handler_disable_graceful_restart (BgpConfiguratorIf *iface, gint32* _return, GError **error);
gboolean bgp_configurator_handler_get_routes (BgpConfiguratorIf *iface, Routes ** _return, const gint32 optype, const gint32 winSize, GError **error);

/* BgpConfigurator processor */
struct _BgpConfiguratorProcessor
{
  ThriftDispatchProcessor parent;

  /* protected */
  BgpConfiguratorHandler *handler;
  GHashTable *process_map;
};
typedef struct _BgpConfiguratorProcessor BgpConfiguratorProcessor;

struct _BgpConfiguratorProcessorClass
{
  ThriftDispatchProcessorClass parent;

  /* protected */
  gboolean (*dispatch_call) (ThriftDispatchProcessor *processor,
                             ThriftProtocol *in,
                             ThriftProtocol *out,
                             gchar *fname,
                             gint32 seqid,
                             GError **error);
};
typedef struct _BgpConfiguratorProcessorClass BgpConfiguratorProcessorClass;

GType bgp_configurator_processor_get_type (void);
#define TYPE_BGP_CONFIGURATOR_PROCESSOR (bgp_configurator_processor_get_type())
#define BGP_CONFIGURATOR_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BGP_CONFIGURATOR_PROCESSOR, BgpConfiguratorProcessor))
#define IS_BGP_CONFIGURATOR_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BGP_CONFIGURATOR_PROCESSOR))
#define BGP_CONFIGURATOR_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_BGP_CONFIGURATOR_PROCESSOR, BgpConfiguratorProcessorClass))
#define IS_BGP_CONFIGURATOR_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_BGP_CONFIGURATOR_PROCESSOR))
#define BGP_CONFIGURATOR_PROCESSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BGP_CONFIGURATOR_PROCESSOR, BgpConfiguratorProcessorClass))

#endif /* BGP_CONFIGURATOR_H */
